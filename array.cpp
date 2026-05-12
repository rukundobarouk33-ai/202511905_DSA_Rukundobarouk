#include <iostream>


using namespace std;
int main() {


    long keyNumber = 788447343;

    int phoneNumber[3];
    int i =0;

    do {
        cout <<"Enter your Key Number"<<endl;
        cin >> phoneNumber[i];

        i= i+1;
    }
    while(i<3);
    for(i = 0; i<3; i++){
        if(phoneNumber[i] == keyNumber){

        cout<<"Your keyword is correct"<<endl;
        
        break;
        }

    }

    return 0;
}
