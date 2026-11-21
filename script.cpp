#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Topic
{
    string name;
    string summary;
};

int main()
{
    vector<Topic> topics = {
        {
            "programming",
            "Programming is the process of writing instructions that tell a computer what to do. "
            "Programmers solve problems using code, algorithms, and logical thinking."
        },

        {
            "artificial intelligence",
            "Artificial Intelligence allows computers to perform tasks that normally require human intelligence. "
            "Examples include chatbots, recommendation systems, and image recognition."
        },

        {
            "human resource management",
            "Human Resource Management focuses on recruiting, training, developing, and retaining employees. "
            "HR helps organizations build an effective workforce."
        },

        {
            "cybersecurity",
            "Cybersecurity protects computer systems and data from threats such as hackers, malware, and phishing attacks."
        },

        {
            "object-oriented programming",
            "Object-Oriented Programming organizes code into objects and classes. "
            "The main principles are encapsulation, inheritance, polymorphism, and abstraction."
        }
    };

    string input;

    cout << "==============================" << endl;
    cout << "      Study Buddy AI" << endl;
    cout << "==============================" << endl;
    cout << "Type a topic to study." << endl;
    cout << "Type 'topics' to see available subjects." << endl;
    cout << "Type 'exit' to quit.\n" << endl;

    while (true)
    {
        cout << "Search Topic: ";
        getline(cin, input);

        if (input == "exit")
        {
            cout << "\nGood luck with your studies!" << endl;
            break;
        }

        if (input == "topics")
        {
            cout << "\nAvailable Topics:\n";

            for (size_t i = 0; i < topics.size(); i++)
            {
                cout << "- " << topics[i].name << endl;
            }

            cout << endl;
            continue;
        }

        bool found = false;

        for (size_t i = 0; i < topics.size(); i++)
        {
            if (input == topics[i].name)
            {
                cout << "\n========== SUMMARY ==========\n";
                cout << topics[i].summary << endl;
                cout << "=============================\n"
                    << endl;

                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << "\nSorry, I haven't learned that topic yet." << endl;
            cout << "Try 'topics' to see available subjects.\n"
                << endl;
        }
    }

    return 0;
}
