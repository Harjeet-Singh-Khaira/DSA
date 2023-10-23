#include<iostream>
using namespace std;

/*
we only deal with synchronous

1-> Detect the problem (Hit the exception)
2-> Inform that an error has been detected (Throw the exception)
3-> Receive error information (Catch the exception)
4-> Take corrective actions (Handle the exception)

Exception handling mechnism basically builds upon three keyword
    -> try
    -> catch
    -> throw

1- TRY

this keyword is used to preface a block of statements which may generate exception.
    
    try{
        statement1;
        statement2;
    }
    catch(argument){
        handle/action to be taken
    }

2- THROW

when the exception is detected, it is thrown using 'throw' statement block in the block.

    throw(excep);

3- CATCH

this block catches the exceptions and handles it appropiately. The catch block that catches the exception must immediately follow the try block the throws the exception.

*/

int main(){
    //EXAMPLE 1

    // int a, b;
    // cout << "Enter values of a and b : ";
    // cin >> a >> b;

    // try{
    //     if(b!=0) cout << a/b;

    //     else throw b;
    // }

    // catch(int e){
    //     cout << "Division by zero : " << e << endl;
    // }

    // EXAMPLE 2

    int arr[5] = {1,2,3,4,5};

    try{
        int i = 0;
        while(1){
            if(i != 5){
                cout << arr[i] << endl;
                i++;
            }
            else{
                throw i;
            }
        }
    }

    catch(int e){
        cout << "Array index was out of bounds " << e << endl;
    }
}