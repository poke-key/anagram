#include <iostream>
#include <stdio.h>
#include<algorithm>
using namespace std;

int main() {

    string word1 = "icemun";
    string word2 = "cinema";

    if(word1.length() != word2.length()) {
        cout << "The two words are not anograms of each other\n";
        exit(0);
    }
    sort(word1.begin(), word1.end());
    sort(word2.begin(), word2.end());

    if(word1 == word2) {
        cout << "the two words are anograms of each other\n";
    }
    else {
        cout << "The two words are not anograms of each other\n";
    }
    
}