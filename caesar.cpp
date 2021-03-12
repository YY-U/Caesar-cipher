#include<iostream>
#include<string>
using namespace std;
int main(){
  string s;
  string newss;
  //string ja="あいうえおかきくけこさしすせそたちつてとなにぬねのはひふへほまみむめもやゆよらりるれろわをん";
  int k=0;
  int j=0;
  const int n=26;//総アルファベット数=26

  //入力フェイズ
  cout << "アルファベット入力:";
  cin >> s;

  for(int i=1;i<=n-1;i++){//n=25通りシーザー変換する

    //変換処理//文字列1文字ずつ処理を行う
    while(s[k]!='\0'){
      if('a'<=s[k] && s[k]<='z')newss[k]='a'+(s[k]-'a'+i)%26;
      else if('A'<=s[k] && s[k]<='Z')newss[k]='A'+(s[k]-'A'+i)%26;
      k++;
    }

    newss[k]='\0';
    k=0;

    //出力フェイズ
    cout << i << " 文字ずらし ";
    while(newss[j]!='\0'){
      cout << newss[j];
      j++;
    }

    j=0;
    newss="";//初期化
    cout << endl;

  }
}

  


    
