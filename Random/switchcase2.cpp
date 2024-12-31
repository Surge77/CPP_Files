#include <iostream>
using namespace std;

int main()
{
    char vowel;
    cout<<"Enter a alphabet: ";
    cin>>vowel;

    switch(vowel)
    {
        case 'a':
        cout<<"It is a vowel"<<endl;
        break;

         case 'e':
        cout<<"It is a vowel"<<endl;
        break;

         case 'i':
        cout<<"It is a vowel"<<endl;
        break;

         case 'o':
        cout<<"It is a vowel"<<endl;
        break;

         case 'u':
        cout<<"It is a vowel"<<endl;
        break;

        default:
        cout<<"consonants"<<endl;
        break;
    }

    

    

    return 0;
}