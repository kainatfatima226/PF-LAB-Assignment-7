#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array:";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter the value to store in array:";
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
}
return 0;
}