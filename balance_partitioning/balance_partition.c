#include<stdio.h>
#include<stdlib.h>
int * getArray(int n)
{
    static int arr[100];
    for(int i=0;i<n;i++)
    {
        arr[i] = 2i+4;
    }
    return findMin(arr,n);
}
int findMin(int arr[],int n)
{
    int total = 0;
    for(int i=0;i<n;i++)
    {
        total = total + arr[i];
    }
    return findSolution(arr,n,0,total);
}
int findSolution(int arr[],int n,int sum,int total)
{
    if(n==0) return 0;
    
    
}
int main()
{
	
	
}