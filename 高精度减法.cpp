#include<bits/stdc++.h>
using namespace std;
char s1[1001],s2[1001],s[1001];
long long int a[100],b[100],c[100],lena,lenb,lenc,i,x; 
int main(){
	
//	memset(a,0,sizeof(a));
//	memset(b,0,sizeof(b));
//	memset(c,0,sizeof(c));

	//输入
	printf("Input:  be cut\n");	gets(s1);
	printf("Input:  cut\n");gets(s2);
	// 
	if(strlen(s1)<strlen(s2)||(strlen(s1)==strlen(s2) && strcmp(s1,s2)<0)){
		strcpy(s,s1);
		strcpy(s1,s2);
		strcpy(s2,s);
		cout<<"-";
	} 
	lena=strlen(s1);lenb=strlen(s2);
	for(int i=0;i<=lena-1;i++) {
		a[lena-i]=int(s1[i]-'0');
	}
	for(int i=0;i<=lenb-1;i++) {
		b[lenb-i]=int(s2[i]-'0');
	}
	i=1;
	while(i<=lena||i<=lenb){
		if(a[i]<b[i]){
			a[i]+=10;
			a[i+1]--;
		} 
		c[i]=a[i]-b[i];
		i++;
	}
	lenc=i;
	while(c[lenc]==0 && (lenc>1)) //最高位0不输出 
		lenc--; 
	//输出 
	for(i=lenc;i>=1;i--){
		cout<<c[i];
	} 
	cout<<endl; 
} 
