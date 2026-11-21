#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string toLower(string text) {
    transform(text.begin(), text.end(), text.begin(), ::tolower);
    return text;
}

int main() {
    string userInput;

    cout << "=== Mini AI Assistant ===" << endl;
    cout << "Type 'exit' to quit.\n" << endl;

    while (true) {
        cout << "You: ";
        getline(cin, userInput);

        string input = toLower(userInput);

        if (input == "exit") {
            cout << "AI: Goodbye! Have a great day!" << endl;
            break;
        }
        else if (input.find("hello") != string::npos ||
                 input.find("hi") != string::npos) {
            cout << "AI: Hello! How can I help you today?" << endl;
        }
        else if (input.find("name") != string::npos) {
            cout << "AI: I am a simple C++ AI Assistant." << endl;
        }
        else if (input.find("time") != string::npos) {
            cout << "AI: I can't check real time yet, but you can add that feature!" << endl;
        }
        else if (input.find("help") != string::npos) {
            cout << "AI: I can answer simple questions and chat with you." << endl;
        }
        else {
            cout << "AI: I'm still learning. Can you ask something else?" << endl;
        }
    }

    return 0;
}
