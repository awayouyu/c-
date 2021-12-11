#include<bits/stdc++.h>
using namespace std;
const int N=5;
int main(){
	int a[101][101],n,i,j;
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			a[i][j]=0;
		}
	}
	i=1,j=n/2+1;
	a[i][j]=1;
	for(int k=2;k<=n*n;k++){
		if(k%n==1)
			i++;
		else {
			i--;j++;
			if(i==0)i=n;
			if(j==n+1) j=1;
		}
		a[i][j]=k;
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){	
			cout<<setw(4)<<a[i][j];
		}
		cout<<endl;
	}
		
	return 0;
} 
