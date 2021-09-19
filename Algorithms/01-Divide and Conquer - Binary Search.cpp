#include <iostream>

using namespace std;

int BinarySearch_I(int A[], int n, int target){ // Iterative Algorithm
    int l = 0, h = n, mid;
    while(l < h){
        mid = int((l + h)/2);
        if(A[mid] == target)    return mid;
        else if(A[mid] <= target)   l = mid + 1;
        else    h = mid;
    }
    return -1;
}

int BinarySearch_R(int A[], int l, int h, int target){ // Recursive Algorithm
    if(l == h){
        if(A[l] == target)  return l;
        else return -1;
    } else{
        int mid = (l + h) / 2;
        if(A[mid] == target)    return mid;
        else if(A[mid] < target)    return BinarySearch_R(A, mid + 1, h, target);
        else return BinarySearch_R(A, l, mid, target);
    }
}

int main()
{
    int A[] = {1, 3, 4, 7, 8, 10, 23, 44, 99};
    cout<<BinarySearch_I(A, 9, 3)<<"\n"<<BinarySearch_R(A, 0, 9, 1);
    return 0;
}
