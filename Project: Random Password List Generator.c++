#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    string chars="abcdefghijklmnopqrstuvwxyz123456789";

    srand(time(0));

    for(int i=0;i<5;i++){
        for(int j=0;j<8;j++)
            cout << chars[rand()%chars.size()];
        cout << endl;
    }
}
