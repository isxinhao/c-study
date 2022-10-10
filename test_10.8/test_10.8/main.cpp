#define _CRT_SECURE_NO_WARNINGS  1
//
//
////int main() 
////{
////	int pice;
////	scanf("%d", &pice);
////	if (pice < 18)
////		printf("就这呀\n");
////	else if (pice >= 18 && pice < 30)
////		printf("真tm贵\n");
////	else
////		printf("你咋不去抢呢\n");
////	return 0;
////
////}
//
//
//
//
////int main()
////{
////	int number;
////	printf("请输入您想要购买的商品\n");
////	printf("您可以输入数字1、2、3、4、5进行选择\n");
////	printf(" 1）齐哥的袜子\n 2)齐哥喝剩的饮料\n 3)浩哥的劳斯莱斯\n 4）浩哥的大金表\n 5)浩哥的电脑\n");
////	printf("请选择:");
////	scanf("%d", &number);
////	switch (number)
////	{
////	case 1:
////			printf("3元 （你真tm的傻逼，这tm是毒气弹） \n");
////			break;
////	case 2:
////				printf(" 5元（你真勇，齐哥的口气贼大）\n");
////				break;
////	case 3:
////					printf("1000000000000000元（想啥呢，浩哥的劳斯莱斯是你能要的？）\n");
////					break;
////	case 4:
////						printf("8888888元（老表有眼光呀！）\n");
////	case 5:
////							printf("6000元(浩哥的电脑贼垃圾)\n");
////							break;
////	default:
////		printf("瞎选什么傻逼，你tm的真该死，吃屎去吧！\n");
////	}
////			return 0;
////}
//
////int main()
////{
////	int i = 0;
////	while (i < 10)
////	{
////		i++;
////		if (i == 5)
////			continue;
////			printf("%d\n", i);
////
////	}
////	return 0;
////}
//
////int main()
////{
////	int ch = 0;
////	char ret;
////	char password[20] = { 0 };
////	printf("请输入您的密码：");
////	scanf("%s", password);
////	while (ch =(getchar()) != '\n')
////	{
////		;
////	}
////	printf("是否确认密码（确认请输入Y,放弃请输入N）\n");
////	ret = getchar();
////	if (ret == 'Y')
////		printf("确认成功\n");
////	else
////		printf("已放弃确认\n");
////	return 0;
////}
//
//
////#include<math.h>
////
////int main()
////{
////	double x = 1;
////	double y = 0;
////	double sum = 0;
////	
////	while (x < 1000000000000)
////	{
////		y = 1 + 1 / x;
////		sum = pow(y, x);
////		printf("sum = %lf\n", sum);
////		x++;
////	}
////		return 0;
////}
//
////  sum = 1! + !2 +... + n!			ret = n!
////int main()
////{
////	int ret = 1;
////	int n = 0;
////	int sum = 0;
////	int b = 0;
////	scanf("%d", &b);
////	for (n = 1; n <= b; n++)
////	{
////		ret = n * ret;
////		sum = sum + ret;
////	}
////	printf("ret = %d\n", ret);
////	printf("sum = %d\n", sum);
////	return 0;
////}
//
//#include<stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	int k = 0;
//	printf("请输入k值\n");
//	scanf("%d", &k);
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了,k的下标为 %d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("没找到");
//		return 0;
//}

//
//#include<stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int k = 0;
//	int mid = 0;
//	printf("请输入k值\n");
//	scanf("%d", &k);
//	
//	/*while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，k的下标为 %d\n", mid);
//			break;*/
//		/*}
//	}
//	if (left > right)
//	{
//		printf("没找到\n");
//	}
//	re



#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>


						// 调换两数组的下标相同的元素的位置
int main()
{
	char arr1[] = "welcome to Beijing!!!";
	char arr2[] = "#####################";
	int left = 0;
	int right = strlen(arr2) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(100);
	system("cls");
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}
