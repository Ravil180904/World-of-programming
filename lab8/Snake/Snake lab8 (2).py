# Add levels. For example, when the snake receives 3-4 foods or depending on score 
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
        self.score = 0
    
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
    def check_collision_food(self, food):
        head = self.body[0]
        if head.x == food.pos.x and head.y == food.pos.y:
            self.body.append(Point(head.x, head.y))
            self.score += 1
            return True
        return False

class Level:
    def __init__(self):
        self.current_level = 1
        self.foods_to_next_level = 3
        self.speed = 5

    def check_level_up(self, score):
        if snake.score >= self.current_level * self.foods_to_next_level:
            self.current_level += 1
            self.foods_to_next_level += 3
            self.speed += 3
            return True
        return False

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
level = Level()

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

        if snake.check_collision_food(food):
            print("Got food!")
            food.generate_new_position()
            if level.check_level_up(snake):
                print(f"Level {level.current_level}!")
                #FPS = level.speed
        
        #level.updated_speed(clock)
        pygame.display.flip()
        clock.tick(FPS)
# The end!
"""

# Increase speed when the user passes to the next level
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
score_counter = pygame.font.SysFont("Verdana", 24)
WIDTH = 600
HEIGHT = 600

screen  = pygame.display.set_mode((WIDTH, HEIGHT))

Start_FPS = 5
FPS = Start_FPS
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
        self.score = 0
        self.snake = 0
    
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
    def check_collision_food(self, food):
        head = self.body[0]
        if head.x == food.pos.x and head.y == food.pos.y:
            self.body.append(Point(head.x, head.y))
            self.score += 1
            return True
        return False

class Level:
    def __init__(self):
        self.current_level = 1
        self.foods_to_next_level = 3
        self.speed_increaser = 5
        self.level = 0

    def check_level_up(self, snake):
        if snake.score >= self.current_level * self.foods_to_next_level:
            self.current_level += 1
            self.foods_to_next_level += 3
            global FPS
            FPS += self.speed_increaser
            #self.speed += 3
            return True
        return False

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

def draw_counter_score(snake, level):
    score_text = score_counter.render(f"Score: {snake.score}", True, colorBLACK)
    level_text = score_counter.render(f"level: {level.current_level}", True, colorBLACK)
    #next_level = score_counter.render(f"Next: {level.foods_to_next_level}", True, colorBLACK)
    screen.blit(score_text, (10, 10))
    screen.blit(level_text, (10, 30))
    #screen.blit(next_level, (10, 50))

done = False
snake = Snake()
level = Level()

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

        if snake.check_collision_food(food):
            print("Got food!")
            food.generate_new_position()
            if level.check_level_up(snake):
                print(f"Level {level.current_level}!")
                #FPS = level.speed
        
        #level.updated_speed(clock)
        draw_counter_score(snake, level)
        pygame.display.flip()
        clock.tick(FPS)
  
# The end!
"""
