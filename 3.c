#include<stdio.h>
int main(void)
{
	float loan,rate,payment,month1,month2,month3;
	int each_month;
	printf("Enter amount of loan: Enter interest rate: Enter monthly payment: \n");
		scanf("%f",&loan);
		scanf("%f",&rate);
		scanf("%f",&payment);

	month1=loan*(1+rate/100/12)-payment;
	month2=month1*(1+rate/100/12)-payment;
	month3=month2*(1+rate/100/12)-payment;
	printf("Balance remaining after first payment: $%.2f\n",month1);
	printf("Balance remaining after second payment: $%.2f\n",month2);
	printf("Balance remaining after third payment: $%.2f\n",month3);
	return 0;
}

