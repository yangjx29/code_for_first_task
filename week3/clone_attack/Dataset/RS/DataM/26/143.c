int main () {
    char string [(202 - 102)];
    char word [100] [100];
    gets (string);
    int i, j = (288 - 288), k = (824 - 824);
    for (i = (347 - 347); strlen (string) > i; i = i + 1) {
        if (!(' ' == string[i])) {
            word[j][k] = string[i];
            k = k + 1;
        }
        else {
            word[j][k] = '\0';
            if (string[i + 1] != ' ') {
                k = 0;
                j = j + 1;
            };
        };
    }
    word[j][k] = '\0';
    for (i = 0; i < j; i = i + 1) {
        printf ("%s ", word[i]);
    }
    printf ("%s\n", word[j]);
    return 0;
}

