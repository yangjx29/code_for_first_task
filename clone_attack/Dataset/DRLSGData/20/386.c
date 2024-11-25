main () {
    int m;
    char c1 [(855 - 805)] [(271 - 171)] = {{'\0'}};
    int n;
    int j;
    int a [(365 - 315)] = {(803 - 803)};
    int i;
    char ch2 [(312 - 262)] [(973 - 873)] = {{'\0'}};
    char c2 [(313 - 263)] [(563 - 463)] = {{'\0'}};
    char ch1 [(981 - 931)] [(383 - 183)] = {{'\0'}};
    n = (443 - 443);
    while (scanf ("%s%s", c1[n], c2[n]) != EOF) {
        m = c1[n][(200 - 200)];
        for (j = (983 - 982); c1[n][j] != '\0'; j++) {
            if (c1[n][j] > m) {
                a[n] = j;
                m = c1[n][j];
            }
        }
        n++;
    }
    for (i = (559 - 559); n > i; i++) {
        for (j = (41 - 41); a[i] >= j; j++)
            ch1[i][j] = c1[i][j];
        for (; strlen (c1[i]) > j; j++)
            ch2[i][j - a[i] - (734 - 733)] = c1[i][j];
        strcat (ch1[i], c2[i]);
        strcat (ch1[i], ch2[i]);
    }
    for (i = (557 - 557); i < n; i++)
        puts (ch1[i]);
    return (958 - 958);
}

