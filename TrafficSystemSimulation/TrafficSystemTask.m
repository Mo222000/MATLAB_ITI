% to make figure:
figure;
% number of steps done by the simulation:
numOfSteps = 100;
% define the width and height of the traffic signal: 
postWidth = 1;
postHeight = 10;
% the redius of circle:
lightRadias = 1.5;
% current state:
currentState = 0; % 0: red   1:yellow   2:green

for step=1:numOfSteps
    %draw black rectangle as a background 
    rectangle('position',[0 0 5 12],'facecolor','k','curvature', 0.2);
    axis equal;
    hold on;
    switch currentState
        case 0
            theta = linspace(0, 2*pi , 100);
            x = 2.5 + 1.5*cos(theta);
            y = 10 + 1.5*sin(theta);
            fill(x,y,'r');
        case 1
            theta = linspace(0, 2*pi , 100);
            x = 2.5 + 1.5*cos(theta);
            y = 6 + 1.5*sin(theta);
            fill(x,y,'y');
        case 2
            theta = linspace(0 , 2*pi , 100);
            x = 2.5 + 1.5*cos(theta);
            y = 3 + 1.5*sin(theta);
            fill(x,y,'g');
    end
    pause(1);
    currentState = mod(currentState + 1, 3);
end 
