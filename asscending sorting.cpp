#include<iostream>
using namespace std;
int acc_sorting(int arr[],int siz){
	for(int i = 0;i<siz-1;i++){
		for(int j = i+1;j<siz;j++){
			if(arr[j]<arr[i]){
				swap(arr[j],arr[i]);
				
			}
		}
	}
}
int main(){
	int arr[] = {23,34,76,98,10};
	int size = sizeof(arr)/sizeof(arr[0]);
	cout<<"Sorting in Accending.\n";
	acc_sorting(arr,size);
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}