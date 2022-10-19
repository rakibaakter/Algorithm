#include <iostream>
using namespace std;

int main(){
    int length, val, arr[length], product[length-1], temp, max=0;
    cout << "Length: ";
    cin >> length;
    cout << "values: ";
    
    for(int i=0; i<length; i++){
        cin >> val;
        arr[i]= val;
    }
    
    for(int i=1; i<=length; i++){
        int j=i-1;
        temp = arr[i]*arr[j];
        if(temp < 0){
            temp=temp*(-1);
        }
        product[j]=temp;

        if(max<product[j]){
            max=product[j];
        }

    }
    for(int i=1; i<=length; i++){
        int j=i-1;
        if(product[j]==max){
            cout << "{ " << arr[i] <<" , "<<arr[j] <<"  }" << endl;
        }

    }

    
    
}