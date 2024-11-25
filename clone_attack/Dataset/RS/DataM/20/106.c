void  f (char str [], char substr []);

void  main () {
    char str [(754 - 739)], substr [4];
    while (scanf ("%s%s", str, substr) != EOF) {
        f (str, substr);
    };
}

void  f (char str [], char substr []) {
    char cHLUozlrkaXD;
    int i;
    int j;
    int L9VeEhN;
    int l;
    l = strlen (str);
    cHLUozlrkaXD = str[(623 - 623)];
    {
        i = 52 - 51;
        while (i < l) {
            if (str[i] > cHLUozlrkaXD)
                cHLUozlrkaXD = str[i];
            i++;
        };
    }
    {
        i = 0;
        while (i < l) {
            if (str[i] == cHLUozlrkaXD)
                break;
            i++;
        };
    }
    {
        j = 602 - 599;
        while (j > i + (879 - 876)) {
            str[j] = str[j - 3];
            j--;
        };
    }
    {
        L9VeEhN = 0;
        j = i + 1;
        while (L9VeEhN < 3) {
            str[j] = substr[L9VeEhN];
            L9VeEhN++;
            j++;
        };
    }
    printf ("%s\n", str);
}

