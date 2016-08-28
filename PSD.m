clc
clear all
close all
clc

%Input Parameters
Rb=1; 
Tb=1/Rb;
f=0:0.05*Rb:2*Rb;
ax=f*Tb;


% PSD of Polar Signal

P=Tb*(sinc(ax).*sinc(ax));
% figure(1)
% plot(f,P,'r')
% grid on
% box on
% xlabel('f ---->')
% ylabel('Power Spectral Density ---->')
% title('PSD for Polar Signal')

% PSD of Unipolar Signal
P1=0.5*Tb*(sinc(ax).*sinc(ax))+ 0.5 *dirac(f);
% figure(2)
% plot(f,P1,'r')
% grid on
% box on
% xlabel('f ---->')
% ylabel('Power Spectral Density ---->')
% title('PSD for Unipolar Signal')

% PSD of Manchester Signal
P2=Tb*(sinc(ax/2)).^2.*(sin(pi*ax/2)).^2;
% figure(3)
% plot(f,P2,'r')
% grid on
% box on
% xlabel('f ---->')
% ylabel('Power Spectral Density ---->')
% title('PSD for Manchester Signal')

% PSD of Bipolar Signal
P3=Tb*(sinc(ax/2)).^2.*(sin(pi*ax)).^2;
% hold on
% figure(4)
% plot(f,P3,'r')
% grid on
% box on
% xlabel('f ---->')
% ylabel('Power Spectral Density ---->')
% title('PSD for Bipolar Signal')

%Final PSD of Binary line codes
hold on
figure(1)
plot(f,P,'r')
plot(f,P1,'g')
plot(f,P2,'b')
plot(f,P3,'m')
grid on
box on
xlabel('f ---->')
ylabel('Power Spectral Density ---->')
title('PSD for Various Binary Line Codes')
legend('PSD for Polar Signal','PSD for Unipolar Signal',...
    'PSD for Manchester Signal','PSD for Bipolar Signal') 