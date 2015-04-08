struct Node
{
	typedef Node _Self;
	int x;
	int y;
	_Self* next;
	Node() :x(), y(){}
	Node(int __x, int __y, _Self* __next = NULL)
		:x(__x), y(__y), next(__next){}
};
Node *head=NULL;
void Add_Node(int x, int y)
{
	Map[x][y] = 1;
	Node *tmp = new Node(x, y,head);
	head = tmp;
}
void Ini_Linker(void)
{
	Add_Node(11, 20);
	Add_Node(10, 20);
	Map[17][30] = 'G';
}