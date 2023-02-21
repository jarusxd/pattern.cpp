#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"Enter a num: ";
	cin>>n;
	for(i=n;i>=0;i--)
	{
		//space
		for(j=n-i-1;j>=0;j--){
		cout<<" ";
		}
		//star
		for(j=2*i+1;j>=1;j--){
		cout<<"*";
		}
		//space
		for(j=n-i-1;j>=0;j--){
		cout<<" ";
		}
		cout<<endl;
	}
}
