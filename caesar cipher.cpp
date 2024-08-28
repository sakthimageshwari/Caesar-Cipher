#include <iostream>
#include<string>
using namespace std;

string CaesarCipher(string str,int num)
{
    string result=" ";
    num=num%26;  //for long string 
    for(int i=0;i<str.length();i++)
    {
        char ch=str[i];
        if(isupper(ch))  //to check capital letters
        {
            ch=(ch-'A'+num)%26+'A';  
            
        }
        else if(islower(ch)) //to check small letters 
        {
          ch=(ch-'a'+num)%26+'a';    
          
        }
        result+=ch;
    }
    return result;
}
int main()
{  
    string str;
    int shift;
    cout<<"string:";
    getline(cin,str);
    cout<<"enter shift:";
    cin>>shift;
    cout<<CaesarCipher(str,shift)<<endl;
    return 0;
}