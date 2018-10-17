clear, close all



%Fomular
f = @(x1, x2) 3*(1-x1).^2 .* exp(-x1.^2-(x2+1).^2) - 10*(x1.*0.2-x1.^3-x2.^5) .* exp(-x1.^2-x2.^2) - exp(-(x1+1).^2-x2.^2)/3;


% Generates random values from the uniform distribution in the interval [xi-a, xi+a]
rand_positions = @(xi, a, d) (xi - a) + 2*a*rand(d,1);
rand_velocity = @(a, d) -a + 2*a*rand(d,1);

% Number of particles
d = 10;

% Step 1, set k := 0 select an initial point x(0)
ax = 10; % used to generate random position
av = 1; % used to generate random velocities
w = 0.8; % Inertial constant
c1 = 1.95; % Cognitive component - more spread
%c1 = 0.2; % Cognitive component 
c2 = 1.98; % Social component global best position
N = 60; % Number of iterations

% Plot function
[x, y] = meshgrid(-3:.1:3,-3:.1:3);

Z = f(x, y);

figure, 
hold on;
surf(x, y, Z);
xlabel('X');
ylabel('Y');
zlabel('Z');

% Find middle of meshgrid
k = 0;
n = size(x,1);
m = round(n/2);

% 1. step page 277
xk = [rand_positions(x(m,m),ax,d) rand_positions(y(m,m),ax,d)]; % Random initial positions
vk = [rand_velocity(av, d) rand_velocity(av, d)]; % Random initial vecocity

pk = vk;
fk = f(xk(:,1), xk(:,2));
[fgk, i] = min(fk);
g = [xk(i,1) xk(i,2)] %

gk = zeros(d, 2); % allocate memory for g
for i=1:d
    gk(i,:) = g; % set starting pos for each partical 
end

for k=1:N
    % 2. step
    rk = rand(d,2); % randdom for kotenive
    sk = rand(d,2); % random for social
    
    xk = xk + vk; % Update new position
    vk = w*vk + (c1*rk).*(pk-xk) + (c2*sk).*(gk-xk); % Update new velocity
    
    
    fgk = f( g(1), g(2) );
    for i=1:d
        fxk(i) = f( xk(i,1) , xk(i,2) );
                % step 3 Cognitive step
        if fxk(i) < f( pk(i,1) , pk(i,2) ) %Check the local particels best position with newest position 
            pk(i) = xk(i);
        end
         % step 4 Social step
        if fxk(i) < fgk
            g = xk(i,:);
            scatter3(g(1), g(2), fxk(i), '*m');
        end
    end
    
    gk = [];
    for i=1:d
        gk = [gk; g];
    end
    % Plot particle swarm
    scatter3(xk(:,1), xk(:,2), fxk, '.w');
    axis([-3 3 -3 3 -8 10]);
    view(-45,30);
    
end

xmin = g(1)
ymin = g(2)
fgmin = f(g(1),g(2))

scatter3(g(1), g(2), f(g(1),g(2)), '*r');
hold off;