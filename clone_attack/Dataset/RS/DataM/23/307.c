void  main () {
    char a [100];
    char b [50] [20];
    gets (a);
    int len, i, j = 0, t = 0, m;
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
    len = strlen (a);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < len) {
            if (a[i] != ' ') {
                b[t][j] = a[i];
                m = t;
                j = j + 1;
            }
            if (a[i] == ' ') {
                b[t][j] = '\0';
                j = 0;
                t = t + 1;
            }
            i = i + 1;
        };
    }
    b[t][j] = '\0';
    {
        i = m;
        while (i > 0) {
            printf ("%s ", b[i]);
            i = i - 1;
        };
    }
    printf ("%s", b[0]);
}

