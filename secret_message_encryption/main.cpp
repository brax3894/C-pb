#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {"!QAZ@WSX#EDC$R%TGB^YHN&UJM*->?hbvlw9r3of91mgn468{}zxcf"};

    string secret_message{};
    cout<<"Enter your secret message: ";
    getline(cin, secret_message);

    string encrypted_message {};

    cout<<"\n Encrypting message..."<<endl;

    for(char c: secret_message){
        size_t position = alphabet.find(c);
        if(position!= string::npos){
            char new_char{key.at(position)};
            encrypted_message += new_char;

        } else{
            encrypted_message +=c;
        }
    }

    cout<< "Encrypted message: " << encrypted_message <<endl;

    string decrypted_message{};

    cout<<"Decrypting message..."<<endl;

    for(char c: encrypted_message){
        size_t position = key.find(c);
        if(position!=string::npos){
            char new_char{alphabet.at(position)};
            decrypted_message+=new_char;
        }else{
            decrypted_message +=c;
        }
    }

    cout<<"Decrypted message: " <<decrypted_message<<endl;

    cout<<endl; 

    return 0;
}