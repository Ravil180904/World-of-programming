#1.
"""import pygame
pygame.init()

screen = pygame.display.set_mode((800,600))

done = False

while not done:
    for event in pygame.event.get():
        print(event)
        if event.type == pygame.QUIT:
            done = True
"""

#2.
"""
import pygame

pygame.init()

screen = pygame.display.set_mode((800,600))

done = False
is_red = True

red = (250,0,0)
blue = (0,0,250)

while not done:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            done = True
        if event.type == pygame.KEYDOWN:
            if event.key == pygame.K_SPACE:
                is_red = not is_red
    if is_red:
        pygame.draw.rect(screen, red, pygame.Rect(30, 30, 100, 100))
    else:
        pygame.draw.rect(screen, blue, pygame.Rect(30, 30, 100, 150))

    pygame.display.flip()
"""

#3.
"""
import pygame

pygame.init()

screen = pygame.display.set_mode((800,600))

done = False
is_red = True

red = (255,0,0)
blue = (0, 0, 255)
black = (0, 0, 0)

x = 30
y = 30

clock = pygame.time.Clock()

while not done:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            done = True
        if event.type == pygame.KEYDOWN:
            if event.key == pygame.K_SPACE:
                is_red = not is_red
    
    keys = pygame.key.get_pressed()
    if keys[pygame.K_RIGHT]:
        x += 1
    if keys[pygame.K_LEFT]:
        x -= 1
    if keys[pygame.K_UP]:
        y -= 1
    if keys[pygame.K_DOWN]:
        y += 1
    
    screen.fill(black)

    if is_red:
        pygame.draw.rect(screen, red, pygame.Rect(x, y, 100, 60))
    else:
        pygame.draw.rect(screen, blue, pygame.Rect(x, y, 100, 60))
    
    
    pygame.display.flip()
    clock.tick(1000)
"""

#4.
"""
import pygame
pygame.init()

screen = pygame.display.set_mode((800,600))

done = False
is_red = True

red = (255, 0, 0)
blue = (0, 0, 255)
black = (0, 0, 0)
white = (255, 255, 255)

x = 30
y = 30

image = pygame.image.load("C:\\Users\\Darya\\Documents\\programming-principles-2\\lab7\\Flag1.png")

clock = pygame.time.Clock()

while not done:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            done = True
        if event.type == pygame.KEYDOWN:
            if event.ley == pygame.K_SPACE:
                is_red = not is_red
    
    keys = pygame.key.get_pressed()
    if keys[pygame.K_RIGHT]:
        x += 1
    if keys[pygame.K_LEFT]:
        x -= 1
    if keys[pygame.K_UP]:
        y -= 1
    if keys[pygame.K_DOWN]:
        y += 1
    
    screen.fill(white)

    screen.blit(image, (x, y))

    pygame.display.flip()
    clock.tick(60)
"""
#5.
"""
import pygame
import os

pygame.init()

screen = pygame.display.set_mode((800, 600))

done = False
is_red = True

red = (255, 0, 0)
blue = (0, 0, 255)
black = (0, 0, 0)
white = (255, 255, 255)

x = 30
y = 30

is_flagstan = False

image_library = dict()
def load_image(path):
    global image_library
    image = image_library.get(path)
    if image is None:
        canonicalized_path = path.replace('/', os.sep).replace('\\', os.sep)
        image = pygame.image.load(canonicalized_path)
        image_library[path] = image
        return image
    return image

clock = pygame.time.Clock()

while not done:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            done = True
        if event.type == pygame.KEYDOWN:
            if event.key == pygame.K_SPACE:
                is_flagstan = not is_flagstan
    keys = pygame.key.get_pressed()
    if keys[pygame.K_RIGHT]:
        x += 1
    if keys[pygame.K_LEFT]:
        x -= 1
    if keys[pygame.K_UP]:
        y -= 1
    if keys[pygame.K_DOWN]:
        y += 1

    screen.fill(white)

    if is_flagstan:
        screen.blit(pygame.transform.scale(load_image("C:\\Users\\Darya\\Documents\\programming-principles-2\\lab7\\Flag1.png"), (320, 240)), (x, y))
    else:
        screen.blit(pygame.transform.scale(load_image("C:\\Users\\Darya\\Documents\\programming-principles-2\\lab7\\Flag2.png"), (320, 240)), (x, y))
    
    pygame.display.flip()
    clock.tick(60)
"""

#6. Keys
"""
import pygame

print(list(filter(lambda x: "K_" in x, dir(pygame))))

print(pygame.K_SPACE)

pygame.init()

pygame.init()

print(pygame.key.get_pressed)

print(pygame.key.get_pressed()[pygame.K_SPACE]) 
"""

#7. Sounds

import pygame

pygame.init()

sound = pygame.mixer.Sound("C:\\Users\\Darya\\Downloads\\Lucas Jayden - I'm Just A.mp3")

sound.play()

while True:
    continue



"""
import pygame

pygame.init()
screen = pygame.display.set_mode((500, 800))
black = (0, 0, 0)
gray = (127, 127, 127)
white = (255, 255, 255)
clock = pygame.time.Clock()
right = False
left = False
run = True

class Ball:

    def __init__(self, x, y):
        self.x = x
        self.y = y
    
    def drawBall(self):
        pygame.draw.circle(screen, white, (self.x, self.y), 20)

ball = Ball(250, 750)

while run:

    clock.tick(60)

    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            run = False
        keys_pressed = pygame.key.get_pressed()
        if keys_pressed[pygame.K_RIGHT]:
            right = True
            left = False
        if keys_pressed[pygame.K_LEFT]:
            left = True
            right = False
        if event.type == pygame.KEYUP:
            if event.key == pygame.K_RIGHT and right == True:
                right == False
            if event.key == pygame.K_LEFT and left == True:
                left == False

    if right == True:
        ball.x += 3
    
    if left == True:
        ball.x -= 3

    screen.fill(black)
    ball.drawBall()
    
    pygame.display.flip()
pygame.quit()
"""
