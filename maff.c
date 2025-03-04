#include <unistd.h>

int main(void) {
    char letter = 'a';
    char newline = '\n';
    
    while (letter <= 'z') {
        if ((letter - 'a') % 2 == 0) {
            // Even index, lowercase
            write(1, &letter, 1);
        } else {
            // Odd index, uppercase
            char upper = letter - ('a' - 'A');
            write(1, &upper, 1);
        }
        letter++;
    }
    
    // Print newline
    write(1, &newline, 1);

    return 0;
}
