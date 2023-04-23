#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_STRING_LENGTH 100

void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}

void prompt_for_string(char* buffer, int buffer_size) {
    printf("Enter a string (up to %d characters): ", buffer_size - 1);
    fgets(buffer, buffer_size, stdin);
    buffer[strcspn(buffer, "\n")] = '\0'; // Remove newline character if present
}

void print_menu() {
    printf("\nString Handling Functions\n");
    printf("1. strcat\n");
    printf("2. strcpy\n");
    printf("3. strlen\n");
    printf("4. strcmp\n");
    printf("5. strchr\n");
    printf("6. strrev\n");
    printf("7. strlwr\n");
    printf("8. strupr\n");
    printf("9. Quit\n");
    printf("Choose a function (1-9): ");
}

int main() {
    char string1[MAX_STRING_LENGTH], string2[MAX_STRING_LENGTH];
    int choice;

    while (1) {
        print_menu();
        scanf("%d", &choice);
        clear_input_buffer();

        switch (choice) {
            case 1:
                prompt_for_string(string1, MAX_STRING_LENGTH);
                prompt_for_string(string2, MAX_STRING_LENGTH);
                strcat(string1, string2);
                printf("Result: %s\n", string1);
                break;
            case 2:
                prompt_for_string(string1, MAX_STRING_LENGTH);
                strcpy(string2, string1);
                printf("Result: %s\n", string2);
                break;
            case 3:
                prompt_for_string(string1, MAX_STRING_LENGTH);
                printf("Length: %ld\n", strlen(string1));
                break;
            case 4:
                prompt_for_string(string1, MAX_STRING_LENGTH);
                prompt_for_string(string2, MAX_STRING_LENGTH);
                if (strcmp(string1, string2) == 0) {
                    printf("Strings are equal\n");
                } else {
                    printf("Strings are not equal\n");
                }
                break;
            case 5:
                prompt_for_string(string1, MAX_STRING_LENGTH);
                printf("Enter a character to search for: ");
                int search_char = getchar();
                char* result = strchr(string1, search_char);
                if (result == NULL) {
                    printf("Character not found\n");
                } else {
                    printf("Character found at index %ld\n", result - string1);
                }
                clear_input_buffer();
                break;
            case 6:
                prompt_for_string(string1, MAX_STRING_LENGTH);
                strrev(string1);
                printf("Result: %s\n", string1);
                break;
            case 7:
                prompt_for_string(string1, MAX_STRING_LENGTH);
                strlwr(string1);
                printf("Result: %s\n", string1);
                break;
            case 8:
                prompt_for_string(string1, MAX_STRING_LENGTH);
                strupr(string1);
                printf("Result: %s\n", string1);
                break;
            case 9:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }
}
