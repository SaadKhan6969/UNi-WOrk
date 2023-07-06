#include<iostream>
using namespace std;
int main(){
    int a,b;
    int *ptr1;
    int *ptr2;
    cout<<"Enter Val 1";
    cin>>a;
    cout<<"ENter Val 2";
    cin>>b;
    ptr1=&a;
    ptr2=&b;
    cout<<"Val of no 1 is "<<a<<" And its address is "<<ptr1;    
    cout<<"Val of no 2 is "<<b<<" And its address is "<<ptr2;   

int a,b,s,*ptr1,*ptr2;
ptr1=&a;
ptr2=&b;
cout<<"ENter No 1";
cin>>a;
cout<<"Enter No2";
cin>>b;
s=*ptr1+*ptr2;
cout<<"Avg of "<<*ptr1<<"And "<<*ptr2<<"IS = "<<s<<endl;

int marks;
float avg;
char grade;
void *ptr;
cout<<"Enter MArks ";cin>>marks;
cout<<"Enter Avg ";cin>>avg;
cout<<"Enter Grade";cin>>grade;
system("cls");
ptr=&marks;
cout<<"marks "<<marks<<" Its Address Is "<<ptr<<endl;
ptr=&avg;
cout<<"Avg "<<avg<<" Its Address "<<ptr<<endl;
ptr=&grade;
cout<<"Grade"<<grade<<" Its Address "<<ptr<<endl;
   return 0;
}