#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"Enter a num: ";
	cin>>n;
	for(i=0;i<=n;i++)
	{//space
		for(j=0;j<n-i-1;j++){
		cout<<" ";
		}
	//star
	for(j=0;j<2*i+1;j++){
	cout<<"*"<<" ";
	}
	//space
		for(j=0;j<n-i-1;j++){
		cout<<" ";
		}
	cout<<endl;
	}
}
