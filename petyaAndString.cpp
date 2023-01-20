#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char s1[100];
	char s2[100];
	cin>>s1;
	cin>>s2;
	if(strcasecmp(s1,s2)>0){
		cout<<"1";
	}else if(strcasecmp(s1,s2)<0){
		cout<<"-1";
	}else{
		cout<<"0";
	}
	return 0;
}
