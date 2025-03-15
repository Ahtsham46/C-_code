#include<iostream>
#include <vector>
using namespace std;
int linear(int arr[],int siz,int no){
	for(int i = 0;i<siz;i++){
		if(no == arr[i]){
			cout<<"Number found in array on index "<<i;
			return 0;
		}
	}
}
int main(){
	int arr[] = {23,34,76,98,10};
	int size = sizeof(arr)/sizeof(arr[0]);
	int num;
	cout<<"Enter number to find: ";
	cin>>num;
	linear(arr,size,num);
	cout<<"Number not found in array";
}