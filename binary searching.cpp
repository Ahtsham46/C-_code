#include<iostream>
using namespace std;
int acc_sorting(int arr[],int siz,int key){
	int start = 0;
	int end = siz;
	while(start<=end){
		int mid = (start + end)/2;
		if(arr[mid]==key){
			return mid;
		}
		else if(arr[mid]>key){
			end = mid-1;
		}
		else{
			start = mid+1;
		}
	}
	return -1;
}
int main(){
	int arr[] = {10,20,30,40,50};
	int size = sizeof(arr)/sizeof(arr[0]);
	int key;
	cout<<"Enter number to find: ";
	cin>>key;
	cout<<acc_sorting(arr,size,key);
}