#include<iostream>
using namespace std;
int main(){
	int neighboringStone=0;
	int n;
	cin>>n;
	string s;
	cin>>s;
	for(int i=0;i<n;i++){
		if(s[i]==s[i+1]){
			neighboringStone++;
		}
	}
	cout<<neighboringStone;
	return 0;
}
