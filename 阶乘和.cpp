#include<bits/stdc++.h>
using namespace std;
void swap(int &x,int &y){
	int temp=x;
	x=y;
	y=temp;
}
void jsh(long long int n){
	long long int sum=0;
	for(long long int i=n;i>=0;i--){
		sum+=i*n;
	}
	cout<<sum;
}
int main(){

	int n,m;
	int js;
	cin>>js;
	
	jsh(js);
	cin>>n>>m;
	cout<<"Swap before: n="<<n<<"  m="<<m<<endl;
	
	swap(n,m);
	
	cout<<"Swap after: n="<<n<<"  m="<<m<<endl;
	return 0;       
}
