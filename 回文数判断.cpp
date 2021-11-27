#include<bits/stdc++.h>
using namespace std;
int a[101],n;
bool isHuiwen(int number)  
{   
	  int n = 0;//余数.  
	  int m = number; 
 	 while(m != 0)  
 	 {  
  	  n = n*10 + m %10; //number的最低位变为n的最高位 
	    m = m /10;  
 	 }  
	  
  	if(n==number)  
	    return true;
	  else 
	    return false;  
} 
int f(int n,int m){
	int k=n+m;
	if(isHuiwen(k))	return k;
	else return f(k,k);
}
int main(){
	int a[1001],n;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(isHuiwen(a[i])==true){
			cout<<a[i]<<" ";
		}
	}
	return 0;       
}
