/*One hot summer day Pete and his friend Billy decided to buy a watermelon. They chose the biggest and the ripest one,
in their opinion. After that the watermelon was weighed, and the scales showed w kilos. They rushed home, 
dying of thirst, and decided to divide the berry, however they faced a hard problem.
Pete and Billy are great fans of even numbers, that's why they want to divide the watermelon in such a way that each 
of the two parts weighs even number of kilos, at the same time it is not obligatory that the parts are equal. 
The boys are extremely tired and want to start their meal as soon as possible, that's why you should help them and find out, if they can divide the watermelon in the way they want. For sure, each of them should get a part of positive weight.

Input
The first (and the only) input line contains integer number w (1 = w = 100) — the weight of the watermelon bought by
the boys.
input 8:
outPut:YES
*/
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n==2)
	cout<<"NO";
	else if(n%2==0)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}
