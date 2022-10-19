//from a given (user input) array  and target number, find out the 1 pair of the sum from the elements that will be equal to the target number

#include<iostream>
using namespace std;

int main(){
    int len, val, target, x=0;
    cout << "length: ";
    cin >> len;
    int arr[len];
    cout << "values: ";
    for(int i=0; i<len; i++){
        cin >> val;
        arr[i]=val;
    }
    cout << "Array: ";
    for(int i=0; i<len; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;

    //pairing for target
    cout <<"Target: ";
    cin >> target;
     for(int i=0; i<len-1; i++){
         for(int j=i+1; j<len; j++){
             int sum =arr[i] + arr[j];
             if(sum==target){
                 cout <<"{" << arr[i] << "," << arr[j] << "}, ";
                 x=1;
             }

        }
    }

    if(x==0){
        cout << "pair not found";
    }


}