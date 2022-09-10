// Write a recursive function to print reverse of a given number
#include<stdio.h>
int reverse(int );
int main()
{
	int num,rev;
	printf("Enter the number: ");
	scanf("%d",&num);
	rev=reverse(num);
	printf("after reversing number = %d",rev);

return 0;
}
int reverse(int num){
	static int rev=0;
	if(num){
		rev*=10;
		rev+=num%10;
		num/=10;
		reverse(num);

	}
	else
	return rev;
}
