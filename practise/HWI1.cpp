#include <iostream>
using namespace std;

bool checkRotation(string str1, string str2)
{
    if (str1.length() != str2.length())
        return false;

    string temp = str1 + str1;

    if (temp.find(str2) != string::npos)
        return true;
    else
        return false;
}
int main()
{
    string str1 = "AsmitaGolu";
    string str2 = "GoluAsmita";

    if (checkRotation(str1, str2))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
