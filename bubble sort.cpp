#include<iostream>
using namespace std;
int bubble_sort(int arr[],int siz){
	for(int i = 0;i<siz;i++){
		for(int j = 0;j<siz-i-1;j++){	
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
}
int display(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<" "<<arr[i];
	}
}
int main(){
	int arr[] = {5,1,4,2,3};
	int size = sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr,size);
	display(arr,size);
	return 0;
}