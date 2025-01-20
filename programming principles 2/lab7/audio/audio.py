# Create music player with keyboard controller. You have to be able to press keyboard: play, stop, next and previous as some keys. Player has to react to the given command appropriately. 

import pygame

pygame.init()
screen = pygame.display.set_mode((800, 600))
pygame.display.set_caption("Audio selection")
clock = pygame.time.Clock()

audio_1 = pygame.mixer.Sound("C:\\Users\\Darya\\Documents\\programming-principles-2\\lab7\\\\audio\\audio1.wav")
audio_2 = pygame.mixer.Sound("C:\\Users\\Darya\\Documents\\programming-principles-2\\lab7\\audio\\audio2.wav")

current_audio = False

done = True
while done:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            done = False
        if event.type == pygame.KEYDOWN:
            if event.key == pygame.K_LEFT:
                current_audio = audio_1
                audio_2.stop()
                current_audio.play()
            elif event.key == pygame.K_RIGHT:
                current_audio = audio_2
                audio_1.stop()
                current_audio.play()
            elif event.key == pygame.K_SPACE and current_audio is not False:
                current_audio.stop()
    
    screen.fill((0, 0, 0))
    pygame.display.flip()
    clock.tick(60)
    
pygame.quit()

#pygame.quit()
