// Write a recursive function to print binary of a given decimal number
#include<stdio.h>
int con_bin(int );
int main()
{
	int num,binary;
	printf("Enter the number: ");
	scanf("%d",&num);
	
	binary=con_bin(num);
	printf("binary = %d",binary);
return 0;
}
int con_bin(int num){
	int rem;
	static int binary=0,base=1;
	if(num){
		rem=num%2;
		binary=binary+base*rem;
		base*=10;
		num/=2;
		con_bin(num);
	}
	else
	return binary;
}
