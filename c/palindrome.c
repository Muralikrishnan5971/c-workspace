#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_palindrome(char str[]);

int main()
{
    char str1[] = "malayalam";
    char str2[] = "muralikrishnan";

    bool s1 = is_palindrome(str1);
    bool s2 = is_palindrome(str2);

    printf("%s is palindrome %d\n", str1, s1);
    printf("%s is palindrome %d\n", str2, s2);
}

bool is_palindrome(char str[])
{
    int len = strlen(str);

    for (int i = 0; i < len / 2; i++)
        if (str[i] != str[len - i - 1])
            return false;

    return true;
}
