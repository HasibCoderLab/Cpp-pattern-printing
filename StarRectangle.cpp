// ================================================
//               Language: C++ / Cpp
//               Topic   : [pattern-printing]
//               Problem : 👉👉 [1]
//               Want    : StarRectangle
//                        
// ================================================
#include <iostream>
using namespace std;
int main(){
    int n;
    int m;
    cout<<"Enter numbers of Rows : ";
    cin>>n;
    cout<<"Enter Number of cols : " ;
    cin>> m;
    for (int  i = 0; i <=n; i++)
    {
        for(int j = 0; j<=m ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0 ;
}

