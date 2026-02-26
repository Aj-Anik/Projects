#include<bits/stdc++.h>
using namespace std;
string generate_password(int length)
{
    string all_char = "thequickbrownfoxjumpsoverthelazydogTHEQUICKBROWNFOXJUMPSOVERTHELAZYDOG0987654321!@#$&%";
    int char_size = all_char.size();
    srand(time(0));
    string password = {};
    for(int i = 1; i <= length ; i++)
    {
        int x = rand() % char_size;
        password = password + all_char[x];
    }
    return password;
}
int main()
{
    cout << "Enter the size of your password : " ;
    int pass ;
    cin >> pass ;
    string password = generate_password(pass);
    cout << "Generated Password : " << password << endl;
}