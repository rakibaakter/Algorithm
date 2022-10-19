//take the user input and length from the user and find out the counting of that number in the array

#include<iostream>
using namespace std;

int main(){
    int len, arr[len], val;
    cout << "length: ";
    cin >> len;
    
    for(int i=0; i<len; i++){
        cin >> val;
        arr[i]=val;
    }
    for(int i=0; i<len; i++){
        int count=0;
        for(int j=0; j<len; j++){
        if(arr[i]==arr[j]){
            count ++;
        }
    }
        cout << arr[i] <<"--"<< count <<" times"<< endl;
        while (arr[i+1]==arr[i])
        {
           continue;
        }
        

    }

    return 0;
}