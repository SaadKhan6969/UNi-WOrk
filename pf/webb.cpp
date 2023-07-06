#include<iostream>
using namespace std;
#include<string.h>
int main(){
    int user;
     
    
    cout<<"1). Home "<<endl;
    cout<<"2). About "<<endl;
    cout<<"3). Admission Form "<<endl;
    cout<<"4). Criteria Eligibility "<<endl;
    cout<<"5).  Departments "<<endl;
    cout<<"6).  Grading "<<endl;
    cout<<"7).  Facilities "<<endl;

    cout<<"Enter The Facility You want to use By S.No";
    cin>>user;
  if(user == 1){
    cout<<"=============/+++SMIU HOME+++/==================/"<<endl;
    cout<<"Welcome TO home"<<endl;
    cout<<"LAtest Events Are Conducter"<<endl;
    cout<<"Schedule BAsed Studies"<<endl;

  }
  else if(user == 2){
    cout<<"=============/+++About SMIU+++/==================/"<<endl;
    cout<<"Sindh Madressatul Islam University is a chartered University, duly recognized by the Higher Education Commission (HEC) of Pakistan. It is one of the oldest institutions in South Asia. The Founder of Pakistan, Quaid-e-Azam Mohammad Ali Jinnah, studied at this institution for about four and a half years from 1887-92The SMI University has started with five departments, each offering graduate and undergraduate program. The departments are Media and Communication Studies, Computer Sciences, Business Administration, Environmental Sciences and Education.The SMI University has started with five departments, each offering graduate and undergraduate program. The departments are Media and Communication Studies, Computer Sciences, Business Administration, Environmental Sciences and Education."<<endl;
    cout<<"The University is privileged to have highly qualified and devoted faculty with PhD, M.Phil and Masters from the best national and international universities. In fact it has the largest number of PhD faculty members amongst the newly established universities in Pakistan."<<endl;
  }
  else if(user ==3){
   
    cout<<"Here's Your Admission form "<<endl;
    cout<<"Enter Your Name Here"<<endl;

    cout<<"Choose Field"<<endl;
  
    cout<<"Enter MArks"<<endl;

  }
  else if(user == 4){
    cout<<"=============/////++Criteria Eligibility++/////================"<<endl;
    cout<<"Critera Must Be More Than 60 % To Appear In Test OF BSSE"<<endl;
    cout<<"Critera Must Be More Than 50 % To Appear In Test OF BSCS"<<endl;
    cout<<"Critera Must Be More Than 50 % To Appear In Test OF BBA"<<endl;
  }
  else if(user ==5){
    cout<<"========////++Departments++////=========="<<endl;
    cout<<"Software Enginering"<<endl;
    cout<<"Electrical Enginering"<<endl;
    cout<<"MEchanical Enginering"<<endl;
    cout<<"Computer Science"<<endl;
    cout<<"IT"<<endl;
    cout<<"BBA"<<endl;
    cout<<"Media Sciences"<<endl;
    
  }
  else if(user ==6){
    cout<<"==========//+++++Here's Smiu Grading System++++//========= "<<endl;
    cout<<"90% => 3.7+ GPA"<<endl;
    cout<<"80% => 3.2+ GPA"<<endl;
    cout<<"70% => 2.8 - 3.0+ GPA"<<endl;
    cout<<"60% => 2.0 - 2.5+ GPA"<<endl;
    cout<<"50% => 1.66 - 1.99 GPA"<<endl;
  }
  else if(user == 7){
   cout<<"The SMI University Provides U A Whole Bunch Of Facilities "<<endl;
   cout<<"Academic Buildings/Departs"<<endl;
   cout<<"Library"<<endl;
   cout<<"Labs"<<endl;
   cout<<"Research Labs"<<endl;
   cout<<"Music Studio"<<endl;
   cout<<"Indoor Sports(Gym)"<<endl;
   cout<<"Air Conditioned Rooms"<<endl;
  }
  return 0;
}