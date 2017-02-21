/*二叉树，查询和修改节点值，并可以增加或删除末层*/
#include <stdio.h>
#include <stdlib.h>

struct treenode
{
	int data;
	struct treenode*pnext_left, *pnext_right;
};

struct treenode*settree(int n)
{
	struct treenode*root;
	root = (struct treenode*)malloc(sizeof(struct treenode));
	int i;
	
	return root;
}

int main()
{
	int i, n, choice;
	struct treenode*root;
	printf("请输入自定义的树的层数\n");
	scanf_s("%d\n", &n);
	root = settree(n);
	for (i = 1; i > 0; i++)
	{
		printf("请输入操作\n1.增加一层\n2.查询数据\n3.删除末层\n4.修改数据\n5.退出\n");
		scanf_s("%d\n", &choice);
		if (choice == 1)
		{
			add();
		}
		else if (choice == 2)
		{
			search();
		}
		else if (choice == 3)
		{
			del();
		}
		else if (choice == 4)
		{
			change();
		}
		else if (choice == 5)
		{
			return 0;
		}
		else
		{
			printf("违规操作！\n");
		}
	}
}