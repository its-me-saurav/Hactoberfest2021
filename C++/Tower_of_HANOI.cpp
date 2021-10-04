//Author: Saurav Kumar

#include<iostream>
using namespace std;

void TowerOfHanoi(int n, char src, char destination, char helper){

    if(n == 0){
        return;
    }

    TowerOfHanoi(n-1, src, helper, destination);
    cout<<"Moved from "<<src<<" to "<<destination<<endl;
    TowerOfHanoi(n-1, helper, destination, src);
}
int main(){

    TowerOfHanoi(3, 'A', 'C', 'B');
}
