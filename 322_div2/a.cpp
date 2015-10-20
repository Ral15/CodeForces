#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <fstream>

using namespace std;

int main (){

  int a , b, diff = 0, same = 0;
  cin >> a >> b;

  if (a > b){
    diff = b;
    a -= b;
    same = a/2;
  }else {
    diff = a;
    b -= a;
    same = b/2;
  }

  cout << diff << " " << same << endl;

  return 0;
}
