//Move all the negative elements to one side of the array 

#include <iostream> 
using namespace std;
void sort0(int arr[],int n){
	    
	    int j=0,temp;
	    for(int i=0;i<n;i++){
	        
	        if(arr[i]<0){
	            temp=arr[i];
	            arr[i]=arr[j];
	            arr[j]=temp;
	            j++;
	            
	        }
	    }
	}
int main() {
	int arr[]={-1,69,9,-12,-15,-78};
	int n =sizeof(arr)/sizeof(arr[0]);
	sort0(arr,n);
	
	for(int i=0;i<n;i++){
	        
	     cout<<arr[i]<<endl;
	            
	        
	    }
	return 0;
}
