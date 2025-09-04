// ================================================
//               Language: C++ / Cpp
//               Topic   : [pattern-printing]
//               Problem : 👉👉 [2]
//               Want    : StarSquare
//
// ================================================
#include <iostream>
using namespace std;
int main()
{
    int n;
    ;
    cout << "Enter Number ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {

        for (int j = 0; j <= n; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}