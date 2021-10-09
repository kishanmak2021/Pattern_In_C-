

  // Program Output Factorial Of Input Using Recursion



#include <iostream>
using namespace std;
int fac(int n)
{
    int g;
    if(n==0 || n==1)
      {
        return 1;
      }
    return fac(n-1)*n; 
}

int main()

{
    int a;
    cout<<"Enter The Number To Get Its Factorial  :  ";
    cin >> a;
    cout << "Your Result Is : ";
    cout << fac(a);

    return 0;
}
