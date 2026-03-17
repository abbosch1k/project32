#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> chat;
    string message;

    cout << "Type messages (type 'exit' to stop):\n";

    cin.ignore();

    while(true) {
        getline(cin, message);

        if(message == "exit")
            break;

        chat.push_back(message);
    }

    cout << "\nChat History:\n";

    for(string msg : chat)
        cout << msg << endl;
}
