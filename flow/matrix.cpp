#include <iostream>
#include <vector>

using namespace std;


void fct(vector< vector<int> > tab){
  cout << "ok : " << tab[0][0] << endl;
  
}




int main(){

  int m[4][4]= {
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12},
    {13,14,15,16}
  };


  int k[4][4];

  int n = 4;
  int sum = 0;
  for(int i = 0; i<n; i++){
    for(int j = 0; j<n; j++){
      sum += k[i][j];
      sum += m[i][j];
    }
  }

  

  cout << sum << endl;


  bool v[4] ;
  fill_n(v, 4, true);
  cout << v[0] << endl;

  int **tab;

  //int a = tab[0][0];

  

  vector< vector<int> > vect;
  vector<int> a;

  vect.push_back(a);
  vect[0].push_back(0);


  fct(vect);
 



  return 0;
}
