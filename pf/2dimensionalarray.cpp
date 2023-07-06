// #include<iostream>
// using namespace std;

// int main(){
//     // initialize 2D array with values
//     int arr[2][4]={
//         {2,4,100,99},
//         {1,5,4,3}
//     };
    
// // set the initial min and max values to the first element of the array
//     int min,max;
//     max=min=arr[0][0];
//     // iterate through the array to find the min and max values
//     for(int i=0;i<2;i++){
//         for(int j=0;j<4;j++){
//             // if the current element is greater than the current max, update max
//             if(arr[i][j]>max){
//                 max=arr[i][j]  ;         }
//                   // if the current element is less than the current min, update min
//                 if(arr[i][j]<min){
//                     min=arr[i][j];
//                 }
//         }
//     }
    
// // print the min and max values
//         cout<<"Max Val is "<<max<<endl<<"min val is"<<min;
//         return 0;

// }



// #include<iostream>
// using namespace std;
// struct Book{
//     char author[30];
//     int pages;
//     int price;

// };
// int main(){
//     Book b,*ptr;
//      ptr=&b;
//      cout<<"ENter Author name";cin.get(ptr->author,30);
//      cout<<"ENter pg ";cin>>ptr->pages;
//      cout<<"ENter pri ";cin>>ptr->price;
//      system("cls");
//      cout<<"Author name is "<<ptr->author<<endl;
//      cout<<"Author name is "<<ptr->pages<<endl;
//      cout<<"Author name is "<<ptr->price<<endl;
// return 0;
// }
// int long fact(int n){
    // if(n==0){
    //     return 1;
    // }
    // else{
    //     return n * fact(n-1);
    // }

// }
// int main(){
//     int num;
//     cout<<"Enter No";
//     cin>>num;
//     cout<< "Factorial  "<<num<<"is"<<fact(num)<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// struct student{
//     int rno,mrk;
//     char grd;
// };
// void inpput(student*);
// void output (student*);

// int main(){
//     student s;
//     inpput (&s);
//     output (&s);
//     return 0;
// }
// void inpput(student *p){
//     cout<<"ENter RNo";
//     cin>>p->rno;
//     cout<<"ENter mrk";
//     cin>>p->mrk;
//     cout<<"ENter grd";
//     cin>>p->grd;
// }
// void output(student *m){
//     system("cls");
//     cout<<m->rno<<endl;
//     cout<<m->mrk<<endl;
//     cout<<m->grd<<endl;
// }
#include<iostream>
#include<string.h>
using namespace std;
int main() {
	// char str1[50], str2[50], str3[50], str4[50];
	// cout<<"string number 11 = ";
	// cin.getline(str1,50);
	// cout<<"string number 2 = ";
	// gets(str2);
	// cout<<"string number 3 = ";
	// gets(str3);
	
	// strcpy(str4,str1);
	// if(strlen(str2)>strlen(str4))
	// strcpy(str4,str2);
	// if(strlen(str3)>strlen(str4))
	// strcpy(str4,str3);
	// system("cls");
	// cout<<endl;
	// cout<<"The largest string is = "<<str4<<endl<<endl;
	// return 0;
    char str1[50],str2[50],str3[50],str4[50];
    cout<<"Enter String 1";
   cin.getline(str1,50); 
    cout<<"Enter String 2";
   gets(str2);
    cout<<"Enter String 3";
   gets(str3);
   strcpy(str4,str1);
   if(strlen(str2)>strlen(str4))
   strcpy(str4,str2);
   if(strlen(str3)>strlen(str4))
   strcpy(str4,str3);
   system("cls");
   cout<<"LArgest IS "<<str4;
   return 0;
    

}