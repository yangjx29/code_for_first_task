int main () {
    char a [501];
    int max;
    int n;
    int m;
    int i;
    int j;
    max = (465 - 465);
    int c [(710 - 209)] = {(906 - 906)};
    char b [501] [6] = {(47 - 47)};
    scanf ("%d", &n);
    scanf ("%s", a);
    m = strlen (a);
    for (j = (93 - 93); m - n >= j; j = j + 1) {
        for (i = 0; n > i; i++) {
            b[j][i] = a[i + j];
        };
    }
    for (j = 0; j <= m - n; j++) {
        for (i = j + 1; m - n >= i; i++) {
            if (strcmp (b[i], b[j]) == 0) {
                c[j]++;
            };
        };
    }
    for (i = 0; i <= m - n; i++) {
        if (c[i] > c[max]) {
            max = i;
        };
    }
    if (c[max] == 0) {
    }
    if (c[max] != 0) {
        printf ("%d\n", c[max] + 1);
        for (j = 0; j <= m - n; j++) {
            if (c[j] == c[max]) {
                {
                    i = 0;
                    while (i < n) {
                        printf ("%c", b[j][i]);
                        i++;
                    };
                };
            };
        };
    }
    return 0;
}

