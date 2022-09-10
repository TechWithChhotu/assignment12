//Write a recursive function to print first N odd natural numbers
#include<stdio.h>
void oddN(int );
int main()
{
	int n;
	printf("Enter value of N: ");
	scanf("%d",&n);
	oddN(n);

return 0;
}
void oddN(int n){
	static int i=1;
	if(n==0)
	return 0;
	n--;
	printf("%d ",i);
	i+=2;
	oddN(n);
}
