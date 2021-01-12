#include<bits/stdc++.h>
using namespace std;
int main(){
    srand(time(NULL));
    cout<<"Press Enter 3 times to reveal your future."<<endl;
    int i=0;
    while(i<3){
        cin.get();
        i++;
    }
    int n = rand()%9+1;
    string grade = (n==1? "A":n==2?"B+":n==3?"B":n==4?"C+":n==5?"C":n==6?"D+":n==7?"D":n==8?"F":"W");
    cout<<"You will get "<<grade<<" in this 261102.";
    return 0;
}