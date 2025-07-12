#1. Paint 3, 5
"""
import pygame
import sys

pygame.init()

WIDTH = 960
HEIGHT = 640

screen = pygame.display.set_mode((WIDTH, HEIGHT))

done = False

LMBpressed = False

while not done:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit
        if event.type == pygame.MOUSEBUTTONDOWN and event.button == 1:
            print("LMB pressed")
            LMBpressed = True
        if event.type == pygame.MOUSEMOTION:
            print(event.pos)
            if LMBpressed:
                pygame.draw.rect(screen, (255, 255, 0), (event.pos[0], event.pos[1], 1, 1))
        if event.type == pygame.MOUSEBUTTONUP and event.button == 1:
            print("LMB released")
            LMBpressed = False
        
    pygame.display.flip()
"""

#2. Paint
"""
import pygame
import sys

pygame.init()

WIDTH = 960
HEIGHT = 640

colorBLACK = (0, 0, 0)
colorWHITE = (255, 255, 255)
colorRED = (255, 0, 0)
colorGREEN = (0, 255, 0)
colorBLUE = (0, 0, 255)
colorYELLOW = (255, 255, 0)

screen = pygame.display.set_mode((WIDTH, HEIGHT))

done = False

LMBpressed = False

prevX = 0
prevY  = 0

currX = 0
currY = 0

while not done:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit()

        if event.type == pygame.MOUSEBUTTONDOWN and event.button == 1:
            print("LMB pressed")
            LMBpressed = True
        
        if event.type == pygame.MOUSEMOTION:
            print(event.pos)
            currX = event.pos[0]
            currY = event.pos[1]

        if event.type == pygame.MOUSEBUTTONUP and event.button == 1:
            print("LMB released")
            LMBpressed = False
    if LMBpressed:
        pygame.draw.line(screen, colorYELLOW, (prevX, prevY), (currX, currY))

    prevX = currX
    prevY = currY

    pygame.display.flip()
pygame.QUIT
"""

#3. Paint
"""
import pygame
#from pygame.locals import *
import sys

# Инициализация Pygame
pygame.init()

# Установка размеров окна
width, height = 800, 600
screen = pygame.display.set_mode((width, height))
pygame.display.set_caption("Pygame Paint")

# Цвета
BLACK = (0, 0, 0)
WHITE = (255, 255, 255)
Blue = (0, 0, 255)
# Толщина и цвет кисти по умолчанию
brush_size = 5
brush_color = BLACK
base_layer = pygame.Surface((width, height))
# Фигура по умолчанию
current_shape = " "

# Флаги для рисования круга и квадрата
drawing_circle = False
drawing_rect = False
prevX = 0
prevY = 0
currX = 0
currY = 0
def calculate_rect(x1, y1, x2, y2):
    return pygame.Rect(min(x1, x2), min(y1, y2), abs(x1 - x2), abs(y1 - y2))

while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit()
        elif event.type == pygame.MOUSEBUTTONDOWN and event.button == 1:  # Левая кнопка мыши
            if current_shape == "circle":
                drawing_circle = True
            elif current_shape == "rectangle":
                drawing_rect = True
                prevX = event.pos[0]
                prevY = event.pos[1]
                #prevX = event.pos[0]
                #prevY = event.pos[1]

        elif event.type == pygame.MOUSEBUTTONUP and event.button == 1:
            drawing_circle = False
            drawing_rect = False
            pygame.draw.rect(screen, Blue, calculate_rect(prevX, prevY, currX, currY), 3)
            base_layer.blit(screen, (0, 0))
        elif event.type == pygame.MOUSEMOTION:
            if drawing_circle:
                pos = pygame.mouse.get_pos
                pygame.draw.circle(screen, WHITE, pos, brush_size)
            elif drawing_rect:
                pos = pygame.mouse.get_pos()
                print(event.pos)
                currX = event.pos[0]
                currY = event.pos[1]
                #square_rect = pygame.Rect(pos[0] - brush_size, pos[1] - brush_size, 2 * brush_size, 2 * brush_size)
                #pygame.draw.rect(screen, WHITE, calculate_rect(prevX, prevY, currX, currY), 2)
                #base_layer.blit(screen, (0, 0))

        elif event.type == pygame.KEYDOWN:
            if event.key == pygame.K_c:  # Нажатие клавиши "C" для переключения на рисование кругов
                current_shape = "circle"
            elif event.key == pygame.K_s:  # Нажатие клавиши "S" для переключения на рисование квадратов
                current_shape = "rectangle"
        elif drawing_rect:
            #screen.blit(base_layer, (0, 0))
            pygame.draw.rect(screen, WHITE, calculate_rect(prevX, prevY, currX, currY), 2)
            screen.blit(base_layer, (0, 0))

    

    # Отображение экрана
    pygame.display.flip()
    #screen.fill(WHITE)
pygame.quit()
"""

"""
import pygame
import sys

pygame.init()

WIDTH = 960
HEIGHT = 640

colorBLACK = (0, 0, 0)
colorWHITE = (255, 255, 255)
colorRED = (255, 0, 0)
colorGREEN = (0, 255, 0)
colorBLUE = (0, 0, 255)
colorYELLOW = (255, 255, 0)

screen = pygame.display.set_mode((WIDTH, HEIGHT))
base_layer = pygame.Surface((WIDTH, HEIGHT))

done = False

LMBpressed = False

prevX = 0
prevY = 0

currX = 0
currY = 0

def calculate_rect(x1, y1, x2, y2):
    return pygame.Rect(min(x1, x2), min(y1, y2), abs(x1 - x2), abs(y1 - y2))

while not done:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit()
        
        if event.type == pygame.MOUSEBUTTONDOWN and event.button == 1:
            print("LMB pressed")
            LMBpressed = True
            prevX = event.pos[0]
            prevY = event.pos[1]

        if event.type == pygame.MOUSEMOTION:
            print(event.pos)
            currX = event.pos[0]
            currY = event.pos[1]

        if event.type == pygame.MOUSEBUTTONUP and event.button == 1:
            print("LMB released")
            LMBpressed = False
            pygame.draw.rect(screen, colorYELLOW, calculate_rect(prevX, prevY, currX, currY), 2)
            base_layer.blit(screen, (0, 0))
    
    if LMBpressed:
        screen.blit(base_layer, (0, 0))
        pygame.draw.rect(screen, colorYELLOW, calculate_rect(prevX, prevY, currX, currY), 2)

    pygame.display.flip()
pygame.quit()


#4. Racer

import pygame
import sys
from random import randint 
from time import sleep

#from pygame.sprite import _Group

pygame.init()

WIDTH = 400
HEIGHT = 600

screen = pygame.display.set_mode((WIDTH, HEIGHT))

BACKGROUND = pygame.image.load("C:\\Users\\Darya\\Documents\\programming-principles-2\\lab8\\Racer\\AnimatedStreet.png")

colorBlack = (0, 0, 0)
colorWHITE = (255, 255, 255)
colorRED = (255, 0, 0)
colorGREEN = (0, 255, 0)
colorBLUE = (0, 0, 255)
colorYELLOW = (255, 255, 0)

done = False

class Player(pygame.sprite.Sprite):
    def __init__(self):
        super().__init__()
        self.image = pygame.image.load("C:\\Users\\Darya\\Documents\\programming-principles-2\\lab8\\Racer\\Player.png")
        self.rect = self.image.get_rect()
        self.rect.center = (WIDTH // 2, HEIGHT - 55)
    
    def move(self):
        pressed = pygame.key.get_pressed()
        if pressed[pygame.K_RIGHT] and self.rect[0] + self.rect[2] < WIDTH:
            self.rect.move_ip(5, 0)
        if pressed[pygame.K_LEFT] and self.rect[0] > 0:
            self.rect.move_ip(-5, 0)

class Enemy(pygame.sprite.Sprite):
    def __init__(self):
        super().__init__()
        self.image = pygame.image.load("C:\\Users\\Darya\\Documents\\programming-principles-2\\lab8\\Racer\\Enemy.png")
        self.rect = self.image.get_rect()
        self.rect.center = (randint(0 + self.rect.w // 2, WIDTH - self.rect.w // 2), 20)
        self.speed = 5
    
    def move(self):
        if self.rect[1] + self.rect[3] > HEIGHT:
            self.rect.center = (WIDTH // 2, 40)
        if self.rect.bottom > HEIGHT:
            self.rect.center = (randint(0 + self.rect.w // 2, WIDTH - self.rect.w // 2), 20)

INC_SPEED = pygame.USEREVENT + 1
pygame.time.set_timer(INC_SPEED, 1000)

P1 = Player()
E1 = Enemy()

enemies = pygame.sprite.Group()
all_sprites = pygame.sprite.Group()

enemies.add(E1)
all_sprites.add(P1, E1)

FPS = 60

clock = pygame.time.Clock()

while not done:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit()
        if event.type == INC_SPEED:
            E1.speed += 1
    
    screen.blit(BACKGROUND, (0, 0))

    for entity in all_sprites:
        screen.blit(entity.image, entity.rect)
        entity.move()
    
    if pygame.sprite.spritecollideany(P1, enemies):
        print("Collision!")
        screen.fill(colorRED)
        pygame.display.flip()
        sleep(2)
        pygame.quit()
        sys.exit()
    
    pygame.display.flip()

    clock.tick(FPS)

pygame.time.set_timer(INC_SPEED, 0)
# The end! 
"""

#5. Game.py: 385; 412, 414; 430; 434; 444; 446


import pygame, sys
from pygame.locals import *
import random, time


pygame.init()

FPS = 60
FramePerSec = pygame.time.Clock()

BLUE = (0, 0, 255)
RED = (255, 0, 0)
GREEN = (0, 255, 0)
BLACK = (0, 0, 0)
WHITE = (255, 255, 255)

SCREEN_WIDTH = 400
SCREEN_HEIGHT = 600
SPEED = 5
SCORE = 0

font = pygame.font.SysFont("Verdana", 60)
font_small = pygame.font.SysFont("Verdana", 20)
game_over = font.render("Game over", True, BLACK)

background = pygame.image.load("C:\\Users\\Darya\\Documents\\programming-principles-2\\lab8\\Racer\\AnimatedStreet.png")

DISPLAYSURF = pygame.display.set_mode((400, 600))
DISPLAYSURF.fill(WHITE)
pygame.display.set_caption("Game")

class Enemy(pygame.sprite.Sprite):
    def __init__(self):
        super().__init__()
        self.image = pygame.image.load("C:\\Users\\Darya\\Documents\\programming-principles-2\\lab8\\Racer\\Enemy.png")
        self.rect = self.image.get_rect()
        self.rect.center = (random.randint(40, SCREEN_WIDTH-40), 0)
    
    def move(self):
        global SCORE
        self.rect.move_ip(0, SPEED)
        if (self.rect.bottom > 600):
            SCORE += 1
            self.rect.top = 0
            self.rect.center = (random.randint(40, SCREEN_WIDTH - 40), 0)
    
class Player(pygame.sprite.Sprite):
    def __init__(self):
        super().__init__()
        self.image = pygame.image.load("C:\\Users\\Darya\\Documents\\programming-principles-2\\lab8\\Racer\\Player.png")
        self.rect = self.image.get_rect()
        self.rect.center = (160, 520)
    
    def move(self):
        pressed_keys = pygame.key.get_pressed()

        if self.rect.left > 0:
            if pressed_keys[K_LEFT]:
                self.rect.move_ip(-5, 0)
        if self.rect.right < SCREEN_WIDTH:
            if pressed_keys[K_RIGHT]:
                self.rect.move_ip(5, 0)
    

P1 = Player()
E1 = Enemy()

enemies = pygame.sprite.Group()
enemies.add(E1)
all_sprites = pygame.sprite.Group()
all_sprites.add(P1)
all_sprites.add(E1)

INC_SPEED = pygame.USEREVENT + 1
pygame.time.set_timer(INC_SPEED, 1000)

while True:
    for event in pygame.event.get():
        if event.type == INC_SPEED:
            SPEED += 0.5
        if event.type == QUIT:
            pygame.quit()
            sys.exit()
    
    DISPLAYSURF.blit(background, (0, 0))
    scores = font_small.render(str(SCORE), True, BLACK)
    DISPLAYSURF.blit(scores, (10, 10))
    
    for entity in all_sprites:
        entity.move()
        DISPLAYSURF.blit(entity.image, entity.rect)

    if pygame.sprite.spritecollideany(P1, enemies):
        pygame.mixer.Sound("C:\\Users\\Darya\\Documents\\programming-principles-2\\lab8\\Racer\\crash.wav").play()
        time.sleep(1)

        DISPLAYSURF.fill(RED)
        DISPLAYSURF.blit(game_over, (30, 250))

        pygame.display.update()
        for entity in all_sprites:
            entity.kill()
        time.sleep(2)
        pygame.quit()
        sys.exit()
    
    pygame.display.update()
    FramePerSec.tick(FPS)
# The end!
