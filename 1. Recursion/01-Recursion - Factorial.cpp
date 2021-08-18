#include <iostream>

using namespace std;

//O(N)ST
int factorialRecursive(int n){
    if (n == 0 || n == 1)
            return 1;
    return n * factorialRecursive(n - 1);
}

//O(N)T
int factorialIterative(int n){
    int factorial = 1, i;
    for(i = 1; i <= n; i++)
        factorial *= i;
    return factorial;
}

int main()
{
    cout<<factorialRecursive(10)<<"\n"<<factorialIterative(10);
    return 0;
}
