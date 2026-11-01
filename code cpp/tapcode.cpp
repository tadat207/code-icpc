#include<iostream>
using namespace std;
int main()
{
	cout<<"nhap so mang: ";
	int i,n;
	cin>>n;
	int *a=new int[n];
	for(i=1;i<=n;i++)
	{
		cout<<"so thu "<<i<<":";
		cin>>a[i];
	}
	int tg=0;
	for(i=1;i<=n;i++)
	{
		tg=tg+a[i];
	}
	cout<<tg;
}