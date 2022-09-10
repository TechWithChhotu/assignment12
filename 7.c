// Write a recursive function to print squares of first N natural numbers.
#include<stdio.h>
void square(int );
int main()
{
	int N;
	printf("Enter value of N: ");
	scanf("%d",&N);
	square(N);

return 0;
}
void square(int N){
	static int i=1;
	if(N==0)
	return 0;
	printf(" %d^2 = %d\n",i,i*i);
	i++;
	N--;
	square(N);
}

