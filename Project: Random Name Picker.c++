#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    vector<string> names = {"Alex","John","Mike","Sara","Emma"};

    srand(time(0));

    cout << names[rand()%names.size()];
}
