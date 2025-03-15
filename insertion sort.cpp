#include<iostream>
using namespace std;
int main(){
	int arr[] = {45,12,8,33,17,25,19,2,50,6};
	int size = sizeof(arr)/sizeof(arr[0]);
	for(int i=1;i<size;i++){
		int current =  arr[i];
		int j = i-1;
		while(arr[j]>current && j>=0){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = current;
	}
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}