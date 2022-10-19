#include <iostream>
using namespace std;
 

int palindrome(string S)
{
    for (int i = 0; i < S.length() / 2; i++) {
 
        if (S[i] != S[S.length() - i - 1]) {
            return 0;
        }
    }
    return 1;
}
 

int main()
{
    string str;
    cin >>str;

    int x= palindrome(str);
    if(x==0){
        cout << "not a palidrome";
    }else
        cout << "palidrome";
 
    return 0;
}