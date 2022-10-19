//findd the middle number

#include <iostream>
using namespace std;

int main(){
    int num1, num2, num3, res;
    cout << "Enter 3 number : ";
    cin >> num1 >> num2 >> num3;
    if ((num1 < num2 && num2 < num3) || (num3 < num2 && num2 < num1))
       res = num2;
    else if ((num2 < num1 && num1 < num3) || (num3 < num1 && num1 < num2))
       res = num1;
 
    else
       res = num3;
    
    cout <<"midddle number is : " << res;

}