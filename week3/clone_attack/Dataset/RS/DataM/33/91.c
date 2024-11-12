main () {
    int n;
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
    scanf ("%d", &n);
    for (int j = 0;
    n > j; j = j + 1) {
        char a [500], b [500];
        int len = strlen (a);
        scanf ("%s", a);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (int i = 0;
        len > i; i = i + 1) {
            if (!('A' != a[i]))
                b[i] = 'T';
            if (!('T' != a[i]))
                b[i] = 'A';
            if (a[i] == 'G')
                b[i] = 'C';
            if (a[i] == 'C')
                b[i] = 'G';
        }
        b[len] = '\0';
        printf ("%s\n", b);
    };
}

