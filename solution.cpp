//
// Created by Kylian Lee on 2021/09/23.
//

#include <iostream>

using namespace std;

int main(){
  int word_num;
  cin >> word_num;
  int cnt = 0;
  for (int i = 0; i < word_num; ++i) {
    bool exist[26] = {false};
    string word;
    cin >> word;
    int len = word.length();
    bool flag = true;
    for (int j = 1; j <= len; ++j) {
      if(word[j] == word[j - 1])
        continue;
      if(exist[word[j - 1] - 'a']) {
        flag = false;
        break;
      }
      exist[word[j - 1] - 'a'] = true;
    }
    if(flag)
      cnt++;
  }
  cout << cnt << endl;
  return 0;
}