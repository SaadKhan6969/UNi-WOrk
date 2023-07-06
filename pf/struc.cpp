#include <iostream>
using namespace std;
// struct student
// {
//     int rollnum;
//     int marks;
//     char grade;
//     float avg;
// };
// int main()
    // {
    // student s;
    // s.rollnum = 38;
    // s.marks = 87;
    // s.avg = 87.6;
    // s.grade = 'A' ;


    // cout<<"roll Number is = "<<s.rollnum<<endl;
    // cout<<"Marks Number is = "<<s.marks<<endl;
    // cout<<"Average Number is = "<<s.avg<<endl;
    // cout<<"grade is = "<<s.grade<<endl<<endl;

    // cout<<"if you want to change above info enter your data";
    // cout<<"\n Enter roll no = ";
    // cin>>s.rollnum;
    // cout<<"Enter Marks = ";
    // cin>>s.marks;
    // cout<<"Enter average = ";
    // cin>>s.avg;
    // cout<<"Enter Grade = ";
    // cin>>s.grade;

    // system ("cls");

    // cout<<"Your Entered Roll No = "<< s.rollnum <<endl;
    // cout<<"Your Entered Marks = "<<s.marks  <<endl;
    // cout<<"Your Entered Average = "<<s.avg  <<endl;
    // cout<<"Your Entered Grades = "<< s.grade <<endl;

    // return 0;
    // }
    struct stud{
      int rollno;
      int marks;
      int avg;
      char grade;

    };
    int main(){
     stud s;
     s.rollno=22;
     s.marks=70;
     s.avg=35;
     s.grade='B';

     cout<<"Your Rollno Is "<<s.rollno<<endl;
     cout<<"Your marks Is "<<s.marks<<endl;
     cout<<"Your avg Is "<<s.avg<<endl;
     cout<<"Your grade Is "<<s.grade<<endl;

     cout<<"If You Want to Change The Above Data Enter NEw Below: "<<endl;
     cout<<"Enter Rollno "<<endl;
     cin>>s.rollno;
     cout<<"Enter MArks "<<endl;
     cin>>s.marks;
     cout<<"Enter Avg "<<endl;
     cin>>s.avg;
     cout<<"Enter Grade "<<endl;
     cin>>s.grade;

     system("cls");
     cout<<"Rollno: "<<s.rollno<<endl;
     cout<<"MArks: "<<s.marks<<endl;
     cout<<"Avg:  "<<s.avg<<endl;
     cout<<"grade: "<<s.grade<<endl;
     return 0;
    }
