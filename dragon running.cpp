#include <stdio.h>
#include <graphics.h>
#include "conio.h"
#include "EasyXPng.h"

#define WIDTH  640
#define HEIGHT 480

int speed = -1; // move to the left
int x = WIDTH;

int main()
{
	IMAGE im_bk, im_dra, im_house;
	initgraph(WIDTH, HEIGHT);

	int i = 0;
	TCHAR filename[20];
	IMAGE img[8];

	// Load dragon images
	for (i = 0; i < 8; i++)
	{
		_stprintf_s(filename, _T("d%d.png"), i);
		loadimage(&img[i], filename);
	}

	// Load background and house images
	loadimage(&im_bk, _T("bg0.png"));
	loadimage(&im_house, _T("house1.png"));

	i = 0;
	BeginBatchDraw();
	while (1)
	{
		putimage(0, 0, &im_bk);
		putimagePng(x, HEIGHT / 2, &img[i]);

		// Place house image on the bottom of the background
		putimagePng(50, HEIGHT - 150, &im_house); // Adjust position as needed

		Sleep(60);
		x = x + speed;

		if (i == 7) i = 0;
		i++;
		if (x < 0)
			x = WIDTH;

		FlushBatchDraw();
	}

	(void)_getch();
	return 0;
}