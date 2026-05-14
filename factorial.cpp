#include <iostream>

using namespace std;
int factorial(int n){
while(n>0){
 return n*(n-1);

}
}

int main()
{
    int a;
    cout <<"Enter the factorial number: "<< endl;
    cin>>a;

    cout <<"The factorial is : "<<factorial(a);
    return 0;
}
