#include <iostream>
using namespace std;

int main(){
    int num, val, tamp;
    int arr1[num], arr2[num];

    cout << "Enter the size of array : ";
    cin >> num;

    for(int i=0; i<num; i++){
        cin >> val;
        arr1[i]=val;
    }
    for(int i=0; i<num; i++){
        if((i+1)==num){
           tamp = arr1[0] - arr1[i];
        arr2[i]=tamp; 
        }else{
            tamp = arr1[i+1] - arr1[i];
            arr2[i]=tamp;
        }
        

    }
    for(int i=0; i<num; i++){
        cout << arr2[i] << " ";
    }
}