#define _CRT_SECURE_NO_WARNINGS  1

//#include <stdio.h>
//
//int main() {
//
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d%d\n", &a, &b);
//	sum = a + b;
//	printf("%d\n", sum);
//
//\
//	return 0;
//}




#include <stdio.h>




//



//#include <stdio.h>

//void test() {
//	static int a = 3;
//	a = a * a;
//	printf("a = %d\n", a);
//}


//int main() {
//	int i = 0;
	//while (i < 2) {
		//test();
		//i++;

	//}
//	return 0;
//}



//int Multiply(int x, int y) {
	//int z = x * y;
	//return z;
 //}


//int main() {
	
	//int a = 0;
	//int b = 0;
	//int sum = 0;
	//scanf("%d%d", &a, &b);
	//sum = Multiply(a, b);
	//printf("%d\n", sum);
	//return 0;
//}


//int main() {
//
//	int a;
//	int b;
//	int c;
//	int d;
//	scanf("%d%d", &a,&b);
//	if (a > b) {
//		c = a + 100;
//		printf("c = %d\n", c);
//	}
//	else
//	{
//		d = b + 10;
//		printf("d = %d\n", d);
//
//	}


//	return 0;
//}


//#include <stdio.h>
//
//int Max(int x, int y) {
//	int z;
//	if (x > y) {
//		z = x;
//	}
//	else {
//		z = y;
//	}
//	return z;
//}
//
//int main() {
//	int a;
//	int b;
//	int c;
//	int d;
//	int sum;
//	scanf("%d%d%d", &a, &b,&d);
//	c = Max(a, b);
//	sum = c * d + c * c ;
//	printf("sum = %d\n", sum);
//	return 0



/*int main() {
	int a = 10;
	int* p = &a;
	*p = 20;
	printf("a = %d\n", a);
	return 0;
}  */



/*int main() {
	float f = 4.05;
	float* pd = &f;
	*pd = 11.27;
	printf("%f\n",f);
	return 0;
}*/
#include <stdio.h>
//struct Book
//{
//	char name[20];
//char author[10];
//};
//
//int main()
//{
//	struct Book b1 = { "《屎记》","司马八" };
//	printf("书名：%s\n", b1.name);
//	printf("作者：%s\n", b1.author);
//
//

	/*struct Book* pb = &b1;
	printf("书名：%s\n", (*pb).name);
	printf("作者：%s\n", (*pb).author);

	printf("书名：%s\n", pb->name);
	printf("作者：%s\n", pb->author);
	return 0;
}
*/

#include<stdio.h>
//#include<string.h>
struct Book
{
	char name[11];
	char author[11];
};

int main() {
	struct Book b1 = { "《理想国》","柏拉图" };
	printf("%s\n", b1.name);
	printf("%s\n", b1.author);
	struct Book* pb = &b1;
	//strcpy(b1.author, "nb");
	//printf("%s\n", b1.author);
	printf("%s\n", (*pb).name);
	printf("%s\n", (*pb).author);
	printf("%s\n", pb->name);
	printf("%s\n", pb->author);




	return 0;
}

















