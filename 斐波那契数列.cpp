#include<bits/stdc++.h>
using namespace std;
int f(int n){
	if(n==0)	return 0;
	if(n==1)	return 1;
	return (f(n-1)+f(n-2));
}
int main(){
	int n;
	cin>>n;
	for(int i(2);i<=n;i++){
		cout<<f(i)<<"\n";
	}
	return 0;
}
