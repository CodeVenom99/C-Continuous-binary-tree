#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
char* creat_BTree(void);//先补成完全二叉树
void PreTraverseBTree(char* p, int index, int len);//先序遍历
void test01(const int num)
{
	int temp = 1;
	while (num >= temp-1)
	{
		temp *= 2;
	}
	printf("左子树下标：%d\r\n", temp - 2 + 2 * (num - ((temp / 2) - 2)) - 1);
	printf("右子树下标：%d\r\n", temp - 2 + 2 * (num - ((temp / 2) - 2)));

}
int main()
{
	//test01(4);
	char* p = creat_BTree();
	PreTraverseBTree(p, 0, 15);
	return 0;
}
void PreTraverseBTree(char *p,int index, int len)
{

	if (index < len)
	{
	int temp = 1;
	if (*(p + index) != ' ')
	{
		printf("%c,%d\r\n", *(p + index),index);
	}

	while (index >= temp-1)
	{
		temp *= 2;
	}
	PreTraverseBTree(p , temp - 2 + 2 * (index - ((temp / 2) - 2)) - 1, len);
	PreTraverseBTree(p , temp - 2 + 2 * (index - ((temp / 2) - 2)) ,len);
	}

}
char* creat_BTree(void)
{
	char* p = (char*)malloc(sizeof(char) * 15);
	if (p == NULL)	exit(-1);
	p[0] = 'A';
	p[1] = 'B';
	p[2] = 'F';
	p[3] = 'C';
	p[4] = 'D';
	p[5] = 'H';
	p[6] = 'G';
	p[7] = ' ';
	p[8] = 'E';
	p[9] = ' ';
	p[10] = ' ';
	p[11] = ' ';
	p[12] = ' ';
	p[13] = ' ';
	p[14] = 'I';
	return p;
}






