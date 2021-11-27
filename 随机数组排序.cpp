#include<bits/stdc++.h>
using namespace std;
int n,a[1001],i;
void qsort(int x,int y){
	if(x>=y) return;
	int l=x,r=y,key=a[x];
	while(l<r){
		while(a[r]>=key&&l<r) r--;
		a[l]=a[r];
		while(a[l]<key&&l<r)	l++;
		a[r]=a[l];
	}
	a[l]=key;
	qsort(x,l-1);
	qsort(l+1,y);
}
int main(){
	srand(time(0));
	int n;cin>>n;
	for(i=1;i<=n;i++){
		a[i]=rand()%100+1;
	}
	cout<<"New list:\n";
	for(i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	cout<<"Sort:\n";
	qsort(1,n);
	for(i=1;i<=n;i++) cout<<a[i]<<" ";
	return 0;
} 
