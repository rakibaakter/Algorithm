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

    int ar[n];

   for(int i=0;i<n;i++)

    {   int flag=0;
        cin>>ar[i];

        for(int j=i-1;j>=0;j--)
        {
            if(ar[i]==ar[j-1])
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

     mid_large(ar, n);
    
      
    for (int i = 0; i < n; i++) {
        cout<<ar[i];
    }

}