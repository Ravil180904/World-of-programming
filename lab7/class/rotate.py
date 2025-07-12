#1. 

import pygame
pygame.init()

screen = pygame.display.set_mode((800,600))

done = False
image = pygame.image.load("C:\\Users\\Darya\\Documents\\programming-principles-2\\lab7\\clock\\mickey.png")
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
while not done:
    for event in pygame.event.get():
        print(event)
        if event.type == pygame.QUIT:
            done = True
    screen.fill((255, 255, 255))
    screen.blit(get_image(image))

    pygame.display.flip()
