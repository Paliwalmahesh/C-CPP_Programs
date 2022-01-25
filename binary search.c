#include<stdio.h>
int binary_search(int a[],int size,int target)
{
	int low=0;
	int high=size-1;
	int mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==target)
		{
			return mid;
		}
		else if (target<a[mid])
		
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	return -1;
}
void main()
{
	int size,target,location;
	int a[]={1,2,3,4,5,6,7,8,9,10};
	size=10;
	target=6;
	location=binary_search(a,size,target);
	if(location==-1)
	{
		printf("not found");
	}
	else
	{
		("element found is at %d ",location);
	}
}
