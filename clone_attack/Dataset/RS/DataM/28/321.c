void  main () {
    char s [10000];
    int i, h, t = (519 - 519), x = 0, a [300], b [300], c [30];
    gets (s);
    h = strlen (s);
    a[0] = 0;
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
    {
        i = 497 - 496;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < h) {
            if (s[i] == ' ' && s[i - (960 - 959)] != ' ')
                b[i - t - 1] = i;
            else
                t = t + 1;
            if (s[i - 1] == ' ' && s[i] != ' ')
                a[i - x] = i;
            else
                x = x + 1;
            i = i + 1;
        };
    }
    b[h - t - 1] = h;
    for (i = 0; i < h - x; i = i + 1)
        c[i] = b[i] - a[i];
    printf ("%d", c[0]);
    for (i = 1; i < h - x; i++)
        printf (",%d", c[i]);
}

