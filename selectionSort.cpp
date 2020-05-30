#include<iostream>
using namespace std;
void selectionSort(int *a,int const size)
{
	int i=0,ptr=0,j=0;
	while(i<size)
	{
		ptr=i;
		for(j=i+1;j<size;j++)
		{
			if(a[ptr]>a[j])
				swap(a[ptr],a[j]);
		}
		i++;
	}

}
main()
{int n=0;
	int a[5]={5,9,3,2,1};
	selectionSort(a,5);
	while(n<5)
    {


	cout<<a[n];
    n++;}
}
