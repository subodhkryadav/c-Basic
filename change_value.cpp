//here the change the value of an array
#include<iostream>
using namespace std;
int main(){
    int mark[4]={40,50,70,20};
     mark[2]=99;              // change the mark of the rd element of an array          
    cout<<"here the mark of the arry:"<<endl;
    cout<<mark[0]<<endl;
    cout<<mark[1]<<endl;         
    cout<<mark[2]<<endl;
    cout<<mark[3]<<endl;
}