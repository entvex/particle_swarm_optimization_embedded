close all
clear
clc

x = linspace(-10,10,1e3);
for i = 1e3:-1:1
    y(i) = expFunction( x(i) );
end
plot(x,y);