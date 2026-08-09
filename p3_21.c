// 21. Anagram Game 
 
// • Allow a user to enter N words and store it in an array.  
// • Generate a random number between 0 to N-1.  
// • Based on the random number generated display the word stored at that index 
// of an array and allow user to enter its anagram.  
// • Check  whether  the  word  entered  by  the  user  is  an  anagram  of  displayed 
// number or not and display an appropriate message.  
// • Given a word A and word B. B is said to be an anagram of A if and only if the 
// characters present in B is same as characters present in A, irrespective of their 
// sequence. For ex: “LISTEN” == “SILENT” 

// Example:
// Think of it like drawing a random chit from a box:
// time(0) → Shuffles the chits differently every time.
// srand() → Starts the shuffle.
// rand() → Picks a random chit number.
// % n → Makes sure the chosen number is a valid array index (from 0 to n-1).


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    int n ;
    printf("Enter the number of words: ");
    scanf("%d", &n);

    char words[n][20], temp[20];

    printf("Enter %d words:\n", n);
    for(int i=0; i<n; i++) {
        scanf("%s", words[i]);
    }

    srand(time(0)); // Seed the random number generator
    int Index = rand() % n; // Generate a random index between 0 and n-1
    printf("\nRandom word: %s\n", words[Index]);

    char input[20];
    printf("Enter an anagram of the displayed word: ");
    scanf("%s", input);

    char a[20], b[20];

    strcpy(a, words[Index]);
    strcpy(b, input);

    
    // Sort the characters of the displayed word 
    int len = strlen(a);

    for(int i=0; i<len; i++) {
        for(int j=i+1; j<len-1;j++) {
            if(a[i] > a[j]) {
                char temp = a[i] ;
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Sort the characters of the user input
    len = strlen(b);

    for(int i=0; i<len; i++) {
        for(int j=i+1; j<len-1;j++) {
            if(b[i] > b[j]) {
                char temp = b[i] ;
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }

    if(strcmp(a,b)== 0) {
        printf("Correct! '%s' is an anagram of '%s'.\n", input, words[Index]);
    } else {
        printf("Incorrect! '%s' is not an anagram of '%s'.\n", input, words[Index]);
    }




}