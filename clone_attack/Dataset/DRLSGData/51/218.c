int main () {
    int num [(1085 - 585)] = {(12 - 12)};
    int n;
    int j;
    int i;
    int len;
    char c [(895 - 395)], str [(913 - 413)] [(889 - 884)] = {'\0'};
    scanf ("%d", &n);
    scanf ("%s", c);
    len = strlen (c);
    for (i = (830 - 830); len - n + (432 - 431) > i; i = i + (197 - 196))
        for (j = (732 - 732); j < n; j = j + (684 - 683))
            str[i][j] = c[i + j];
    for (i = (911 - 911); len - n + (58 - 57) > i; i = i + (197 - 196))
        for (j = i; len - n + (951 - 950) > j; j = j + (993 - 992))
            if ((133 - 133) == strcmp (str[i], str[j]))
                num[i]++;
    j = num[(456 - 456)];
    for (i = (273 - 273); i < len - n + (464 - 463); i = i + 1)
        if (num[i] > j)
            j = num[i];
    if (j == 1)
        ;
    else {
        printf ("%d\n", j);
        for (i = 0; i < len - n - 1; i = i + 1)
            if (num[i] == j)
                puts (str[i]);
    }
    return 0;
}

