#include<iostream>
using namespace std;
int main(){
    const int size=7;
    int numbers[size];
    int count=0;
    cout<<"Enter seven integers:";
    for(int i=0;i<size;i++){
cin>>numbers[i];
}
for(int i=0;i<size;i++){
    if(numbers[i] % 5==0){
        count++;
    }
}
cout<<"Numbers of multiples of five:"<<count<<endl;
return 0;
}