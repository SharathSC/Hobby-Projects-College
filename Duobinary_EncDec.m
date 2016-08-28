function [c,b_r]=Duobinary_EncDec(b)
% Precoded Duobinary coder and decoder  
% b = input binary sequence:precoder input  
% c = duobinary coder output   
%b_r = duobinary decoder output  
a(1) = xor(1,b(1));
if(a(1)==1)
    a_volts(1) = 1; 
else 
    a_volts(1)=-1;
end 
for k=2:length(b)
    a(k)=xor(a(k-1),b(k));
    if(a(k)==1)
        a_volts(k)=1;
        else
       a_volts(k)=-1;
    end
end
disp(a)
a = a';
disp(a_volts)
a_volts = a_volts';


% Duobinary coder output in volts
c(1) = 1+ a_volts(1);
for k =2:length(a)
    c(k) = a_volts(k-1)+a_volts(k);
end
    disp(c)
c = c';

% Duobinary decoder output  by applying decision rule
for k =1:length(c)
    if(abs(c(k))>1)
        b_r(k) = 0;
        else
        b_r(k) = 1;
    end
end
disp(b_r)
b_r=b_r';

end

