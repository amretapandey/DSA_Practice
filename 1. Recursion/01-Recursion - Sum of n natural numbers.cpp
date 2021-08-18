#include <iostream>

using namespace std;

//O(N)ST
int sumRecursive(int n){
    if (n == 0)
            return 0;
    return n + sumRecursive(n - 1);
}

//O(N)T O(1)S
int sumIterative(int n){
    int sum = 0, i;
    for(i = 0; i <= n; i++)
        sum += i;
    return sum;
}

//O(1)ST
int sum(int n){
    return (n * (n + 1)) / 2;
}

int main()
{
    cout<<sumRecursive(10)<<"\n"<<sumIterative(10)<<"\n"<<sum(10);
    return 0;
}
