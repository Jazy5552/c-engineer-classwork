#!/usr/bin/octave
#Made by Jazy Llerena

x = linspace(-2*pi, 2*pi, 100);
y = 2+7*sin(x);
plot(x,y,'rs');
xlabel('X Axis');
ylabel('Y Axis');
title('My awesome title');

