/*								while语句
#include <stdio.h>
int main() {
	float fahr, celsius;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;

	printf("摄氏度 华氏度\n");
	celsius = lower;
	while (celsius <= upper) { 
		fahr = 5 * celsius  / 9+ 32;
		printf("%6.1f %3.0f\n", celsius, fahr);
		celsius = celsius + step;
	}


}*/





															/*    for语句    */
/*#include <stdio.h>

int main() {
	int fahr;
	for (fahr = 300;fahr >= 0;fahr = fahr - 20)
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}  */

/*#include <stdio.h>

int main() {
	int fahr;
	for (fahr = 300; fahr >= 0; fahr = fahr - 20)
		printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
}  */


																	 /*打印 EOF*/

/*
#include <stdio.h>

int main() {
	int c;
	c = getchar();
	while(c != EOF)  {
		putchar(c);
		c = getchar();                     若编写c ！= EOF;或      删除本行则会陷入死循环
	}
}												         */     

										/*另一种版本  (可行)*/
/*

#include<stdio.h>
int main() {
	int c;
	while ((c = getchar()) != EOF)
		putchar(c);
}										*/




                                            /*练习 1—7     (结果为0)*/


/*
#include <stdio.h>

int main() {
	int c;
	while (c = getchar() != EOF)
		putchar(c);
}			*/

//
//#define IN 1;
//#define OUT 0;
//int main() {
//	int c, nl,  nc, state;
//
//	state = OUT;
//	nl =  nc = 0;
//	while ((c = getchar()) != EOF) {
//		++nc;
//		if (c == '\n') {
//			++nl;
//		}
//		
//	}
//	printf("%d %d %d\n", nl,  nc);
#include <stdio.h>

//




int Add(int x, int y)
{
	int z = x + y;
	return z;
}

int main() {
	int num1 = 0 ;
	int num2 = 0 ;
	int sum = 0;
	scanf("%d%d",&num1,&num2);
	sum = Add(num1, num2);
	printf("sum = %d\n", sum);
	return 0;

}



