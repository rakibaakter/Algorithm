//take the user input and length from the user and find out the difference between max and min num from the array

#include<iostream>
using namespace std;

int main(){
    int len, val, temp, max, min;
    cout << "length: ";
    cin >> len;
    int arr[len];
    for(int i=0; i<len; i++){
        cin >> val;
        arr[i]=val;
    }
    for(int i=0; i<len; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
    for(int i=0; i<len; i++)
	{		
		for(int j=i+1; j<=len; j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
        
	}
	for(int i=0; i<len; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
    min=arr[0];
    max=arr[(len-1)];
    // for(int i=0; i<len; i++){
    //     while (i==0)
    //     {
    //         min = arr[i];
    //     }
    //      while (i==(len-1))
    //     {
    //         max = arr[i];
    //     }
        
    // }
    cout << "max = " << max << endl;
    cout << "min = " << min << endl;
    cout << "difference = " << max-min;


    return 0;
}