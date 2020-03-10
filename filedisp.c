#include <stdio.h>
#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int main(void)
{
    char input[100];
    char option[100];
    int count = 0;
    size_t found = 0;
    cout << "Type something: ";
    cin.get(input,100);
    string str(input);
    cout << "Choose an option: -d, -f, -b" << "\n";
    cin >> option;
    if(strcmp(option,"-d") == 0)
    {
        found = str.find("directories");
        if(found != string::npos)
            cout << "'directories' found at " << found << "\n";
        else
            cout << "Word not found." << "\n";
    }
    if(strcmp(option,"-f") == 0)
    {
        found = str.find("files");
        if(found != string::npos)
            cout << "'files' found at " << found << "\n";
        else
            cout << "Word not found." << "\n";
    }
    if(strcmp(option,"-b") == 0)
    {
        found = str.find("bytes");
        if(found != string::npos)
            cout << "'bytes' found at " << found << "\n";
        else
            cout << "Word not found." << "\n";
    }
    return 0;
}
