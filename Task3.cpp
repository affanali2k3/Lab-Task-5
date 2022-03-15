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
            cout << source<<endl;
        }

        string concatenate(string s1, string s2)
        {
            string s3;
            int i = 0;
            while(s1[i] != '\0')
            {
                s3 += s1[i];
                i++;
            }
            i = 0;
            while(s2[i] != '\0')
            {
                s3+=s2[i];
                i++;
            }
            return s3;
        }

        int searchWord(string str, string word)
        {
            if(largerString(str,word) == str)
            {
                int i = 0,x=0,match=0,length=0;
                while(word[length] != '\0')
                {
                    length++;
                }
                while(str[i] != '\0')
                {
                    if(str[i] == word[x])
                    {
                        while(word[x] != '\0')
                        {
                            if(word[x] == str[i])
                            {
                                match++;
                            }
                            x++;
                            i++;
                        }
                        x=0;
                    }


                    i++;
                }
                    if(match >= length)
                        return true;
                    else
                        return false;

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
    s.setValues("first string", "second string");
    s.printValues();
    cout << "\nMax Length is " << s.maxLength() <<endl<<endl;
    cout << "The bigger string is " << s.compare("str1","check")<<endl<<endl;
    s.copy("This", "copy");
    cout<<endl;
    if(s.searchWord("This is a new string", "new") == true)
        cout << "Word is available in string\n";
    else
        cout << "Word is not available in string\n";
    cout<<endl;
    cout << s.concatenate("new ", "string") <<endl<<endl;
    if(s.searchChar("string", 'i') == true)
        cout << "Character is availabe in string\n";
    else
        cout << "Character is not available in string\n";
    return 0;
}
