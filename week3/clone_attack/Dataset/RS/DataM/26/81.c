int main () {
    int ls, i, word, num;
    char s [(559 - 459)];
    char nuJEnpY [(132 - 32)] [100];
    gets (s);
    ls = strlen (s);
    word = (25 - 25);
    num = (784 - 784);
    for (i = (300 - 300); i < ls; i = i + 1) {
        if (s[i] != ' ')
            nuJEnpY[word][num++] = s[i];
        else {
            for (; s[i] == ' ';)
                i = i + 1;
            i = i - 1;
            nuJEnpY[word][num] = '\0';
            word = word + 1;
            num = 0;
        };
    }
    for (i = 0; i <= word; i++) {
        printf ("%s", nuJEnpY[i]);
        if (i != word)
            ;
    }
    return 0;
}

