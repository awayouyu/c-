#include<bits/stdc++.h>
using namespace std;
int a[1000];
int sb(int c,int n)
{
	for(int i=c;i<n;i++)
	{
		 if(a[c]<a[i])
		 {
		 	for(int j=i;j<n;j++)//         3   2   1    4
		 	{
		 		if(a[j]<a[c])
		 		{
		 		    swap(a[i],a[j]);
		 		    break;
				}
			}
			
		 }
	}
	return 0;
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int k=0;
	while(k<n)
	{
		sb(k,n);
		k+=1;
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
	return 0;
}
