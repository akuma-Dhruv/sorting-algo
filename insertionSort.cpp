#include<iostream>
using namespace std;
void insertionSort(int *a,int n)
{
	int k=0,temp=0,ptr=0;
	for(k=1;k<n;k++)
	{
		temp=a[k];
		ptr=k-1;
		while(temp<a[ptr])
			{
				a[ptr+1]=a[ptr];
				ptr=ptr-1;
			}
			a[ptr+1]=temp;
	}
}
main()
{
	int n=0;
	int a[5]={5,9,3,2,1};
	insertionSort(a,5);
	while(n<5)
		{
			cout<<a[n];
			n++;
		}
}
