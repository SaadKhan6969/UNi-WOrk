#include <iostream>
using namespace std;
int fabio(int y){
     if(y <= 1  ){
         return y;
     }
     else {
         return  fabio(y-1)+fabio(y-2);
     }
    
}
int main()
{
    int num1 , num2 ;
    cout << "enter 2nd num" ;
    cin >> num2 ;
    for (int i=0 ; i <= num2 ; i++){
    int res = fabio(i);
    cout <<res << "\n";

    }
    return 0;
}
// int fib(int n){
//     return (n==0 || n==1)?n:fib(n-1)+fib(n-2);
// }
// int main(){
// int num;
// cout<<fib(7);
// return 0;
// }