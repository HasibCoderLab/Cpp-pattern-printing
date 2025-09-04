// ================================================
//               Language: C++ / Cpp
//               Topic   : [pattern-printing]
//               Problem : 👉👉 [11]
//               Want    : NumberTriangleInverted01
// ================================================
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
 for (int i = 0; i <=n; i++)
 {
    for (int j = 0; j<=n-i+1; j++)
    {
      cout<<i <<" ";
    }
    cout<<endl;
    
 }
 
    return 0 ;
}
   