#include<iostream>
using namespace std;
int main(){
	int i;
	int j;
	int distinctCha=0;
	int flag=0;
	string s;
	cin>>s;
	for(i=0;i<s.size();i++){
		
		for(j=i-1;j>=0;j--){
			if(s[i]==s[j]){
				flag=1;
				break;
			}
		}
		if(flag==0){
			distinctCha++;
		}
		flag=0;
		
	}
	if(distinctCha%2==0){
		cout<<"CHAT WITH HER!\n";
	}else{
		cout<<"IGNORE HIM!\n";
	}
	return 0;
}
