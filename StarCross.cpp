// ================================================
//               Language: C++ / Cpp
//               Topic   : [pattern-printing]
//               Problem : 👉👉 [19]
//               Want    : StarCross (X Shape)
// ================================================
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
           if (j== i || j==(n-i+1))
           {
            cout<<"*";
           }else
           {
            cout<<" ";
           }
           
           
        }
        cout<<endl;
        
    }
    
    return 0;
}