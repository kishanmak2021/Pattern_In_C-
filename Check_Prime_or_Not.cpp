#include <iostream>
using namespace std;
int main()
{
    int p, i;
   
    cout << "Enter Number To Check prime: ";
     cin >> p;
    for (i = 2; i < p; i++)
    {
        if (p % i == 0)
        {
            cout << "It Is NoT A Prime ";
            break;
        }
    }
    if (i==p){
        cout<<"Prime<<endl";
    }
    return 0;
}
