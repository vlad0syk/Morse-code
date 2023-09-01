#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int main()
{
    cout << "Enter the text: ";
    string S1, S2;
    getline(cin, S1);
    for (int i = 0; i < S1.length(); i++)
    {
        switch (tolower(S1[i]))
        {
        case ' ':   S2 += "/"; break;
        case 'a':   S2 += ".-"; break;
        case 'b':   S2 += "-..."; break;
        case 'c':   S2 += "-.-."; break;
        case 'd':   S2 += "-.."; break;
        case 'e':   S2 += "."; break;
        case 'f':   S2 += "..-."; break;
        case 'g':   S2 += "--."; break;
        case 'h':   S2 += "...."; break;
        case 'i':   S2 += ".."; break;
        case 'j':   S2 += ".---"; break;
        case 'k':   S2 += "-.-"; break;
        case 'l':   S2 += ".-.."; break;
        case 'm':   S2 += "--"; break;
        case 'n':   S2 += "-."; break;
        case 'o':   S2 += "---"; break;
        case 'p':   S2 += ".--."; break;
        case 'q':   S2 += "--.-"; break;
        case 'r':   S2 += ".-."; break;
        case 's':   S2 += "..."; break;
        case 't':   S2 += "-"; break;
        case 'u':   S2 += "..-"; break;
        case 'v':   S2 += "...-"; break;
        case 'w':   S2 += ".--"; break;
        case 'x':   S2 += "-..-"; break;
        case 'y':   S2 += "-.--"; break;
        case 'z':   S2 += "--.."; break;
        }
    }
    for (int j = 0; j < S2.length(); j++)
    {
        if (S2[j] == '.')
        {
            Beep(1500, 200);
            cout << S2[j];
        }
        if (S2[j] == '-')
        {
            Beep(1500, 500);
            cout << S2[j];
        }
        if (S2[j] == '/')
        {
            Sleep(1000);
            cout << S2[j];
        }
    }
    cout << "\n";
    return 0;
}
