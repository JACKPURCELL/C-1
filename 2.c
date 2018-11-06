#include<stdio.h>
int main(void)
{
	int money,twenty,ten,five,one;
	printf("Enter a dollar amount: \n");
	scanf("%d",&money);
	twenty=money/20;
	ten=money%20/10;
	five=money%20%10/5;
	one=money%20%10%5;
	printf("$20 bills: %d\n",twenty);
	printf("$10 bills: %d\n",ten);
	printf(" $5 bills: %d\n",five);
	printf(" $1 bills: %d\n",one);
	return 0;
}
