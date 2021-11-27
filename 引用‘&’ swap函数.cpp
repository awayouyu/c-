#include<bits/stdc++.h>
void swap(int &x,int &y){
	int temp=x;
	x=y;
	y=temp;
}
int main(){
	using namespace std;
	int n,m;
	std::cin>>n>>m;
	
	std::cout<<"Swap before: n="<<n<<"  m="<<m<<endl;
	
	swap(n,m);
	
	std::cout<<"Swap after: n="<<n<<"  m="<<m<<endl;
	return 0;       
}
