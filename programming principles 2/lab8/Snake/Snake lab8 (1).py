# Checking for border (wall) collision and whether the snake is leaving the playing area
"""
import pygame
import sys
import random, time

pygame.init()

colorBLACK = (0, 0, 0)
colorGRAY = (200, 200, 200)
colorWHITE = (255, 255, 255)
colorRED = (255, 0, 0)
colorGREEN = (0, 255, 0)
colorBLUE = (0, 0, 255)
colorYELLOW = (255, 255, 0)

font = pygame.font.SysFont("Verdana", 60)
game_over = font.render("Game over", True, colorBLACK)
WIDTH = 600
HEIGHT = 600

screen  = pygame.display.set_mode((WIDTH, HEIGHT))

FPS = 5
clock = pygame.time.Clock()

CELL = 30

def draw_grid():
    for i in range(HEIGHT // CELL):
        for j in range(WIDTH // CELL):
            pygame.draw.rect(screen, colorGRAY, (i * CELL, j * CELL, CELL, CELL), 1)

def draw_grid_chess():
    colors = [colorWHITE, colorGRAY]

    for i in range(HEIGHT // CELL):
        for j in range(WIDTH // CELL):
            pygame.draw.rect(screen, colors[(i + j) % 2], (i * CELL, j * CELL, CELL, CELL))
    
class Point:
    def __init__(self, x, y) -> None:
        self.x = x
        self.y = y

class Snake:
    def __init__(self):
        self.body = [Point(10, 11), Point(10, 12), Point (10, 13)]
        self.dx = 1
        self.dy = 0
    
    def move(self):
        for i in range(len(self.body) - 1, 0, -1):
            self.body[i].x = self.body[i - 1].x
            self.body[i].y = self.body[i - 1].y

        self.body[0].x += self.dx
        self.body[0].y += self.dy

    def draw(self):
        head = self.body[0]
        pygame.draw.rect(screen, colorRED, (head.x * CELL, head.y * CELL, CELL, CELL))
        for segment in self.body[1:]:
            pygame.draw.rect(screen, colorYELLOW, (segment.x * CELL, segment.y * CELL, CELL, CELL))

    def check_border_collision(self):
        head = self.body[0]
        if head.x < 0 or head.x >= WIDTH // CELL or head.y < 0 or head.y >= HEIGHT // CELL:
            return True
        return False    
    def check_collision(self, food):
        head = self.body[0]
        if head.x == food.pos.x and head.y == food.pos.y:
            self.body.append(Point(head.x, head.y))
            return True
        return False

#def check_border_collision(self):
    #head = self.body[0]
    #if head.x < 0 or head.x >= WIDTH // CELL or head.y < 0 or head.y >= HEIGHT // CELL:
        #return True
    #return False

class Food:
    def __init__(self):
        self.pos = Point(15, 15)
       # self.snake = snake
        
        #self.generate_new_position()

        #def generate_new_position(self):
         #   while True:
          #      self.pos = Point(
           #         random.randint(0, WIDTH // CELL - 1),
            #        random.randint(0, HEIGHT // CELL - 1)
             #   )
              #  if self.pos not in self.snake.body:
               #     break
        
    def move(self):
        pass
    def draw(self):
        pygame.draw.rect(screen, colorGREEN, (self.pos.x * CELL, self.pos.y * CELL, CELL, CELL))
    
done = False
snake = Snake()
    
food = Food()
while not done:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                pygame.quit()
                sys.exit()
            if event.type == pygame.KEYDOWN:
                if event.key == pygame.K_RIGHT:
                    snake.dx = 1
                    snake.dy = 0
                if event.key == pygame.K_LEFT:
                    snake.dx = -1
                    snake.dy = 0
                if event.key == pygame.K_UP:
                    snake.dx = 0
                    snake.dy = -1
                if event.key == pygame.K_DOWN:
                    snake.dx = 0
                    snake.dy = 1
        draw_grid_chess()
        
        snake.move()
        snake.draw()

        food.draw()

        if snake.check_border_collision():
            print("Game over: Snake hit the wall!")
            screen.fill(colorRED)
            screen.blit(game_over, (130, 250))
            pygame.display.flip()
            time.sleep(2)
            pygame.quit()
            sys.exit()

        if snake.check_collision(food):
            print("Got food!")
        
        pygame.display.flip()
        clock.tick(FPS)
# The end!
"""
# Generate random position for food, so that it does not fall on a wall or a snake
"""
import pygame
import sys
import random, time

pygame.init()

colorBLACK = (0, 0, 0)
colorGRAY = (200, 200, 200)
colorWHITE = (255, 255, 255)
colorRED = (255, 0, 0)
colorGREEN = (0, 255, 0)
colorBLUE = (0, 0, 255)
colorYELLOW = (255, 255, 0)

font = pygame.font.SysFont("Verdana", 60)
game_over = font.render("Game over", True, colorBLACK)
WIDTH = 600
HEIGHT = 600

screen  = pygame.display.set_mode((WIDTH, HEIGHT))

FPS = 5
clock = pygame.time.Clock()

CELL = 30

def draw_grid():
    for i in range(HEIGHT // CELL):
        for j in range(WIDTH // CELL):
            pygame.draw.rect(screen, colorGRAY, (i * CELL, j * CELL, CELL, CELL), 1)

def draw_grid_chess():
    colors = [colorWHITE, colorGRAY]

    for i in range(HEIGHT // CELL):
        for j in range(WIDTH // CELL):
            pygame.draw.rect(screen, colors[(i + j) % 2], (i * CELL, j * CELL, CELL, CELL))
    
class Point:
    def __init__(self, x, y) -> None:
        self.x = x
        self.y = y

class Snake:
    def __init__(self):
        self.body = [Point(10, 11), Point(10, 12), Point (10, 13)]
        self.dx = 1
        self.dy = 0
    
    def move(self):
        for i in range(len(self.body) - 1, 0, -1):
            self.body[i].x = self.body[i - 1].x
            self.body[i].y = self.body[i - 1].y

        self.body[0].x += self.dx
        self.body[0].y += self.dy

    def draw(self):
        head = self.body[0]
        pygame.draw.rect(screen, colorRED, (head.x * CELL, head.y * CELL, CELL, CELL))
        for segment in self.body[1:]:
            pygame.draw.rect(screen, colorYELLOW, (segment.x * CELL, segment.y * CELL, CELL, CELL))

    def check_border_collision(self):
        head = self.body[0]
        if head.x < 0 or head.x >= WIDTH // CELL or head.y < 0 or head.y >= HEIGHT // CELL:
            return True
        return False    
    def check_collision(self, food):
        head = self.body[0]
        if head.x == food.pos.x and head.y == food.pos.y:
            self.body.append(Point(head.x, head.y))
            return True
        return False

#def check_border_collision(self):
    #head = self.body[0]
    #if head.x < 0 or head.x >= WIDTH // CELL or head.y < 0 or head.y >= HEIGHT // CELL:
        #return True
    #return False

class Food:
    def __init__(self, snake):
        #self.pos = Point(15, 15)
        self.snake = snake
        self.generate_new_position()

    def generate_new_position(self):
        while True:
            self.pos = Point(
                random.randint(0, WIDTH // CELL - 1),
                random.randint(0, HEIGHT // CELL - 1)
            )
            if self.pos not in self.snake.body:
                break
    
    def move(self):
        pass
    def draw(self):
        pygame.draw.rect(screen, colorGREEN, (self.pos.x * CELL, self.pos.y * CELL, CELL, CELL))
    
done = False
snake = Snake()
    
food = Food(snake)
while not done:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                pygame.quit()
                sys.exit()
            if event.type == pygame.KEYDOWN:
                if event.key == pygame.K_RIGHT:
                    snake.dx = 1
                    snake.dy = 0
                if event.key == pygame.K_LEFT:
                    snake.dx = -1
                    snake.dy = 0
                if event.key == pygame.K_UP:
                    snake.dx = 0
                    snake.dy = -1
                if event.key == pygame.K_DOWN:
                    snake.dx = 0
                    snake.dy = 1
        draw_grid_chess()
        
        snake.move()
        snake.draw()

        food.draw()

        if snake.check_border_collision():
            print("Game over: Snake hit the wall!")
            screen.fill(colorRED)
            screen.blit(game_over, (130, 250))
            pygame.display.flip()
            time.sleep(2)
            pygame.quit()
            sys.exit()

        if snake.check_collision(food):
            print("Got food!")
            food.generate_new_position()
        
        pygame.display.flip()
        clock.tick(FPS)
# The end!
"""
