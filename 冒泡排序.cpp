#include <bits/stdc++.h>
using namespace std;
void mao_p(int a[],int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			if(a[j]>a[j+1])
				swap(a[j],a[j+1]);
		}
	}
}
int main(){
	int a[101],n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	mao_p(a,n);
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
} 
