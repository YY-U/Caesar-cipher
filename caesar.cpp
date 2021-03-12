#include<iostream>
#include<string>
using namespace std;
int main(){
  string s;
  string newss;
  string ja="あいうえおかきくけこさしすせそたちつてとなにぬねのはひふへほまみむめもやゆよらりるれろわをん";
  char c;
  int k=0;
  int j=0;
  int n;
  // char d='8'+2;
  // cout << d;
  cout << "入力:";
  cin >> s;

  for(int i=1;i<=46;i++){
    while(s[k]!='\0'){
      if('a'<=s[k] && s[k]<='z'){
	newss[k]='a'+(s[k]-'a'+i)%26;
      }
      else if('A'<=s[k] && s[k]<='Z'){
	newss[k]='A'+(s[k]-'A'+i)%26;
      }
      /* else if(0<=ja.find(s[k]) && ja.find(s[k])<=46){
	newss[k]=ja[(ja.find(s[k])+i)%46];
	}*/
      k++;
    }
    newss[k]='\0';
    k=0;
    cout << i << " 文字ずらし ";
    while(newss[j]!='\0'){
      cout << newss[j];
      j++;
    }
    j=0;
    
     newss="";
    cout << endl;
  }
}

  


    
