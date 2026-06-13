#include <iostream>
using namespace std;

int main(){
    int num;
    int sum=0;
    int count=0;
    cout<<"Enter positive integer(-1 to stop)"<<endl;
    cin>>num;
    while(num!=-1){
        if(num>0){
            sum+=num;
            count++;
        }
        cin>>num;
    }
    if(count>0){
        cout<<"Average: "<<(double)sum/count<<endl;
    }else{
        cout<<"No positive integers entered."<<endl;
    }
    return 0;
}