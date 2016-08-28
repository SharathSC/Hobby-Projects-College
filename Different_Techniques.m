clc;
close all;
clear all;
x=[1 0 1 1 0 1];
nx=size(x,2);
sign=1;
i=1;
while i<nx+1
    t = i:0.001:i+1-0.001;
    if x(i)==1
        unipolar_code=square(t*2*pi,100);
        polar_code=square(t*2*pi,100);
        bipolar_code=sign*square(t*2*pi,100);
        sign=sign*-1;
        manchester_code=-square(t*2*pi,50);
    else
        unipolar_code=0;
        polar_code=-square(t*2*pi,100);
        bipolar_code=0;
        manchester_code=square(t*2*pi,50);
    end
    subplot(4,1,1);
    plot(t,unipolar_code);
    ylabel('unipolar code');
    hold on;
    grid on;
    axis([1 10 -2 2]);
  
    subplot(4,1,2);
    plot(t,polar_code);
    ylabel('polar code');
    hold on;
    grid on;
    axis([1 10 -2 2]);
  
    subplot(4,1,3);
    plot(t,bipolar_code);
    ylabel('bipolar code');
    hold on;
    grid on;
    axis([1 10 -2 2]);
      
    subplot(4,1,4);
    plot(t,manchester_code);
    ylabel('manchester code');
    hold on;
    grid on;
    axis([1 10 -2 2]);
  
    i=i+1;
end

% Now we have to do PSD

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
figure(2)
plot(f,P,f,P1,f,P2,f,P3)
grid on
box on
xlabel('f ---->')
ylabel('Power Spectral Density ---->')
title('PSD for Various Binary Line Codes')
legend('PSD for Polar Signal','PSD for Unipolar Signal','PSD for Manchester Signal','PSD for Bipolar Signal') 
