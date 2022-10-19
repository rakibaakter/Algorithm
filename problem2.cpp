#include <iostream>
using namespace std;

int main(){
    int num, val;

    cout << "Enter the size of array : ";
    cin >> num;
    int arr1[num], arr2[num];

    for(int i=0; i<num; i++){
        cin >> val;
        arr1[i]=val;
        if(val%2==0){
            arr2[i]=0;
        }else 
            arr2[i]=1;
    }
    for(int i=0; i<num; i++){
        cout << arr1[i] << " ";
    }
    cout << endl;
    for(int i=0; i<num; i++){
        cout << arr2[i] << " ";
    }
}