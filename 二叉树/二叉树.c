/*����������ѯ���޸Ľڵ�ֵ�����������ӻ�ɾ��ĩ��*/
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
	printf("�������Զ�������Ĳ���\n");
	scanf_s("%d\n", &n);
	root = settree(n);
	for (i = 1; i > 0; i++)
	{
		printf("���������\n1.����һ��\n2.��ѯ����\n3.ɾ��ĩ��\n4.�޸�����\n5.�˳�\n");
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
			printf("Υ�������\n");
		}
	}
}