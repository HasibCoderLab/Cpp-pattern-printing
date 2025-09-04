// ================================================
//               Language: C++ / Cpp
//               Topic   : [pattern-printing]
//               Problem : 👉👉 [15]
//               Want    :FloydsTriangle.cpp
// ================================================
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number ";
    cin >> n;
    int num = 1 ;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
}