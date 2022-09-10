// Write a recursive function to print first N even natural numbers in reverse order
#include<stdio.h>
void evenN(int );
int main()
{
	int n;
	printf("Enter value of N: ");
	scanf("%d",&n);
	evenN(n);

return 0;
}
void evenN(int n){
	if(n==0)
	return 0;
	printf("%d ",n*2);
	n--;
	evenN(n);
}

