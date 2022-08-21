//prime numbers in the given range
//ACW

#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool prime(int n)
{
    for (int j = 2; j <= sqrt(n); j++)
        if (n % j == 0)
            return false;

    return true;
    ;
}
int main()
{
    // Your code goes here;
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (prime(i))
            cout << i << endl;
    }
    return 0;
}