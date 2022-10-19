#include <iostream>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void mid_large(int arr[], int n)
{

    for (int i = 1; i < n; i += 2)
    {
        
        if (arr[i - 1] > arr[i]) {
            swap(arr, i - 1, i);
        }

        if (arr[i + 1] > arr[i]) {
            swap(arr, i + 1, i);
        }
    }
}
 

int main(){
    int n;
    cin>>n;

    int a[n];

   for(int i=0;i<n;i++)

    {   int flag=0;
        cin>>a[i];

        for(int j=i-1;j>=0;j--)
        {
            if(a[i]==a[j-1])
            {
                flag=1;
            }

            if(flag==1)
            {
                cout<<" wrong ";
                i--;
                break;
            }
        }  

    }
    for (int i = 0; i < n; i++) {
        cout<<a[i] <<" ";
    }

     mid_large(a, n);
    
      
    for (int i = 0; i < n; i++) {
        cout<<a[i] <<" ";
    }

}