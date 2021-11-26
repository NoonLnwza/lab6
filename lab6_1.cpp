#include<iostream>
using namespace std;

int main(){
    int even=-1;
    int odd=0;
    int i;
    while(i!=0){
        cout << "Enter an integer: ";
        cin >> i;
        if(i%2==0){
            even++;
        }else{
            odd++;
        }
    }
    cout << "#Even numbers = ";
    cout << even << "\n";
    cout << "#Odd numbers = ";
    cout << odd;






    return 0;
}
