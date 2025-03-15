#include<iostream>
using namespace std;
int main(){
	int a = 6, b = 10;
	int c = a & b;
	cout<<"& operator: "<<c;
	c = a | b;
	cout<<"\n| operator: "<<c;
	c = a ^ b;
	cout<<"\n^ operator: "<<c;
	}
