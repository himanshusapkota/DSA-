//find the character is lowecase or uppercase
#include <iostream>
using namespace std;

int main() {
    char ch;
    cout<<"Enter the value of a : ";
    cin>>ch;

if ( ch>='a' && ch<='z'){
    cout<<"Lowercase";

}
else if (ch>='A' && ch<='Z' )
{
     cout<<"Uppercase";
}
else {
     cout<<"Invalid";
}

}
