//Mahesh dhanraj Paliwal
//Roll No:22442
#include<iostream>
using namespace std;
int n,i;
int read(int arr[]){
	cout<<"enter the number  element of an array \n";
	cin>>n;
	cout<<"enter the element of an array \n";
	for (i = 0; i < n; i++)
        cin>>arr[i];
    return n;	
}

void display(int arr[],int n){
	for (i = 0; i < n; i++)
    	cout<<i+1<< "element of array "<<arr[i]<<endl;	
}
void swap(int &x,int &y)
{
	int t=x;
	x=y;
	y=t;
}
void sort(int a[],int &n)
{
	cout<<"Array after sorting is\n";
	int i=0,j=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				swap(a[i],a[j]);
			}	
		}
	}
	for (i=0;i<n;i++)
	{
		cout<<a[i]<<" ";	
	}cout<<endl;
}


int main(){
	
int arr[50];
n=read(arr);
display(arr,n);
sort(arr,n);
	
	
}
