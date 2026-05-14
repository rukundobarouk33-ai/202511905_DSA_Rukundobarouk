#include <iostream>

using namespace std;

int main()
{
    int matrix[3][2]={{12,11},{10,9},{8,7}};
    cout<<"Matrix of 3x2 with predefined numbers"<<endl;
    for(int i=0;i<=2;i++){
        for (int j=0;j<=1;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
