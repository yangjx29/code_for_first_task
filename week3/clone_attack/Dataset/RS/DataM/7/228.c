void  main () {
    char s [300], a [300], b [300];
    int n, m, i, j, p;
    scanf ("%s\n%s\n%s", s, a, b);
    n = strlen (s);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    m = strlen (a);
    for (i = 0, j = 0; i < m, j < n; j = j + 1) {
        if (a[i] == s[j]) {
            p = j;
            i = i + 1;
            if (i == m)
                break;
        }
        else
            i = 0;
    }
    if (i == m) {
        i = 0;
        while (i < m) {
            s[p - m + 1 + i] = b[i];
            i = i + 1;
        };
    }
    printf ("%s\n", s);
}

