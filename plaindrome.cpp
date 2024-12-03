#include<iostream>
using namespace std;

void check_palindrome() {
    string word;
    cout << "enter the word to check for palindrome: ";
    cin >> word;
    
    //check if word's first char is same as last and repeat the process until the middle of the string

    for (int i=0; i<word.length()/2; i++)   {
        if (word[i] != word[word.length() -i - 1]) {
            cout << word << " -> is not a palindrome" << endl;
        }
        else cout << word << " -> is a palindrome" << endl;
    }
}
int main()
{
    check_palindrome();
    return 0;
}