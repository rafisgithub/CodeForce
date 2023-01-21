#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string s;
	cin>>s;
//	s[0]=toupper(s[0]);
    if(s[0]>='a' && s[0]<='z') {
        s[0]-=32;
	}
	cout<<s;
	return 0;
}
