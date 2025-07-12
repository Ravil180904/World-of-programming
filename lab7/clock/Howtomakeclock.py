"""import pygame
from datetime import datetime
import math

pygame.init()

screen = pygame.display.set_mode((800, 600))

RES = WIDTH, HEIGHT = 1200, 800
H_WIDTH, H_HEIGHT = WIDTH // 2, HEIGHT // 2
RADIUS = H_HEIGHT - 100
radius_list = {'sec': RADIUS - 10, 'min' : RADIUS - 55, 'hour': RADIUS - 100}

surface = pygame.display.set_mode(RES)
clock = pygame.time.Clock()

#image_ipoteka = {}
def get_image(hello):
    global image_ipoteka
    image = image_ipoteka.get(hello)
    if image == None:
        canonicalized_path = hello.replace('\\', os.sep)
        image = pygame.image.load(canonicalized_path)
        image_ipoteka[hello] = image
    return image

#screen.blit(get_image("C:\\Users\\Darya\\Documents\\programming-principles-2\\lab7\\clock\\mickey.png"), (30, 25))
 #screen.blit(rotated_imager, imager)

done = False
#clock = pygame.time.Clock()
clock12 = dict(zip(range(12), range(0, 360, 30)))
clock60 = dict(zip(range(60), range(0, 360, 6)))

font = pygame.font.SysFont('Verdana', 60)


def get_clock_pos(clock_dict, clock_hand, key):
    x = H_HEIGHT + radius_list[key] + math.cos(math.radians(clock_dict[clock_hand]) - math.pi / 2)
    y = H_HEIGHT + radius_list[key] + math.sin(math.radians(clock_dict[clock_hand]) - math.pi / 2)
    return x, y
image = pygame.image.load("C:\\Users\\Darya\\Documents\\programming-principles-2\\lab7\\clock\\mickey.png")

while not done:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            done = True
    surface.fill(pygame.Color(0, 0, 0))

    t = datetime.now()
    hour, minute, second = t.hour % 12, t.minute, t.second

    pygame.draw.circle(surface, pygame.Color('darkslategray'), (H_WIDTH, H_HEIGHT), RADIUS)
    pygame.draw.line(surface, pygame.Color('orange'), (H_WIDTH, H_HEIGHT), get_clock_pos(clock12, hour, 'hour'), 15)
    pygame.draw.line(surface, pygame.Color((0, 0, 0)), (H_WIDTH, H_HEIGHT), get_clock_pos(clock60, minute, 'min'), 5)
    pygame.draw.line(surface, pygame.Color('magenta'), (H_WIDTH, H_HEIGHT), get_clock_pos(clock60, second, 'sec'), 4)
    pygame.draw.circle(surface, pygame.Color((255, 255, 255)), (H_WIDTH, H_HEIGHT), 8)
    #time_render = font.render(f'{t:%H:%M:%S}', True, pygame.Color('forestgreen'), pygame.Color('orange'))
    #surface.blit(time_render, (0, 0))
    
    screen.blit(image)
    pygame.image.load()
    pygame.display.flip()
    clock.tick(20)
"""

