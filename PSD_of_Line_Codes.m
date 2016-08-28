inputBits=randi([0 1],1,1000);  % R2008a syntax =&gt; randsrc(1,10000,[0 1]);
colordef white;
Rb=2e6;  % Bit Rate
amplitude=2; % Peak-Peak Amplitude
[time,xiPolar,Fs]=Line_Encoder(inputBits,Rb,amplitude,'polar');
[pyy,fy]=psd(xiPolar);
figure(1);
plotHandle=plot(fy*Fs/2,10*log10((pyy)),'k');
set(plotHandle,'LineWidth',2.5);
hold on;

[time,xiUnipolar,Fs]=Line_Encoder(inputBits,Rb,amplitude,'unipolar');
[pyy,fy]=psd(xiUnipolar);
plotHandle=plot(fy*Fs/2,10*log10((pyy)),'r');
set(plotHandle,'LineWidth',2.5);

hold on;

[time,xiManchester,Fs]=Line_Encoder(inputBits,Rb,amplitude,'Manchester');
[pyy,fy]=psd(xiManchester);
plotHandle=plot(fy*Fs/2,10*log10((pyy)),'g');
set(plotHandle,'LineWidth',2.5);
legend('polar','unipolar','Manchester');
title('PSD of Line Codes');
grid on;

hold off;

figure(2);
subplot(4,1,1);
plot(inputBits);
xlabel('Time (Seconds)');
ylabel('Amplitude (Voltage)');
title('Input bit stream');
maxTime=max(time);
maxAmp=max(inputBits);
minAmp=min(inputBits);
axis([0,1000,minAmp-0.5,maxAmp+0.5]);

subplot(4,1,2);
plot(time,xiPolar);
xlabel('Time (Seconds)');
ylabel('Amplitude (Voltage)');
title('Polar NRZ coded');
maxTime=max(time);
maxAmp=max(xiPolar);
minAmp=min(xiPolar);
axis([0,maxTime,minAmp-0.5,maxAmp+0.5]);

subplot(4,1,3);
plot(time,xiUnipolar);
xlabel('Time (Seconds)');
ylabel('Amplitude (Voltage)');
title('Unipolar NRZ coded');
maxTime=max(time);
maxAmp=max(xiUnipolar);
minAmp=min(xiUnipolar);
axis([0,maxTime,minAmp-0.5,maxAmp+0.5]);

subplot(4,1,4);
plot(time,xiManchester);
xlabel('Time (Seconds)');
ylabel('Amplitude (Voltage)');
title('Manchester Coded');
maxTime=max(time);
maxAmp=max(xiManchester);
minAmp=min(xiManchester);
axis([0,maxTime,minAmp-0.5,maxAmp+0.5]);