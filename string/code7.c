#include <stdio.h>

char* mys_trchr(const char* str, char ch) {
    while (*str != '\0') {
        if (*str == ch) {
            return (char*)str;
        }
        str++;
    }
    return NULL;
}    