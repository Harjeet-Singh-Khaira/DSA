#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //ofstream onFile;
    ifstream infile;
    string str;

    //onFile.open("file.txt");
    infile.open("file.txt");

    //to write
    //onFile << "Printed in file";
    // cout << "File updated successfully" << endl;
    //onFile.close();

    //to read
    //infile >> str;
    //cout << str << endl;

    // while(infile >> str){
    //     cout << str << endl;
    // }

    getline(infile,str);
    cout << str;

    infile.close();
}