#include <bits/stdc++.h>
using namespace std;
bool pri(int n) {//ËØÊı
	if(n<2) return false;
	for(int i=2; i*i<=n; i++) {
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	int a[101],n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		if(pri(a[i]))
			cout<<a[i]<<" ";
	}
	return 0;
} 
