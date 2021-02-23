#include "revert_string.h"
#include <string.h>
void RevertString(char *str)
{
    char tmp;
    int i = 0;
    int size = strlen(str);
    size--;
    while (i <= size) {
        tmp = str[i];
        str[i] = str[size];
        str[size] = tmp;
        size--;
        i++;
    }
}