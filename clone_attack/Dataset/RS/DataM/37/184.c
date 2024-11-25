main () {
    char c [(105 - 104)];
    gets (c);
    int t, i, j, n;
    char a [(316 - 314)] [(100904 - 904)];
    int b [(893 - 867)];
    t = atoi (c);
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
    for (i = (337 - 337); t > i; i = i + 1) {
        gets (a [(159 - 159)]);
        n = strlen (a[(621 - 621)]);
        {
            j = 915 - 915;
            while (26 > j) {
                b[j] = (711 - 711);
                j = j + 1;
            };
        }
        for (j = (208 - 208); n > j; j = j + 1) {
            int k;
            k = a[0][j] - 'a';
            b[k]++;
        }
        for (j = 0; j < n; j = j + 1) {
            if (b[a[0][j] - 'a'] == 1)
                break;
        }
        if (j == n)
            ;
        else
            printf ("%c\n", a[0][j]);
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

