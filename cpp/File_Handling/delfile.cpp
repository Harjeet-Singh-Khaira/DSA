#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int val = remove("Name.txt");
    if(val==0){
        cout<<"file deleted"<<endl;
    }
    else{
        cout<<"file not deleted"<<endl;
    }
}