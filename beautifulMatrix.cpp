/* 
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int value;
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			cin>>value;
			if(value == 1 ){
				cout<<abs(3-i)+abs(3-j)<<endl;
			}
		}
	}
	return 0;
}
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int matrix[6][6];
	int i;
	int j;
	int minNumOfMove=0;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			cin>>matrix[i][j];
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(matrix[i][j]==1){
				minNumOfMove=abs(2-i)+abs(2-j);
			}
		}
	}
	cout<<minNumOfMove<<endl;
	
	return 0;
}
