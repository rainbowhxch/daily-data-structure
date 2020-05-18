#include <iostream>

using namespace std;

int BF(string s, string t, int pos);
int KMP(string s, string t, int pos);
int main()
{
    string s1 = "abadabac";
    string s2 = "abac";
    cout << BF(s1, s2, 0) << endl;
    cout << KMP(s1, s2, 0) << endl;
    return 0;
}

int BF(string s, string t, int pos)
{
    int j = 0;
    while (pos < s.length() && j < t.length())
    {
        if (s[pos] == t[j]) {pos++;j++;}
        else {pos -= j - 1;j = 0;}
    }
    if (j >= t.length()) return pos-t.length();
    else return -1;
}

int KMP(string s, string t, int pos)
{
    int nextval[t.length()];
    int i = 0, j = -1;
    nextval[0] = -1;
    while (i < t.length() - 1)
    {
        if (j == -1 || t[i] == t[j])
            {
                ++i;++j;
                if(t[i] != t[j])
                    nextval[i] = j;
                else
                    nextval[i] = nextval[j];
        }
        else j = nextval[j];
    }
    j = 0;
    while (pos < s.length() && j < t.length())
    {
        if (j == -1 || s[pos] == t[j]) {pos++;j++;}
        else {j = nextval[j];}
    }
    if (j >= t.length()) return pos-t.length();
    else return -1;
}
