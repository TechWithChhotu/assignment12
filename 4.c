// Write a recursive function to print first N odd natural numbers in reverse order
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
	if(n==0)
	return 0;
	n--;
	printf("%d ",n*2+1);
	oddN(n);
}

