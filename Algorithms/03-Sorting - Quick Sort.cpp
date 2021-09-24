#include <iostream>

using namespace std;

int partition(int A[], int l, int h){
    int pivot = A[l], i = l, j = h, temp;
    do{
        do{i++;} while(A[i] <= pivot);
        do{j--;} while(A[j] > pivot);
        if(i < j){
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while(i < j);
    temp = A[l];
    A[l] = A[j];
    A[j] = temp;

    return j;
}


void QuickSort(int A[], int l, int h){
    int j;
    if(l < h){
        j = partition(A, l, h);
        QuickSort(A, l, j);
        QuickSort(A, j + 1, h);
    }
}

int main()
{
    int A[] = {11, 2, 3, 7, 9};
    QuickSort(A, 0, 5);

    for(int i = 0; i < 5; i++)
        cout<<A[i]<<" ";

    return 0;
}
