// ================================================
//               Language: C++ / Cpp
//               Topic   : [pattern-printing]
//               Problem : 👉👉 [21]
//               Want    : PrintRhombus
// ================================================

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;
   for(int i = 1 ; i<=n;i++){
    for(int j = 1; j<=n-i;j++){
            cout<<" " ;
    }
    for(int j = 1; j<=n;j++){
     cout<<"*";
    }
    cout<<endl;
   }

    return 0;
}
