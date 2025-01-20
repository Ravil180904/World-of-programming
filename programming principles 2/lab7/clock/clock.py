# reate a simple clock application (only with minutes and seconds) which is synchronized with system clock. Use Mickey's right hand as minutes arrow and left - as seconds. For moving Mickey's hands you can use: pygame.transform.rotate 

import pygame
from datetime import datetime

pygame.init()
a, b = 800, 600

screen = pygame.display.set_mode((a, b))
pygame.display.set_caption("Clock of Mickey")

#surface = pygame.display.set_mode()
#clock = pygame.time.Clock()

mickey_image = pygame.image.load("C:\\Users\\Darya\\Documents\\programming-principles-2\\lab7\\clock\\mickey.png")
mickey_image = pygame.transform.scale(mickey_image, (400, 300))

second_image = pygame.image.load("C:\\Users\\Darya\\Documents\\programming-principles-2\\lab7\\clock\\second.png")
second_image = pygame.transform.scale(second_image, (90, 100))

minute_image = pygame.image.load("C:\\Users\\Darya\\Documents\\programming-principles-2\\lab7\\clock\\minute.png")
minute_image = pygame.transform.scale(minute_image, (90, 100))


done = False
while not done:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            done = True
    screen.fill((0, 0, 0))
    #rotated_image = pygame.transform.rotate(image, angle)
    rect = mickey_image.get_rect(center=(a // 2, b // 2))
    screen.blit(mickey_image, rect)
    current_time = datetime.now()
    t = datetime.now()
    hour, minute, second = t.hour % 12, t.minute, t.second
    second_angle = -(current_time.second / 60) * 360 + 90
    rotated_second_hand = pygame.transform.rotate(second_image, second_angle)
    rect = rotated_second_hand.get_rect(center = (a // 2, b // 2))
    screen.blit(rotated_second_hand, rect)

    minute_angle = -(current_time.minute / 60) * 360 + 90
    rotated_minute_hand = pygame.transform.rotate(minute_image, minute_angle)
    rect = rotated_minute_hand.get_rect(center = (a // 2, b // 2))
    screen.blit(rotated_minute_hand, rect)

    pygame.display.flip()
pygame.quit()
