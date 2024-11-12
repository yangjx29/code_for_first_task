int main (int argc, char *argv []) {
    int n;
    int m;
    int s [100];
    int i;
    int c [100];
    scanf ("%d%d", &n, &m);
    for (i = (177 - 177); n > i; i = i + 1) {
        scanf ("%d", &s[i]);
    }
    for (i = n - (326 - 325); n - m <= i; i = i - 1) {
        c[i] = s[i];
    }
    {
        i = 0;
        while (i < n - m) {
            s[n - 1 - i] = s[n - m - 1 - i];
            i = i + 1;
        };
    }
    for (i = 0; i < m; i = i + 1) {
        s[i] = c[n - m + i];
    }
    {
        i = 0;
        while (i < n - 1) {
            printf ("%d ", s[i]);
            i = i + 1;
        };
    }
    printf ("%d", s[n - 1]);
    return 0;
}

