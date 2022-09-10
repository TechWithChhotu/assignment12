//Write a recursive function to print first N natural numbers
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
	static int i=1;
	if(N==0)
	return 0;
	N--;
	printf(" %d",i++);
	firstN(N);
}
