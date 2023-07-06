#include<iostream>
using namespace std;
struct student{
int rno,marks;
float gpa;
};
void inp(student*);
void out(student*);
int main(){
    student s;
    inp(&s);
    out(&s);
    return 0;
}
void inp(student *p){
    cout<<"Enter Rollno";
    cin>>p->rno;

    cout<<"Enter Marks";
    cin>>p->marks;
    cout<<"Enter gpa";
    cin>>p->gpa;
}
void out(student *m){
    system("cls");
    cout<<"Rollno ENtered Is: "<<m->rno<<endl;
    cout<<"Marks Entered"<<m->marks;
    cout<<m->gpa;
}