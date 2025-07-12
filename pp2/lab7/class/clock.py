import pygame

pygame.init()

screen = pygame.display.set_mode((800, 600))


done = False
clock = pygame.time.Clock()

while not done:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            done = True
        
    
    pygame.display.flip()
    clock.tick(60)
