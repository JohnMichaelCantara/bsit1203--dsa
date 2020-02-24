#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n=100,i,n3, n1;
    int arr1[n], arr2[n], arr3[n];
    cout << "Enter array size:" << endl;
    cin >> n;
    for (i=0; i<n; i++){
        cout << "Ente element";
        cin >> arr1[i];
    }
    cout << "Original list" << endl;
    for (i=0; i<n-1; i++){
        cout << arr1[i] << endl;
    }
    for (i=0; i < n; i++){
        arr2[i]=arr1[i];
    }
    cout << "copy array" << endl;
    for (i=0; i<n -1; i++){
        cout << arr2[i] << endl;
    }
    for (i=0; i<n; i++){
        arr3[i]= arr1[i];
    }
    n3= n+n;
    int x;
    for (i=0, x=n; x<n3 && i< n1; i++,x++){
        arr3[x] = arr2[i]+5;
    }
    cout << "Now the new array after merging is:";
    for (i=0;i<n3-1; i++){
        cout << arr3[i] << " ";
    }
    return 0;
}
