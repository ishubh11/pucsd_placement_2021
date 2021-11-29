#include<stdio.h>
#include<stdlib.h>
int fibo(int n)
{
	if(n==0) return n;
	if(n==1) return n;
	if(n>1) 
	{
	    return fibo(n-1)+fibo(n-2);
	}
	
}
int evenFibo(int n)
{
    if(n<1) return n;
    if(n==1) return 2;
    else
    {
        return 4*evenFibo(n-1)+evenFibo(n-2);
    }
}
int main()
{
	printf("%d \n",fibo(13));
	printf("%d \n",fibo(21));
	printf("%d \n",fibo(31));
	printf("%d \n",fibo(47));
	printf("%d \n",fibo(61));
	printf("%d \n",fibo(85));
	printf("%d \n",evenFibo(3));
	printf("%d \n",evenFibo(10));
	printf("%d \n",evenFibo(22));
	printf("%d \n",evenFibo(26));
	return 0;
}