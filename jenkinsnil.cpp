#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {
        "Quick", 
        "C++", 
        "Run", 
        "from", 
        "OlukayodeDevs", 
        "",
        "LinkedIn: https://www.linkedin.com/in/arindeolukayode/",
        "Email: arindeolukayode@gmail.com"
    };

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}

