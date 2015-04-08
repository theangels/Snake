//@ Inital
#include <cstdio>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
//@ Standard Template Library
#include <map>
#include <set>
#include <list>
#include <deque>
#include <queue>
#include <stack>
#include <vector>
//@ Stream And String Library
#include <string>
#include <complex>
#include <sstream>
#include <iostream>
//Other
#include <conio.h>
#include <ctime>
#include <Windows.h>
#include <malloc.h>
using namespace std;
//@Define
#define LL long long
#define EDGE 23
#define WAIT 300
#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3
char Map[EDGE+10][EDGE*3+10];
bool gameover;
char Dir;
int Get_Input(int keyCodePart)
{
	int Tar=10;
	if (keyCodePart == 72)
		Tar = UP;
	if (keyCodePart == 80)
		Tar = DOWN;
	if (keyCodePart == 75)
		Tar = LEFT;
	if (keyCodePart == 77)
		Tar = RIGHT;
	return Tar;
}
int Get_Random(int Max)
{
	int re;
	srand((int)time(NULL));
	re = rand() % Max;
	return re;
}
void Ini_program(void)
{
	memset(Map, ' ', sizeof(Map));
	for (int i = 1; i <= EDGE; i++)
	{
		for (int j = 1; j <= EDGE*3; j++)
			if (i == 1 || j == 1 || j == EDGE*3 || i == EDGE)
				Map[i][j] = '*';
		Map[i][EDGE * 3 + 1] = 0;
	}
	Dir = 'u';
}
void Print_Map(void)
{
	system("CLS");
	for (int i = 1; i <= EDGE; i++)
		puts(Map[i] + 1);
}