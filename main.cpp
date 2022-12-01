#include <iostream>
#include"lib.h"
using namespace std;

int main() {
    int a=0;
    cin>>a;
    if(Nprimo(a)==0){
        cout << "numero non primo"<< endl;
    } else {
        cout << "numero primo" << endl;
    }

    return 0;
}
