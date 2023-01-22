#include<iostream>
using namespace std;
int main(){
	int a;
	int b;
	int i;
	cin>>a>>b;
	for(i=1; ; i++){
		a*=3;
		b*=2;
		if(a>b){
			break;
		}
	}
	cout<<i;
	return 0;
}
