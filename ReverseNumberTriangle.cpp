// ================================================
//               Language: C++ / Cpp
//               Topic   : [pattern-printing]
//               Problem : 👉👉 [13]
//               Want    : ReverseNumberTriangle
// ================================================
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    for(int i = 1 ; i<=n ; i++){
        for(int j = n ; j>=n-i+1; j--){
               cout<<j;
        }
        cout<<endl;
    }
return 0;
}