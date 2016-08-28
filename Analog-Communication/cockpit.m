clc;
clear all;
close all;
%cockpit noise cancellation inside plane
%Two micro-phone inside cockpit
%one generate only noise and one noise+voice
%Using wiener filter noise is removed.
n=1:200;%Just considering a sample size of 200
w=randn(1,200);%taking a random negative sequence haveing 1 row, 200 coloumns

w0=pi/20;
d=cos(w0*n);% Generating the pure cosine signal without noise

dr=poly([0.6]); % Generatng the coeffecients for the filter
nr=[1];

dr1=poly([0.8]);% Generatng the coeffecients for the filter

v1=filter(nr,dr,w);% This is the function of noise generated
v2=filter(nr,dr1,w);% This is the function of noise generated which is in the second microphone

x=v1+d;% The first noise is added to the original signal to emulate the first microphone

r_xv2=xcorr(x,v2);% The noise and the noise+signal are correlated
rxv2=r_xv2(200:399);% The second half sequences are considered for filtering 
Rxv2=(rxv2(1:12));% For convinience, we take samples of 12. This number can be changed
%disp(Rxv2)
r_v2=xcorr(v2);% To get 400 samples which is same as the signal+noise,noise correlation, we do the autocorrelation of noise.
rv2=r_v2(200:399);% The second half sequences are considered for filtering 
Rv2=toeplitz(rv2(1:12));% Here since there is just one argument. So a symmetric toeplitz matrix is created with 12 samples
%What is a toeplitz matrix ? 
%Suppose a matrix is [a b c d], then the
%toeplitz of that is symmetric of [a b c d]
%                                 [b a    ]
%                                 [c   a  ]
%                                 [d     a] 
%disp(Rv2);
W=inv(Rv2)*Rxv2'; % basically, here we are doing transpose(Rxv2) / Rv2 to get a factor
v1_cap=filter(W',1,v2); % this gives the Function of the Noise which needs to be subtracted from the noise+signal
e=x-v1_cap;
figure(1);

plot(n,d)% Plot of Message Signal and Weiner Filtered Signal which is the expected signal
hold on;
plot(e,'r')
legend('Message Signal','Weiner Filtered Signal');

figure(2);
plot(n,x);% Here we just plot the original noise+message signal just for reference
xlabel('Number of Samples');
ylabel('Noise Corrupted Signal');
