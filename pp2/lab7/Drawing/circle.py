# Draw circle - a red ball of size 50 x 50 (radius = 25) on white background. When user presses Up, Down, Left, Right arrow keys on keyboard, the ball should move by 20 pixels in the direction of pressed key. The ball should not leave the screen, i.e. user input that leads the ball to leave of the screen should be ignored 
import pygame
pygame.init()

a, b = 800, 600
screen = pygame.display.set_mode((a, b))

done = False
is_red = True

red = (255, 0, 0)
white = (255, 255, 255)

done = False
clock = pygame.time.Clock()
FPS = 60
x = a // 2
y = b // 2
r = 25
v = 20
#pygame.draw.circle(screen, red, (x, y), 25)

while not done:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            done = True
    keys = pygame.key.get_pressed()
    if keys[pygame.K_RIGHT] and x < a - r:
        x += v
    if keys[pygame.K_LEFT] and x > r:
        x -= v
    if keys[pygame.K_UP] and y > r:
        y -= v
    if keys[pygame.K_DOWN] and y < b - r:
        y += v
    
    screen.fill(white)
    circle = pygame.draw.circle(screen, red, (x, y), r)

    pygame.display.flip()
    clock.tick(FPS)
pygame.quit()
