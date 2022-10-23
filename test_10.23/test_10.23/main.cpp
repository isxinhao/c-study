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
		printf("请输入您猜的数 > ");
		scanf("%d",&guess);
		if (guess > ret)
			printf("猜大了！！！\n");
		else if (guess < ret)
			printf("猜小了！！！\n");
		else
		{
			printf("！！！！！！！恭喜你猜对了！！！！！！！！\n");
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
			printf("请选择 0 或 1 \n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("游戏开始\n");
			game();
			break;
		case 0 :
			printf("退出程序\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);
	return 0;
}

