
// FCI - programming 1 - 2018 - assignment 2.
// program name : Atbash cipher .cpp.
// last modification 28/2/2018.
// Author 1 and ID and group: Nouran Qassem Mohammed 20170322 12.
// Teaching assistant : khadeaga khaled and dina mahmoud.
// purpose : to cipher and decipher a message.


#include <iostream>

using namespace std;

int main()
{
    string message ;
    int x;
    cout << " WOULD YOU LIKE TO "<<endl<<"1- CIPHER THE MESSAGE " << endl << "2- DECIPHER THE MESSAGE " << endl << "3- end"<<endl ;
    cin>>x;
    cin.ignore();
    if(x==1||x==2)
    {
        cout << "Enter your message " ;
        getline( cin, message ) ;
        for ( int i=0 ; i <= message.length() ; i++)
        {
            if ( message[i] >= 65 && message[i] <= 90 )
            {
                message[i]+=(25-(2*(message[i]-65))) ;
            }
            if ( message[i] >= 97 && message[i] <= 122 )
            {
                message[i]+=(25-(2*(message[i]-97))) ;
            }


        }
        cout << message ;
        return 0;
    }
    else
    {
        cout << "you Ending the Program" ;
        return 0;
    }


}
