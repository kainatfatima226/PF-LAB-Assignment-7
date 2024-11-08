#include<iostream>
using namespace std;
int main(){
    const int students=10;
    int hoursstudied[students];
    cout<<"Enter a hoursstudied by each student:";
    for(int i=0;i<students;i++){
        cout<<"student"<<(i+1)<<" : "<<hoursstudied[students]<<"hours/n";
    }
int maxhours=hoursstudied[students];
int maxstudent=1;
for(int i=0;i<students;i++){
    if(hoursstudied[i]<maxhours){
      maxhours=hoursstudied[i];
        maxstudent=i+1;
    }
}
cout<<"/nstudent who studied the most:";
cout<<"student"<<maxstudent<<"with" <<maxhours <<"hours/n";
return 0;
}