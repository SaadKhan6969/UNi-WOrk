#include<iostream>
using namespace std;
struct stdu{
  int rno,mark;
  char grd;

};
void input(stdu *);
void output(stdu *);
int main(){
  stdu s;
  input (&s);
  output(&s);
  
  //   char name[]={'S','A','A','D'};
  // cout<<name;
 
//  char hi[25];
//  cout<<"ENter NAMe:\t";
//  cin.getline(hi,50);
//  cout<<hi;



  return 0;
}
void input(stdu *p){
  cout<<"Rol";
  cin>>p->rno;
cout<<"Mrk";cin>>p->mark;
cout<<"grd";cin>>p->grd;
}
void output(stdu *m){
  cout<<m->rno;
  cout<<m->mark;
  cout<<m->grd;
}