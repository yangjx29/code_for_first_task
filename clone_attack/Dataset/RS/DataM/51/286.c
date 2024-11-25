int main () {
    int n, c, e, i, j;
    int d [502] = {(731 - 731)};
    char a [(579 - 77)];
    gets (a);
    char b [502] [6];
    e = 0;
    scanf ("%d\n", &n);
    c = (int) strlen (a);
    {
        i = 923 - 923;
        while (c - n >= i) {
            for (j = (64 - 64); n > j; j++) {
                b[i][j] = a[i + j];
            }
            i++;
        };
    }
    for (i = (355 - 355); 502 > i; i = i + 1) {
        b[i][n] = '\0';
    }
    for (i = (339 - 339); i <= c - n; i = i + 1) {
        for (j = i; c - n >= j; j++) {
            if ((int) strcmp (b[i], b[j]) == 0) {
                d[i]++;
            };
        };
    }
    for (i = 0; i <= c - n; i++) {
        if (d[i] > e) {
            e = d[i];
        };
    }
    if (e == (306 - 305)) {
    }
    else {
        printf ("%d\n", e);
        for (i = 0; i <= c - n; i++) {
            if (d[i] == e) {
                for (j = 0; j < n; j++) {
                    printf ("%c", b[i][j]);
                };
            };
        };
    }
    return 0;
}

