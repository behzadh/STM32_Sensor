
% Copyright (c) 2020 STMicroelectronics. All rights reserved.
%
% The STMicroelectronics corporate logo is a trademark of STMicroelectronics
%                         
% Redistribution and use in source and binary forms, with or without modification,
% are permitted provided that the following conditions are met:
%          
% - Redistributions of source code must retain the above copyright notice, this 
% list of conditions and the following disclaimer.
% - Redistributions in binary form must reproduce the above copyright notice, 
% this list of conditions and the following disclaimer in the documentation and/or
% other materials provided with the distribution.
% - Neither the name nor trademarks of STMicroelectronics International N.V. nor 
% any other STMicroelectronics company nor the names of its contributors may be 
% used to endorse or promote products derived from this software without specific 
% prior written permission.
%                         
% THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND 
% ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED 
% WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. 
% IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, 
% INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, 
% BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, 
% DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF 
% LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE 
% OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED 
% OF THE POSSIBILITY OF SUCH DAMAGE.

fclose all;
clear all;
close all;
clc;

[name,fpath] = uigetfile('*.dat','Select one or more STWIN sensors data logs','MultiSelect','on');
if iscell(name)
    fileNames = strings(1, length(name));
    for ii = 1:length(name)
        fileNames(ii) = cell2mat(name(ii));
    end
else
    fileNames = strings(1, 1);
    fileNames(1) = name;
end

configJSONFileName = 'DeviceConfig.json';
acquisitonJSONFileName = 'AcquisitionInfo.json';

cjson = get_jsonFile(configJSONFileName, fpath);
ajson = get_jsonFile(acquisitonJSONFileName, fpath);

for ii = 1:length(fileNames)
    [sensor, subSensorType, units, sensor_idx, sub_idx] = get_subsensorInfo(cjson, fileNames(ii));
    [samples_data, samples_time] = get_subsensorData(cjson, fileNames(ii), fpath);
    
    
    figure
    hold on
    grid on
    
    [n_axes, n_samples] = size(samples_data);
    
    for kk = 1:n_axes
        plot(samples_time,samples_data(kk, :), 'color',rand(1,3))
    end
    ylabel(units)
    xlabel('sec')
    title([sensor, ' - ', subSensorType])


end


function [sensor, subSensor, units, sensor_idx, subSensor_idx] = get_subsensorInfo(cj, fname)
    fileNameCell = strsplit(fname, {'_', '.'});
    sensor = fileNameCell{1};
	subSensor = fileNameCell{2};
    % now find the index
    for se = 1:cj.device.deviceInfo.nSensor
        if strcmp( cj.device.sensor(se).name, sensor )
            sensor_idx = se;
            for su = 1:length( cj.device.sensor(se).sensorDescriptor.subSensorDescriptor )
                if strcmp( cj.device.sensor(se).sensorDescriptor.subSensorDescriptor(su).sensorType, subSensor )
                    subSensor_idx = su;
                    units = cj.device.sensor(se).sensorDescriptor.subSensorDescriptor(su).unit;
                end
            end
        end
    end
end


function fjson = get_jsonFile(fileJSON, fpath)
    fullName = strcat(fpath, fileJSON);
    fid = fopen(fullName);
    str = fread(fid,inf);
    fclose(fid);
    fjson = jsondecode(char(str)');
end
