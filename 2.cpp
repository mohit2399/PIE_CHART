#include<stdc++.h>
using namespace std;
int main()
{
	int n,k,t;
	long sum=0;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	cin>>t;
	
		sum-=a[k];
		if(sum/2==t)
		cout<<"Bon Appetit";
		else 
		cout<<t-sum/2;
}
