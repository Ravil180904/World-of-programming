# Foods which are disappearing after some time(timer)
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
            return True
        return False

class Food:
    def __init__(self, snake):
        self.snake = snake
        self.weight = 0
        self.food_different_weights = {
            colorGREEN: 0.6,
            colorYELLOW: 0.4,
            colorRED: 0.2
        }
        self.generate_new_position()
        self.timer = pygame.time.get_ticks() + 3000 # Food will disappear after 5 seconds

    def generate_new_position(self):
        while True:
            self.pos = Point(
                random.randint(0, WIDTH // CELL - 1),
                random.randint(0, HEIGHT // CELL - 1)
            )
            if self.pos not in self.snake.body:
                randomaizer_value = random.random()
                counter_weight = 0
                for food_type, weight in self.food_different_weights.items():
                    counter_weight += weight
                    if randomaizer_value <= counter_weight:
                        self.color = food_type
                        break
                self.timer = pygame.time.get_ticks() + 3000 # Reset the timer for the new food 
                break
    
    def move(self):
        pass
    def draw(self):
        pygame.draw.rect(screen, self.color, (self.pos.x * CELL, self.pos.y * CELL, CELL, CELL))

def draw_counter_score(snake, level):
    score_text = score_counter.render(f"Score: {snake.score}", True, colorBLACK)
    level_text = score_counter.render(f"level: {level.current_level}", True, colorBLACK)
    #next_level = score_counter.render(f"Next: {level.foods_to_next_level}", True, colorBLACK)
    #speed_counter = score_counter.render(f"Speed: {FPS}", True, colorBLACK)
    screen.blit(score_text, (10, 10))
    screen.blit(level_text, (10, 30))
    #screen.blit(next_level, (10, 50))
    #screen.blit(speed_counter, (10, 70))

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

        current_time = pygame.time.get_ticks()
        if current_time >= food.timer:
            food.generate_new_position()
            #print(f"Time to the disappear: {food.timer}")
        
        if snake.check_collision_food(food):
            print("Got food!")
            food.generate_new_position()
            if level.check_level_up(snake):
                print(f"Level {level.current_level}!")
        
        draw_counter_score(snake, level)
        pygame.display.flip()
        clock.tick(FPS)

# The end!!!
"""
