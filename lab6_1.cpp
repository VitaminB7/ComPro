#include<iostream>
using namespace std;
int i=0,ans=0,odd=0,even=0;
int main(){
    while(i<1){
    cout << "Enter an integer: ";
    cin>>ans;
    if(ans==0){i++;}
    else if(ans%2==0){even++;}
    else{odd++;}
    }
    cout << "#Even numbers = "<<even<<endl;
    cout << "#Odd numbers = "<<odd;
    return 0;
}
