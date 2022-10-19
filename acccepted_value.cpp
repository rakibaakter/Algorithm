#include <iostream>
using namespace std;

//dispaly array
void display(int *array, int size){
    for(int i=0; i<size; i++){
        cout << array[i] << " ";
    }
    cout << endl;

}

int main(){
    int length, val, arr[length], temp;
    cout << "Length: ";
    cin >> length;
    cout << "values: ";
    
    for(int i=0; i<length; i++){
        cin >> val;
        if(val>=0 && val<=2){
            arr[i]= val;
        }
        else{
            cout << "\n wrong ";
            i--;
            continue;
        }
    }
    cout << "Before sorting: ";
    display(arr, length);

    cout << "after sorting: ";
	for( int i=0;i<length;i++)
	{		
		for(int j=i+1;j<length;j++)
		{
			if(arr[i]>arr[j])
			{
				temp  =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
    display(arr, length);

    
}