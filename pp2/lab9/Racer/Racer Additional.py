# Showing the speed of enemy

import pygame, sys, os
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
SPEED_coin = 5
SCORE = 0
clock = pygame.time.Clock()

#coin = pygame.image.load("C:\\Users\\Darya\\Documents\\programming-principles-2\\lab8\\Racer\\coin.jpg")
#coinx, coiny = random.randrange(40*SCREEN_WIDTH, 40*SCREEN_HEIGHT,SPEED),0

font = pygame.font.SysFont("Verdana", 60)
font_small = pygame.font.SysFont("Verdana", 16)
#font_coin = pygame.font.Font(None, 30)
game_over = font.render("Game over", True, BLACK)
#speed_coin = font.render("Speed enemy: ", True, BLACK)
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

class Coin(pygame.sprite.Sprite):
    def __init__(self):
        super().__init__()
        self.image = pygame.image.load(("C:\\Users\\Darya\\Documents\\programming-principles-2\\lab8\\Racer\\coin.png"))
        self.rect = self.image.get_rect()
        self.center = (random.randint(40, SCREEN_WIDTH-40), 0)
        self.weight = (random.randint(40, SCREEN_WIDTH-40), 0)
    
    def move(self):
        global SCORE
        self.rect.move_ip(0, SPEED_coin)
        if (self.rect.bottom > SCREEN_HEIGHT):
            #SCORE += 1
            self.rect.top = 0
            #self.rect.center = (random.randint(40, SCREEN_WIDTH - 40), 0)
            #SCORE += self.weight

         

image_coin = ("C:\\Users\\Darya\\Documents\\programming-principles-2\\lab8\\Racer\\Player.png")

P1 = Player()
E1 = Enemy()
C1 = Coin()

def increase_speed(E1, C1):
    speed_enemy = font_small.render(f"Speed enemy: {SPEED}", True, BLACK)
    DISPLAYSURF.blit(speed_enemy, (10, 10))

enemies = pygame.sprite.Group()
enemies.add(E1)
all_sprites = pygame.sprite.Group()
all_sprites.add(P1)
all_sprites.add(E1)
all_sprites.add(C1)
coins = pygame.sprite.Group()
coins.add(C1)
points = 0

INC_SPEED = pygame.USEREVENT + 1
pygame.time.set_timer(INC_SPEED, 500)
Weight = 1

while True:
    for event in pygame.event.get():
        #if event.type == INC_SPEED:
            #SPEED += 0.5
        if event.type == QUIT:
            pygame.quit()
            sys.exit()

    for entity in coins:
        entity.move()
        DISPLAYSURF.blit(entity.image, entity.rect)
    
    collision_coin = pygame.sprite.spritecollideany(P1, coins)
    if collision_coin:
        pygame.mixer.Sound("C:\\Users\\Darya\\Documents\\programming-principles-2\\lab8\\Racer\\coin_sounds.wav").play()
        print(f"Collected coins with weight: {C1.weight}")
        points += Weight
        print(f"Collected coins: {points}")
        for entity in coins:
            entity.kill()
        #collision_coin.kill()
        if points > 0:
            SPEED += points
            print(f"Enemy speed increases to {SPEED}")
        #speed_coin = font_small.render(f"Speed enemy: {SPEED}", True, BLACK)
        #DISPLAYSURF.blit(speed_coin, (30, 300))
        C1 = Coin()
        coins.add(C1)
        all_sprites.add(C1)

        #DISPLAYSURF.blit(coin_text, (10, 10))
        #clock.tick(60)
        pygame.display.update()
    #all_sprites.draw(DISPLAYSURF)
    #font_small = pygame.font.SysFont(None, 30)
    DISPLAYSURF.blit(background, (0, 0))
    
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
    increase_speed(E1, C1)
    pygame.display.update()
    FramePerSec.tick(FPS)

# The end!!!
