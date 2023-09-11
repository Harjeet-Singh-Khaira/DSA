#include<iostream>
#include<fstream>
using namespace std;

int main(){
//     ofstream onfile;
//     ifstream infile;

//     onfile.open("file2.txt");
//     string str;
//     int n = 0;
//     while(n<5){
//         cin >> str;
//         onfile << str << endl;
//         n++;
//     }
//     onfile.close();
//     infile.open("file2.txt");
//     while(getline(infile,str))
//     cout << str;
// }
    string s[5];
    for(int i = 0; i < 5; i++) cin >> s[i];
    ofstream onFile;
    onFile.open("Name.txt");
    for(auto e : s) onFile << e << endl;
    onFile.close();

    ifstream inFile;
    inFile.open("Name.txt");
    string str;
    while(inFile >> str) cout << str << endl;
}