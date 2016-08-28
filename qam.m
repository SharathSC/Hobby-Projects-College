close all;
clc;
len=100; % Number of points in calculation
Fd=1; % Sampling rate of digital message
Fs=1; % Sampling rate of Analog message
M=16; % M-ary number 
% Mapping to I and Q
msg_d = randint(1,len,[0 1]); % Generating random bits
figure;
stem(msg_d(1:40),'b-','filled'); % plotting digital bit stream
title('Random Bits');
xlabel('Bit Index');
ylabel('Value'); 
msg_a=modmap(msg_d,1,1,'qask',M,0,0); % Mapping I and Q
sigI1=msg_a(:,1);
sigQ1=msg_a(:,2);
a=zeros(length(sigI1),15);
b=zeros(length(sigQ1),15);
sigI=([sigI1 a])';
sigI=sigI(:);
sigQ=([sigQ1 b])';
sigQ=sigQ(:);
figure;
plot(sigI(1:800));
title('Inphase component');
figure;
plot(sigQ(1:800));
title('Quadrature component'); 


%
over = 16; % oversampling factor
rolloff=.5;
pulse = rcosine(1,over,'sqrt',rolloff); %basic raised-cosine
pulseshape
[val,pos] = max(pulse);
figure; impz(pulse,1);
title('Impulse Response');
sigI2 = filter(pulse,1,sigI); % signal after pulse
shaping
sigI2 = sigI2(pos:length(sigI2)); % discard transient
sigQ2 = filter(pulse,1,sigQ); % signal after pulse
shaping
sigQ2 = sigQ2(pos:length(sigQ2)); % discard transient 


%
n=1:length(sigI2);
c=cos(2*pi*n/10); % cosine signal
s=sin(2*pi*n/10); % sine signal
modsigI=sigI2.*c'; % Modulating with cosine
modsigQ=sigQ2.*s'; % Modulating with sine
modsig1 = modsigI+modsigQ;

%
noise=.07* randn(length(modsig1),1);
modsig=modsig1+noise; % Addition of noise to
modulated signal 

recI = modsig.*c(1:length(modsig))'; % Demodulation of signal I
recQ =modsig.*s(1:length(modsig))'; % Demodulation of signal Q

recI=filter(pulse,1,recI); % signal after RRC filter
recQ=filter(pulse,1,recQ); % signal after RRC filter
recI=recI(pos:end);
recQ=recQ(pos:end); 

Num = remez(16,[0 0.2 0.3 1],[1 1 0 0]);
recI_filt=filter(Num,1,recI); % Passing received signal I
through low pass filter
recI1=recI_filt(9:end); %Truncatig response tail
recQ_filt=filter(Num,1,recQ); % Passing received I through LPF
recQ1=recQ_filt(9:end); %Truncatig response tail 

recI2=recI1(1:16:length(recI1));
recQ2=recQ1(1:16:length(recQ1)); 


for i=1:length(recI2)
 if (recI2(i) >0)
 recI2(i)=1;
 elseif (recI2(i)<0)
 recI2(i)=-1;
 end
 if (recQ2(i)>0)
 recQ2(i)=1;
 elseif (recQ2(i)<0)
 recQ2(i)=-1;
 end
 end
 sig_rec = [recI2 recQ2]; % Received signal after detection
 sig_final=demodmap(sig_rec,1,1,'qask',16);
 
 %Plotting figures
 figure;
plot(1.8*sigI2(1:500),'r-'); % B4 modulation
hold;
plot(recI1(1:500),'b-');grid on; % After Demodulation
title('Comparison b/w signals');
xlabel('Index');ylabel('Amplitude');
legend('Signal B4 Modulation' , 'Signal after Demodulation');
figure;
stem(msg_d(1:40),'r-');hold; % Original data
stem(sig_final(1:40),'.b-');grid on; % Recieved data
title('comparison b/w Original and Recieved Data');
xlabel('index'); ylabel('Integer value');
legend('Original Data' , 'Recieved Data') ; 