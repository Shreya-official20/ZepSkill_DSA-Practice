// print sub arrays of array
#include<iostream>
using namespace std;

int main(){
    int A[] = {1,2,3};
    int len=sizeof(A)/sizeof(int);
    for( int i=0; i<len; i++){
        for( int j=i; j<len; j++ ){   // Now A[i..j] is the subarray
            for( int k=i; k<=j; k++ )
                cout<<A[k];
            cout<<"\n";
        }
    }
    return 0;
}