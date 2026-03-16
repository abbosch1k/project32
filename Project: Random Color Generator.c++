#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    string colors[]={"Red","Blue","Green","Yellow","Black"};

    srand(time(0));

    cout << colors[rand()%5];
}
