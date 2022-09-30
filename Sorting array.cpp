#include<iostream>
using namespace std;
int main()
{
	int size=5;
	int array[size],temp,i,j;
	for(int i=0;i<size;i++)
	{
		cout<<"Enter number "<<i+1<<" for the array"<<endl;
		cin>>array[i];
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size-1;j++)
		{
			if(array[i]>array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	cout<<"The sorted array is: "<<endl;
	for(i=0;i<size;i++)
	{
		cout<<array[i]<<endl;
	}
	return 0;
}
