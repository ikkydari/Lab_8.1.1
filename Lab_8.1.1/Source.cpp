#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
int Count(char* str) // !!!!!!!! 1.1
{
    if (strlen(str) < 3)
        return 0;
    bool isI = false;
    for (int i = 1; str[i + 1] != 0; i++)
        if (str[i - 1] == 'n' && str[i + 1] == 'o')
            isI = true;
    return isI;
}
char* Change(char* str)
{
    size_t len = strlen(str);
    if (len < 3)
        return str;
    char* tmp = new char[len * 4 / 3 + 1];
    char* t = tmp;
    tmp[0] = '\0';
    size_t i = 0;
    while (i < len && str[i + 2] != 0)
    {
        if (str[i] == 'n' && str[i + 2] == 'o')
        {
            strcat(t, "**");
            t += 2;
            i += 3;
        }
        else
        {
            *t++ = str[i++];
            *t = '\0';
        }
    }
    *t++ = str[i++];
    *t++ = str[i++];
    *t = '\0';
    strcpy(str, tmp);
    return tmp;
}
int main()
{
    char str[101];
    cout << "Enter string:" << endl; //enter divide into parts as example
    cin.getline(str, 100);
    Count(str) ? cout << "Such i exists" : cout << "Such i doesn't exist";
    char* dest = new char[151];
    dest = Change(str);
    cout << "\nModified string (param) : " << str << endl;
    cout << "Modified string (result): " << dest << endl;
    return 0;
}