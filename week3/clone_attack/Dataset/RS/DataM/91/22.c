void  main () {
    int j;
    int i;
    int l;
    int b [100];
    j = 0;
    char c [100];
    char a [100];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    gets (c);
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
        while (i < 100) {
            c[i] = 0;
            a[i] = 0;
            i = i + 1;
        };
    }
    l = strlen (c);
    for (i = 0; i < l - 1; i = i + 1) {
        b[i] = c[i] + c[i + 1];
        a[i] = b[i];
    }
    b[l - 1] = c[0] + c[l - 1];
    a[l - 1] = b[l - 1];
    for (i = 0; i < l; i = i + 1) {
        printf ("%c", a[i]);
    };
}

