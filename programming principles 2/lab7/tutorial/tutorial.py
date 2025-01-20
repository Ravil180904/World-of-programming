#1
"""
import pygame

pygame.init()
screen = pygame.display.set_mode((400, 300))
done = False
pygame.draw.rect(screen, (0, 128, 255), pygame.Rect(35, 30, 155, 255))

while not done:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            done = True
    pygame.display.flip()

#pygame.draw.rect(screen, (0, 128, 255), pygame.Rect(30, 30, 60, 60))
"""

#2. 
"""
import pygame

pygame.init()
screen = pygame.display.set_mode((400, 300))
done = False

is_blue = True 
#pygame.draw.rect(screen, color, pygame.Rect(30, 30, 60, 60))

while not done:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            done = True
        if event.type == pygame.KEYDOWN and event.key == pygame.K_SPACE:
            is_blue = not is_blue
        
    if is_blue: 
        color = (0, 128, 255)
    else: 
        color = (255, 100, 0)
    pygame.draw.rect(screen, color, pygame.Rect(100, 30, 150, 120))
    pygame.display.flip()
#pygame.draw.rect(screen, color, pygame.Rect(30, 30, 60, 60))
"""

#3
"""
import pygame

pygame.init()
screen = pygame.display.set_mode((400, 300))
done = False
#clock = pygame.time.Clock()

is_blue = True
x = 30
y = 30

clock = pygame.time.Clock()

while not done:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            done = True
        if event.type == pygame.KEYDOWN and event.key == pygame.K_SPACE:
             is_blue = not is_blue
    pressed = pygame.key.get_pressed()
    if pressed[pygame.K_UP]:
        y -= 3
    if pressed[pygame.K_DOWN]:
        y += 3
    if pressed[pygame.K_LEFT]:
        x -= 3
    if pressed[pygame.K_RIGHT]:
        x += 3
    
    #screen.fill((0, 0, 0))
    screen.fill((0, 0, 0)) 
    if is_blue:
        color = (0, 128, 255)
    else:
        color = (255, 250, 0)
    pygame.draw.rect(screen, color, pygame.Rect(x, y, 60, 60))

    pygame.display.flip()
    clock.tick(60)
"""

#4. Image
"""
import pygame
import os

white = (255, 255, 255)
image_library = {}
def get_image(path):
    global image_library
    image = image_library.get(path)
    if image == None:
        canonicalized_path = path.replace('\\', os.sep)
        image = pygame.image.load(canonicalized_path)
        image_library[path] = image
    return image
pygame.init()
screen = pygame.display.set_mode((400, 300))
done = False
clock = pygame.time.Clock()

while not done:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            done = True
    screen.fill(white)

    screen.blit(get_image('C:\\Users\\Darya\\Documents\\programming-principles-2\\lab7\\Flag1.png'), (30, 25))
    pygame.display.flip()
    clock.tick(60)
"""

#5. Rectangle
"""
import pygame

pygame.init()
screen = pygame.display.set_mode((400, 300))
done = False
#pygame.draw.rect(screen, (255, 255, 255), pygame.Rect(35, 30, 155, 255))

while not done:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            done = True
    screen.fill((255, 255, 255))
    pygame.draw.rect(screen, (0, 0, 0), pygame.Rect(30, 35, 160, 130))
    pygame.display.flip()
"""

#6. Circle
"""
import pygame

pygame.init()
screen = pygame.display.set_mode((400, 300))
done = False

while not done:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            done = True
    screen.fill((255, 255, 255))
    pygame.draw.circle(screen, (0, 0, 0), (140, 130), 90)
    pygame.display.flip()
"""

#7. Rectangle, Circle
"""
import pygame

pygame.init()
screen = pygame.display.set_mode((400, 300))
done = False
#pygame.draw.rect(screen, (255, 255, 255), pygame.Rect(35, 30, 155, 255))

while not done:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            done = True
    screen.fill((255, 255, 255))
    pygame.draw.rect(screen, (0, 0, 0), pygame.Rect(10, 25, 150, 150))
    pygame.draw.circle(screen, (0, 0, 0), (280, 130), 90)
    pygame.display.flip()
"""
