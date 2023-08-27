#include<iostream>

using namespace std;

 

int main() {

    int num;

    cin>>num;

    int even=0;

    int odd=0;

    int rem;

 

    while(num>0)

    {

        rem= num%10;

        num= num/10;

 

        if(rem%2==0)

        {

            even= even + rem;

        }

        else{

            odd= odd + rem;

        }

    }

    cout<<even<<" "<<odd;

    

    return 0;

}// https://youtu.be/EAR7De6Goz4
