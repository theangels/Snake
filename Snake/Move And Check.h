int tx;
int ty;
void Move(void)
{
	for (Node *i = head; i != NULL && !gameover;i=i->next)
	{
		Map[i->x][i->y] = ' ';
		if (i == head)
		{
			tx = i->x;
			ty = i->y;
			if (Dir == 'u')
				(i->x)--;
			else if (Dir == 'd')
				(i->x)++;
			else if (Dir == 'l')
				(i->y)--;
			else if (Dir == 'r')
				(i->y)++;
			if (Map[i->x][i->y] == '*' || Map[i->x][i->y] == 1)
				gameover = true;
		}
		else
		{
			int dx, dy;
			dx = i->x;
			dy = i->y;
			i->x = tx;
			i->y = ty;
			tx = dx;
			ty = dy;
		}
		if (Map[i->x][i->y] == 'G')
			Eat_Food(i->x, i->y);
		Map[i->x][i->y] = 1;
	}
}
void Keybord(void)
{
	int key;
	if (_kbhit())
	{
		key = _getch();
		key = Get_Input(key);
		if (key == 0 && Dir != 'd')
			Dir = 'u';
		if (key == 1 && Dir != 'u')
			Dir = 'd';
		if (key == 2 && Dir != 'r')
			Dir = 'l';
		if (key == 3 && Dir != 'l')
			Dir = 'r';
	}
	Sleep(WAIT);
}