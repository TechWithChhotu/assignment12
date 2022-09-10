//Write a recursive function to print first N natural numbers in reverse order
#include<stdio.h>
void firstN(int );
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	firstN(n);
return 0;
}
void firstN(int N){
	if(N==0)
	return 0;
	printf(" %d",N);
	N--;
	firstN(N);
}
