Instructions:
Gameplay: The dragon moves automatically from the right side to the left, looping back to the right edge when it exits the screen.
Exit: The game runs in a continuous loop; press any key in the terminal to close the window.
Requirements:
Compiler: Use a C++ compiler that supports the EasyX library (recommended: Visual Studio).
Libraries: Make sure graphics.h, EasyXPng.h, and conio.h are included in your project files.
File Descriptions:
Source Code: Contains the main game logic for rendering and controlling animation.
Image Files:
d0.png to d7.png: Dragon images for the animation loop.
bg0.png: Background image file for the sky or environment.
house1.png: A static house image displayed at the bottom of the screen.
Setup:
Place all images (d0.png to d7.png for dragon sprites, bg0.png for the background, and house1.png for the house) in the same directory as the source code.
Compile and run the program using Visual Studio or another C++ IDE compatible with EasyX.
Game Logic:
The dragon continuously flies left across the screen at a set speed.
When it reaches the left edge of the screen, it reappears on the right side, creating an endless loop.
The house is statically displayed on the bottom of the screen for visual interest.
