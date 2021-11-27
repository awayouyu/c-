#include<bits/stdc++.h>
using namespace std;
int n,a[1001],i;
void qsort(int x,int y){			//¿ìÅÅº¯Êı £¨×ÔĞ´£© 
	if(x>=y) return;
	int l=x,r=y,key=a[x];
	while(l<r){
		while(a[r]>=key&&l<r) r--;
		a[l]=a[r];
		while(a[l]<key&&l<r)  l++;
		a[r]=a[l];
	}
	a[l]=key;
	qsort(x,l-1);
	qsort(l+1,y);
}
int main(){
	int n=5,a[101]={40,30,20,10,50};
	cout<<"Sort:\n";
	qsort(1,n);   // sort(a+1,a+n+1);
	for(i=1;i<=n;i++) cout<<a[i]<<" ";
	return 0;
} 
