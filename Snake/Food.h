void Build_Food(void)
{
	int x = Get_Random(EDGE-5) + 2;
	int y = Get_Random(EDGE*3 - 5) + 2;
	while (Map[x][y] == 1)
	{
		x = Get_Random(EDGE - 5) + 1;
		y = Get_Random(EDGE * 3 - 5) + 1;
	}
	Map[x][y] = 'G';
}
void Eat_Food(int x, int y)
{
	Add_Node(x, y);
	Build_Food();
}