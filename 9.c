// Write a recursive function to print octal of a given decimal number
#include<stdio.h>
int con_oct(int );
int main()
{
	int num,octal;
	printf("Enter the number: ");
	scanf("%d",&num);
	
	octal=con_oct(num);
	printf("binary = %d",octal);
return 0;
}
int con_oct(int num){
	int rem;
	static int octal=0,base=1;
	if(num){
		rem=num%8;
		octal=octal+base*rem;
		base*=10;
		num/=8;
		con_oct(num);
	}
	else
	return octal;
}
