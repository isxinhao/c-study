#define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void menu()
{
	printf("*****************************************************\n");
	printf("*******************1 PLAY   0 EXIT*******************\n");
	printf("*****************************************************\n");
}

void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;
	while (1)
	{
		printf("���������µ��� > ");
		scanf("%d",&guess);
		if (guess > ret)
			printf("�´��ˣ�����\n");
		else if (guess < ret)
			printf("��С�ˣ�����\n");
		else
		{
			printf("����������������ϲ��¶��ˣ���������������\n");
			break;
		}
	}
}
	int main()
{
	int input = 0;
	srand((unsigned int )time(NULL));
	do
	{
		menu();
			printf("��ѡ�� 0 �� 1 \n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��Ϸ��ʼ\n");
			game();
			break;
		case 0 :
			printf("�˳�����\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);
	return 0;
}

