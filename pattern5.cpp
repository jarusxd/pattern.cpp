#include<iostream>
using namespace std;
int main()
{
	int star=1,i,j,k;
	int n;
	cout<<"Enter a num: ";
	cin>>n;
	int space =n-1;
	for(i=0;i<n;i++){
		for(j=0;j<space;j++){
			cout<<" ";
		}
		for(k=0;k<star;k++)
		{
		 cout<<"*"<<" ";
		}
		cout<<endl;
		star++;
		space--;
	}
	int space1=1;
	int star1=n-1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<space1;j++)
		{
			cout<<" ";
		}
		for(k=0;k<star1;k++){
			cout<<"*"<<" ";
		}
		space1++;
		star1--;
		cout<<endl;
	}
}
