#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

int main(){
    int seconds;
    cin >> seconds;

    for(int i=seconds;i>0;i--){
        cout << i << endl;
        this_thread::sleep_for(chrono::seconds(1));
    }

    cout << "Time up!";
}
