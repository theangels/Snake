#include "Header.h"
#include "Linker.h"
#include "Food.h"
#include "Move And Check.h"
int main(void)
{
	printf("Welcome to my game!\n");
	printf("Please press any key to start!\n");
	_getch();
	Ini_program();
	Ini_Linker();
	gameover = false;
	while (!gameover)
	{
		Print_Map();
		Keybord();
		Move();
		if (gameover) break;
	}
	cout << "GameOver!" << endl;
	return 0;
}