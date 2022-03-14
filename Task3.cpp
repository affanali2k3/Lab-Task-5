#include <iostream>
using namespace std;

class StringType
{
    private:
        string str1;
        string str2;
    public:
        void setValues(string str1, string str2)
        {
            this->str1 = str1;
            this->str2 = str2;
        }

        void printValues()
        {
            cout << "String 1: " << str1 << endl;
            cout << "String 2: " << str2 << endl;
        }

        string largerString(string s1, string s2)
        {
            int i = 0, j = 0;
            while(s1[i] != '\0')
            {
                i++;
            }
            while(s2[j] != '\0')
            {
                j++;
            }
            if(i>j)
                return s1;
            else if(i<j)
                return s2;
            else
                return "equal";
        }

        int maxLength()
        {
            int i = 0 ,lengthStr1 = 0, lengthStr2 = 0;
            while(str1[i] != '\0')
            {
                lengthStr1++;
                i++;
            }
            i=0;
            while(str2[i] != '\0')
            {
                lengthStr2++;
                i++;
            }
            if(lengthStr1 > lengthStr2)
                return lengthStr1;
            else
                return lengthStr2;
        }

        string compare(string s1, string s2)
        {
            if(largerString(s1,s2) == s1)
                return s1;
            else if(largerString(s1,s2) == s2)
                return s2;
            else
            {
                int i = 0;
                while(s1[i] != '\0')
                {
                    if(s1[i] > s2[i])
                        return s1;
                    else if(s2[i] > s1[i])
                        return s2;
                    i++;
                }
            }
            return s1;
        }

        void copy(string source, string destination)
        {
            int i = 0;
            while(destination[i] != '\0')
            {
                source[i] = destination[i];
                i++;
            }
            source[i] = '\0';

            cout << "String 1:: " << source << endl;
            cout << "String 2:: " << destination << endl;
        }

        string concatenate(string s1, string s2)
        {
            int i = 0;
            while(s1[i] != '\0')
            {
                i++;
            }
            s1[i] = 'a';
            int x = 0;
            while(s2[x] != '\0')
            {
                s1[i] = s2[x];
                x++;
                i++;
            }
            // s1[i] = '\0';
            return s1;
        }

        int searchWord(string str, string word)
        {
            if(largerString(str,word) == str)
            {
                int i = 0,x=0;
                while(str[i] != '\0')
                {
                    if(str[i] == word[x])
                    {
                        while(word[x] != '\0')
                        {
                            if(word[x] != str[i])
                                return false;
                            x++;
                            i++;
                        }
                    }

                    i++;
                }
            }

            return true;

        }

        bool searchChar(string str, char ch)
        {
            int i = 0;
            while(str[i] != '\0')
            {
                if(str[i] == ch)
                    return true;
                i++;
            }
            return false;
        }


};

int main()
{
    StringType s;
    // s.setValues("Affan", "Ali");
    // s.copy("Afffll", "Ali");
    cout << s.concatenate("Affan", "Ali");
    // cout << s.searchChar("Affan", 'n');
    // cout << s.maxLength();
    // cout << s.compare("ami", "ali");
    // s.printValues();
    return 0;
}

