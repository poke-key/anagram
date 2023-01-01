#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int main() {

    char word1[] = {"angered"};
    char word2[] = {"enraged"};

    int count[26];
    int wcount = 0;
    for(int i = 0; i < 26; i++) {
        count[i] = 0;
    }
    if(strlen(word1) != strlen(word2)) {
        cout << "The words are not anagrams.\n";
        exit(0);
    }

    // count each letter and update array
    for(int j = 0; j < strlen(word1); j++) {
        count[word1[j] - 'a']++ ;
        
    }
   /* for(int i = 0; i < 26; i++) {
        cout << count[i] << " ";
    }*/

    //cout << "\n";

    //second word
    for(int i = 0; i < strlen(word2); i++) {
        for(int j = 0; j < strlen(word2); j++) {
           if(word2[i] == word2[j]) {
            wcount++;
           } 
        }
       // cout << wcount << " " << word2[i] << "\n";
      
        if(count[word2[i] - 'a'] != wcount) {
            cout << "The words are not anagrams.\n";
            exit(0);
        }
        wcount = 0; 
    }
    cout << "The words " << word1 << " and " << word2 << " are anagrams of each other\n";
}
