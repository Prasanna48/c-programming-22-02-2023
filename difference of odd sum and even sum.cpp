#include<stdio.h>
int main()
{
	int i,even,odd,difference;
	even=odd=0;
	while(i<=10)
	{
		printf("%d",i);
		if(i%2!=0)
		odd=odd+i;
		else
		even=even+i;
		i++;
	}
	difference=odd-even;
	printf("\n even sum=%d \n Odd sum=%d \n difference=%d",even,odd,difference);
}
