#include<iostream>
#include<string>
using namespace std;

int main()
{
    string alphabets = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 ";
    string key = "ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba9876543210 ";
    string message, encrypted_message, decrypted_message;

    int e_index = 0, d_index = 0;

    cout<<"Walmart Encryption Service"<<endl;
    cout<<"=========================="<<endl<<endl;

    cout<<"Enter the message: ";
    getline(cin, message);

    encrypted_message = message;
    for (size_t i = 0; i < message.length(); i++)
    {
        e_index = alphabets.find(message[i]);
        encrypted_message[i] = key[e_index];
    }
    cout<<"Encrypted message: "<<encrypted_message<<endl;

    decrypted_message = encrypted_message;
    for (size_t i = 0; i < encrypted_message.length(); i++)
    {
        d_index = key.find(encrypted_message[i]);
        decrypted_message[i] = alphabets[d_index];
    }
    cout<<"Decrypted message: "<<decrypted_message<<endl;

    return 0;
}
