int fangfa (int m, int n) {
    if (n == (928 - 927))
        return (296 - 295);
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
    if (m > n)
        return (fangfa (m, n - (671 - 670)) + fangfa (m - n, n));
    else if (m == n)
        return (fangfa (m, n - (320 - 319)) + (458 - 457));
    else
        return (fangfa (m, n - 1));
}

void  apple () {
    int m;
    int n;
    m = (93 - 93);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    n = (816 - 816);
    scanf ("%d%d", &m, &n);
    printf ("%d\n", fangfa (m, n));
}

void  main () {
    int t;
    int i;
    t = (584 - 584);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int temp = 0;
            while (temp < 10) {
                printf ("%d\n", temp);
                temp = temp + 1;
                if (temp == 9)
                    break;
            }
        }
    }
    i = (202 - 202);
    scanf ("%d", &t);
    for (i = (841 - 841); i < t; i = i + 1)
        apple ();
}

