#include<bits/stdc++.h>
using namespace std;
char s1[1001],s2[1001];
long long int a[100],b[100],c[100],lena,lenb,lenc,i,x; 
int main(){
//	memset(a,0,sizeof(a));
//	memset(b,0,sizeof(b));
//	memset(c,0,sizeof(c));
	gets(s1);gets(s2);
	lena=strlen(s1);lenb=strlen(s2);
	for(int i=0;i<=lena-1;i++) {
		a[lena-i]=s1[i]-48;
	}
	for(int i=0;i<=lenb-1;i++) {
		b[lenb-i]=s2[i]-48;
	}
	int x=0;
	while(lenc<=lena||lenc<=lenb){
		c[lenc]=a[lenc]+b[lenc]+x;
		x=c[lenc]/10;
		c[lenc]%=10;
		lenc++;
	}
	if(c[lenc]==0) 
		lenc--; 
	for(i=lenc;i>=1;i--){
		cout<<c[i];
	} 
	cout<<endl; 
} 
