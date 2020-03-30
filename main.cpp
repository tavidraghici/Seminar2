#pragma once
#include <string.h>
#include <iostream>
#include <assert.h>

using namespace std;

char* strfind(const char* s, const char* f)
{
    int i = 0;
    while (i < strlen(f))
    {
        int j = 0;
        int aux = i;
        while (f[i] == s[j] && j < strlen(s))
        {
            j++;
            i++;
        }
        if (j == strlen(s))
        {
            return const_cast<char*>(&f[aux]);
        }
        i++;
    }
    return NULL;
}

//minim
struct alfa
{
    bool ok;
    int a;
    char* s = new char[100];
    long b;
    double c;
    long double d;
}y;

//maxim
struct beta
{
    bool ok = true;
    int a = 100;
    char s[100];
    long b;
    double c = 4.20;
    long double d;
}x;

void ex2()
{
    alfa elem;
    beta elem2;
    cout << "alfa: " << sizeof(y);
    cout << "\nbeta: " << sizeof(x);
}

int fake_strlen(char* s)
{
    int i = 0;
    while (s[i] != '\0')
        i++;
    return i;
}

char *fake_strcpy(char* s, char *p)
{
    int i = 0;
    do
    {
        p[i++] = s[i];
    } while (s[i] != '\0');

    return p;
}


int main()
{
    const char *f = "abcabbbacd", *s = "abbb";
    //assert(strfind(s, f) == "abbbacd");
    ex2();
    assert(fake_strlen("abcdea") == 6);
    cout<<"\nOK";

}
