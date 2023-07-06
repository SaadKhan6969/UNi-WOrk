#include <iostream>
using namespace std;

int main(){
    int month;
    cout<<" Enter Num Of Month of sem ";
    cin>>month;
   
   int monsem;
   monsem=4;
   int all=0;
   
    int days[]={30,30,30,30};
    int total=0;

    for(int i=0;i<month;i++){
        int numberofdays;
        cout<<"Enter num of days of a month "<<i + 1<<" : ";
        cin>>numberofdays;
        total +=numberofdays;

    };
    for(int j=0;j<monsem ;j++){
    all += days[j];
   
    }
    cout<<"You Have Spentt " <<total<<" days in this sem "<<" outof "<<all <<endl;
    return 0;
}