#include<iostream>
using namespace std;
void bubbleSort(int *a,int n)
{
  int i, j;
    for (i = 0; i < n-1; i++)
		for (j = 0; j < n-i-1; j++)
			if (a[j] > a[j+1])
				swap(a[j], a[j+1]);
}
main()
{
	int n=0;
	int a[5]={5,9,3,18,1};
	bubbleSort(a,5);
	while(n<5)
		{
			cout<<a[n];
			n++;
		}
}
