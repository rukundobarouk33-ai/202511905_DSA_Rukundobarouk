#include <iostream>


using namespace std;
int main() {

int marking[4]={40,12,30,16};
int sort;
    
for(int x=0;x<=3;x++){
    for(int y=x+1;y<=3;y++){
if(marking[x]>marking[y]){
    sort=marking[x];
    marking[x]=marking[y];
    marking[y]=sort;

}
    }
}
    cout<<"the array after sorting"<<endl;
    for(int x=0;x<=3;x++){
        cout<<marking[x]<<" ";
    }
    cout<<endl;
return 0;
}
