/*Sometimes some words like "localization" or "internationalization" are so long that writing them many times in one text is quite tiresome.
Let's consider a word too long, if its length is strictly more than 10 characters. All too long words should be replaced with a special abbreviation.
This abbreviation is made like this: we write down the first and the last letter of a word and between them we write the number of letters between the first and the last letters. That number is in decimal system and doesn't contain any leading zeroes.

You are suggested to automatize the process of changing the words with abbreviations. At that all too long words should be replaced by the abbreviation and the words that are not too long should not undergo any changes.
Input
The first line contains an integer n (1 = n = 100). Each of the following n lines contains one word. All the words consist of lowercase Latin letters and possess the lengths of from 1 to 100 characters.
*/
#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	string s;
	cin>>s;
	if(s.length()<=10){
		cout<<s<<endl;
	}else{
		cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
	}
	}
	return 0;
}
