#include <stdio.h>

int main(void) {
    int vogal = 0;
    char palavra[100000];
    scanf("%s", &palavra);

    for (int i = 0; i < 100000; i++) {
        if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u') {
            vogal += 1;
        }

        if(palavra[i] == '\0') {
            printf("%d", vogal);
            break;
        }
    }



    return 0;
}