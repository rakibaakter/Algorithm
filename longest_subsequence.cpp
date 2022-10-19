#include<iostream>
using namespace std;

int main(){
    int len, val, count=0;
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
    cout << endl;int visited[len];

    for(int i=0; i<len; i++){

        if(visited[i]!=1){
           int count = 1;
           for(int j=i+1; j<len; j++){
              if(arr[i]==arr[j]){
                 count++;
                 visited[j]=1;
              }
            }
            
            if(count=1)
             cout<<arr[i]<<" ";
         }
     }

    cout << "\nsequence length: " << count ;

}