#include <stdio.h>

char *leet(char *str) {
    char leet_map[] = "43071";
    char normal_map[] = "aeotlAEOTL";
    
    for (int i = 0; str[i] != '\0'; i++) {
        for (int j = 0; normal_map[j] != '\0'; j++) {
            if (str[i] == normal_map[j]) {
                str[i] = leet_map[j];
                break; // Exit the inner loop once a match is found
            }
        }
    }
    
    return str;
}

int main() 
{
    char input[] =
    printf("Original: %s\n", input);
    printf("Encoded: %s\n", leet(input));
    return 0;
}

