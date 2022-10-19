//suppose you have 2 array,take the user input and length from the user and sort those two array by merging the values

#include<iostream>
using namespace std;
int main()
{
    int arrOne[50], arrTwo[50], arrMerge[100];
	int sizeOne, sizeTwo, i, k, temp;
    cout<<"Enter the Size for First Array: ";
    cin>>sizeOne;
    cout<<"Enter "<<sizeOne<<" Elements for First Array: ";
    for(i=0; i<sizeOne; i++)
    {
        cin>>arrOne[i];
        arrMerge[i] = arrOne[i];
    }
    k = i;
    cout<<"\nEnter the Size for Second Array: ";
    cin>>sizeTwo;
    cout<<"Enter "<<sizeTwo<<" Elements for Second Array: ";
    for(i=0; i<sizeTwo; i++)
    {
        cin>>arrTwo[i];
        arrMerge[k] = arrTwo[i];
        k++;
    }
    cout<<"\nThe New Array (Merged Array):\n";
    for(i=0; i<k; i++)
        cout<<arrMerge[i]<<" ";
    cout<<endl;

     for(int i=0; i<k; i++)
	{		
		for(int j=i+1; j<=k; j++)
		{
			if(arrMerge[i]>arrMerge[j])
			{
				temp=arrMerge[i];
				arrMerge[i]=arrMerge[j];
				arrMerge[j]=temp;
			}
		}
        
	}
	for(int i=0; i<k; i++){
        cout << arrMerge[i] <<" ";
    }
    cout << "Array 1: ";
     for(i=0; i<sizeOne; i++)
    {
        cout << arrMerge[i] << " ";
    }
    cout << endl;

    

    cout << "Array 2: ";
     for(i=0; i<sizeTwo;i++)
    {
        i=k;
        cout << arrMerge[i] << " ";
        k++;
    }
    cout << endl;
    return 0;
}