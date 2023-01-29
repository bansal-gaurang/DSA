#include <iostream>
using namespace std;

bool valid(char ch)
{

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

    
    char tolowercase(char ch)
    {
        if((ch>='a' && ch<='z') ||  (ch>='0' && ch<='9'))
        {
            return ch;
        }
        else
        {
            char temp=ch-'A'+'a';
            return temp;
        }
    }    



int main()
{
    string s = "A man, a plan, a canal: Panama";
    string temp="";

    for (int i = 0; i < s.length(); i++)
    {
        if (valid(s[i]))
        {
            temp.push_back(s[i]);
        }
    }

    for(int i=0;i<temp.length();i++)
    {
        temp[i]=tolowercase(temp[i]);
    }
    cout<<temp;

}    