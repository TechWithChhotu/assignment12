// Write a recursive function to print first N even natural numbers
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
	static int i=2;
	if(n==0)
	return 0;
	n--;
	printf("%d ",i);
	i+=2;
	evenN(n);
}

