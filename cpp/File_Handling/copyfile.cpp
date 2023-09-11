#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ifstream infile;
    ofstream onfile;

    char ch;

    infile.open("file.txt");
    onfile.open("newfile.txt");

    while(infile.get(ch)){
        onfile.put(ch);
    }

    infile.close();
    onfile.close();
}