#include <iostream>

using namespace std;
void allWords ( string word, string alphabet, int k){
    if( k < 1 ){
       cout << word << endl;
       return;
    }
    for ( int i = 0; i < alphabet.size(); i++)
    allWords( word + alphabet [i], alphabet, k - 1);
}


int main()
{
    string letters = "ABC";
    int wordLength = 5;
    allWords( "", letters, wordLength);
    cin.get();
    return 0;
}
