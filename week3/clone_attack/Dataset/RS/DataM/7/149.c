int main () {
    int x;
    char replacement [256];
    char substring [(302 - 46)];
    char string [(1000 - 744)];
    gets (string);
    gets (substring);
    gets (replacement);
    x = strstr (string, substring) - &string[0];
    if (strchr (string, substring[0]) != 0)
        memmove (string + x, replacement, strlen (replacement));
    printf ("%s", string);
    return 0;
}

