#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>

using namespace std;

int main (){

  int i, n, number, count = 0, pair = 1, no_pair = 0;
  cin >> n;
  vector<int> array(n);
  
  for (i = 0; i < n ; i ++){
    cin >> number;
    array[i] = number;
  }

  for (i = 0; i < n; i ++){
    if (array[i] == no_pair){
      if ((array[i+1] == pair) && (array[i-1] == pair) ){
        array[i] = pair;
      }
    }
  }

  for (i = 0; i < n; i ++){
    if (array[i] == pair){
      count ++;
    }
  }

  cout << count << endl;

  return 0;
}
