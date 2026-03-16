#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));

    int lucky = rand()%100+1;
    int guess;

    cin >> guess;

    if(guess == lucky)
        cout << "You win!";
    else
        cout << "Lucky number was " << lucky;
}
