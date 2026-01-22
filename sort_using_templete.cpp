#include<iostream>
using namespace std;
template <class type>
void sort(type arr[],int n)
{
	type temp;
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
template <class type>
void display(type arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
		cout<<arr[i]<<" ";

	cout<<endl;
}
int main()
{
	int arr[]={10,50,30,20,60,40,70};
	int size= sizeof(arr)/sizeof(arr[0]);
	sort(arr,size);
	display(arr,size);
}
