// ================================================
//               Language: C++ / Cpp
//               Topic   : [pattern-printing]
//               Problem : 👉👉 [4]
//               Want    : Alphabetsquare
//                        
// ================================================
#include <iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter side of Square " ;
    cin>> n;
    for(int i  = 1 ; i<=n; i++){
        for(int j = 1 ; j<=n ; j++){
            cout<<(char)(j+64);

        }
        cout<<endl;
    }
    return 0 ;
}