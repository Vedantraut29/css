#include <iostream>
using namespace std;

int main()
{

    char message[100], ch;
    int i, key;
    cout << "enter message to encrypt: ";
    cin.getline(message, 100);
    cout << "Enter the key: ";
    cin >> key;

    for (i=0; message[i] != '\0'; ++i)
    {
        ch = message[i] ;

        if (ch> 'a' && ch < 'z')
        {
            ch = ch + key;
            
            if(i>'z'){
                ch=ch-'z'+'a'- key;
            }
            message[i]=ch;
        }
    }
    cout<<"the encrypted message is: "<<message<<endl;
}