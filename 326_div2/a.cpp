#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main (){

  int n, i, x, y, min, ans;
  cin >> n;
  int mat [n][2];
  for (i = 0; i < n; i ++){
    cin >> x >> y;
    mat[i][0] = x;
    mat[i][1] = y;
  }

  min = mat[0][1];
  ans = mat[0][0] * min;

  for (i = 1; i < n; i ++){
    if (min > mat[i][1]){
      min = mat[i][1];
      ans += mat[i][0] * min;
    }else{
      ans += mat[i][0] * min;
    }
  }

  cout << ans << endl;


  return 0;
}
