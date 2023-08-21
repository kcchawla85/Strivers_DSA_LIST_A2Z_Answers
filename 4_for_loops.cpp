#include<bits/stdc++.h>
using namespace std;
int fib(int n){
        if(n==0){
                return 0;
                
        }
        else if(n==1){
                return 1;
        }
        else{
                return fib(n-2)+fib(n-1);
                
        }
}
int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
        int n;
        cin>>n;
        cout<< fib(n);
        return 0;
} // link : https://youtu.be/EAR7De6Goz4
