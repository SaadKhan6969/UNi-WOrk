
// void cal(int a,int b,char c);
// int main(){
// int p,q;
// char k;
// cout<<"Enter No 1 ";cin>>p;
// cout<<"Enter OPerator";cin>>k;
// cout<<"Enter NO 2";cin>>q;

// cal(p,q,k);
 

//  return 0;

// }
// void cal(int a,int b,char c){
//     if(c=='+'){
//         cout<<a+b;
//     }
//     else if (c=='-')
//     {
//            cout<<a-b;
//     }
//     else if (c=='x')
//     {
//            cout<<a*b;
//     }
//     else if (c=='/')
//     {
//            cout<<a/b;
//     }
//     else if (c=='%')
//     {
//            cout<<a%b;
//     }
    
// }
// #include <iostream>
// using namespace std;
// void markSheet(int phy1 ,int math1 ,int eng1 ,int urdu1 ,int isl1){   
//     float obtained, per;
//     obtained = (phy1 + math1 + eng1 + urdu1 + isl1) ;
//     per = (obtained / 500)*100 ; 
//     cout << "marks of physics = " << phy1 ;
//     cout << "marks of maths = " << math1 ;
//     cout << "marks of english = " << eng1 ;
//     cout << "marks of urdu = " << urdu1 ;
//     cout << "marks of islamiat = " << isl1 ;
//     cout << "Obtained Marks = " << obtained ;
//     cout << "Your Percentage is =  " << per << "\n";
//     if (per >= 90 && per <= 100){
//         cout << "Grade = A";
//     }
//     else if (per >= 80 && per < 90){
//         cout << "Grade = B";
//     }
//     else if (per >= 70 && per < 80){
//         cout << "Grade = C";
//     }
//     else if (per >= 60 && per < 70){
//         cout << "Grade = D";
//     }
//     else {
//         cout << "better luck next time you r fail" ;
//     }   
// }
// int main()
// {
//     int phy,eng,math,urdu,isl;
//     cout << "marks physics\n" ;
//     cout << "marks maths\n" ;
//     cout << "marks english\n" ;
//     cout << "marks urdu\n" ;
//     cout << "marks islamiat\n" ; 
//     cin >> phy>>math>>eng>>urdu>>isl;
//     markSheet(phy , math , eng , urdu ,isl);
//     return 0;
// }
#include<iostream>
using namespace std;
int cal(int num1, int num2, int num3);
int main(){
    int a,b,c;
    cout<<"Enter No 1";cin>>a;
    cout<<"Enter No 2";cin>>b;
    cout<<"Enter No 3";cin>>c;
    cal(a,b,c);
    return 0;
}
int cal(int num1, int num2, int num3){
if (num1 > num2){
    if (num1>num3){
        cout << "largest : " << num1 ;
    }
    else {
        cout << "largest : "<<  num3 ;
    }
}
else {
    if (num2 > num3){
        cout << "largest : " << num2 ;
    }
    else {
        cout << "largest : " << num3;
    }
}
if (num1 < num2){
    if (num1 < num3) {
        cout << "minimum is : " << num1 ;
    }
    else{
        cout << " minimus is : " << num3 ;
    }
}
else{
    if (num2 < num3){
        cout << "minimum is : " << num2 ;
    }
    else {
        cout << "minimum is : " << num3 ;
    }
}
}