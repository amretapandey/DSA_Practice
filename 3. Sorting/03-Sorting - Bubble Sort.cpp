#include <iostream>

using namespace std;

void Bubble(int A[], int n){
    int i, j, flag = 0, temp;
    for (i = 0; i < n - 1; i++){
        flag = 0;
        for(j = 0; j < n - 1 - i; j++){
            if (A[j] > A[j + 1]){
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                flag = 1;
            }
        }
        if(flag == 0)
            break;
    }
}

int main()
{
    int A[] = {11, 2, 3, 7, 9};
    Bubble(A, 5);

    for(int i = 0; i < 5; i++)
        cout<<A[i]<<" ";

    return 0;
}
