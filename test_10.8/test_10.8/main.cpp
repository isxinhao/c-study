#define _CRT_SECURE_NO_WARNINGS  1
//
//
////int main() 
////{
////	int pice;
////	scanf("%d", &pice);
////	if (pice < 18)
////		printf("����ѽ\n");
////	else if (pice >= 18 && pice < 30)
////		printf("��tm��\n");
////	else
////		printf("��զ��ȥ����\n");
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
////	printf("����������Ҫ�������Ʒ\n");
////	printf("��������������1��2��3��4��5����ѡ��\n");
////	printf(" 1����������\n 2)����ʣ������\n 3)�Ƹ����˹��˹\n 4���Ƹ�Ĵ���\n 5)�Ƹ�ĵ���\n");
////	printf("��ѡ��:");
////	scanf("%d", &number);
////	switch (number)
////	{
////	case 1:
////			printf("3Ԫ ������tm��ɵ�ƣ���tm�Ƕ������� \n");
////			break;
////	case 2:
////				printf(" 5Ԫ�������£����Ŀ�������\n");
////				break;
////	case 3:
////					printf("1000000000000000Ԫ����ɶ�أ��Ƹ����˹��˹������Ҫ�ģ���\n");
////					break;
////	case 4:
////						printf("8888888Ԫ���ϱ����۹�ѽ����\n");
////	case 5:
////							printf("6000Ԫ(�Ƹ�ĵ���������)\n");
////							break;
////	default:
////		printf("Ϲѡʲôɵ�ƣ���tm�����������ʺȥ�ɣ�\n");
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
////	printf("�������������룺");
////	scanf("%s", password);
////	while (ch =(getchar()) != '\n')
////	{
////		;
////	}
////	printf("�Ƿ�ȷ�����루ȷ��������Y,����������N��\n");
////	ret = getchar();
////	if (ret == 'Y')
////		printf("ȷ�ϳɹ�\n");
////	else
////		printf("�ѷ���ȷ��\n");
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
//	printf("������kֵ\n");
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
//			printf("�ҵ���,k���±�Ϊ %d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("û�ҵ�");
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
//	printf("������kֵ\n");
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
//			printf("�ҵ��ˣ�k���±�Ϊ %d\n", mid);
//			break;*/
//		/*}
//	}
//	if (left > right)
//	{
//		printf("û�ҵ�\n");
//	}
//	re



#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>


						// ������������±���ͬ��Ԫ�ص�λ��
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
