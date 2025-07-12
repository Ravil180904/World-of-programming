"""
import pygame

# инициализация Pygame
pygame.init()

# задаем размер окна
screen_width, screen_height = 800, 600
screen = pygame.display.set_mode((screen_width, screen_height))
pygame.display.set_caption("Рисование квадратов выделением")

# список для хранения квадратов
squares = []

# текущий квадрат
current_square = None

drawing = False

running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
        elif event.type == pygame.MOUSEBUTTONDOWN:
            if not drawing:
                # начать рисование нового квадрата
                drawing = True
                start_pos = pygame.mouse.get_pos()
                current_square = pygame.Rect(start_pos[0], start_pos[1], 0, 0)
        elif event.type == pygame.MOUSEMOTION:
            if drawing:
                # обновить размеры текущего квадрата в режиме рисования
                current_square.width = pygame.mouse.get_pos()[0] - current_square.x
                current_square.height = pygame.mouse.get_pos()[1] - current_square.y
        elif event.type == pygame.MOUSEBUTTONUP:
            if drawing:
                # завершить рисование текущего квадрата
                drawing = False
                squares.append(current_square)
                current_square = None

    # очистка экрана
    screen.fill((255, 255, 255))

    # рисуем все квадраты
    for square in squares:
        pygame.draw.rect(screen, (0, 0, 0), square, 2)

    # рисуем текущий квадрат в режиме рисования
    if current_square is not None:
        pygame.draw.rect(screen, (0, 0, 0), current_square, 2)

    # обновление экрана
    pygame.display.update()

# завершение работы Pygame
pygame.quit()
"""

import pygame

pygame.init()

# Задаем размеры окна
width = 800
height = 600

# Создаем окно с заданными размерами
window = pygame.display.set_mode((width, height))
pygame.display.set_caption('Рисование прямоугольников')

# Задаем начальные и конечные координаты выделения прямоугольника
start_x = 0
start_y = 0
end_x = 0
end_y = 0

# Переменная для определения, когда пользователь начал выделение
drawing = False

running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
        elif event.type == pygame.MOUSEBUTTONDOWN:
            # Задаем начальные координаты выделения
            start_x, start_y = event.pos
            drawing = True
        elif event.type == pygame.MOUSEMOTION:
            if drawing:
                # Задаем конечные координаты выделения
                end_x, end_y = event.pos
        elif event.type == pygame.MOUSEBUTTONUP:
            # Задаем конечные координаты выделения
            end_x, end_y = event.pos
            drawing = False

    window.fill((255, 255, 255))  # Очищаем окно

    if drawing:
        # Показываем текущий прямоугольник выделения
        pygame.draw.rect(window, (0, 0, 0), (start_x, start_y, end_x - start_x, end_y - start_y), 1)

    pygame.display.update()

pygame.quit()

