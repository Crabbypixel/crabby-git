#include <iostream>
using namespace std;

int main()
{
    int i, j, row, space;
    
    cout << "Enter rows: ";
    cin >> row;
    
    space = row-1;
    
    for(i=1; i<=row; i++)
    {
        for(j=space; j>=1; j--)
            cout << " ";
        space--;
        
        for(j=0; j<2*i-1; j++)
            cout << "*";

        cout << endl;
    }

    space = 1;

    for(i=row-1; i>=1; i--)
    {
        for(j=1; j<=space; j++)            
        cout << " ";
            
        space++;

        for(j=0; j<2*i-1; j++)
            cout << "*";

        cout << endl;
    }

    return 0;
}
