#include<bits/stdc++.h>
using namespace std;
//1 1 1 1 1
//1 2 2 2 2
//1 2 3 3 3
//1 2 3 4 
int main(){
	int a[101][101],n,i,j;
	cin>>n;
	for(i=1;i<=n;i++){
		int c=0;
		for(j=1;j<=n;j++){
			if(c!=i)
				c++;
			a[i][j]=c;
		}
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){	
			cout<<setw(5)<<a[i][j];
		}
		cout<<endl;
	}
		
	return 0;
} 
