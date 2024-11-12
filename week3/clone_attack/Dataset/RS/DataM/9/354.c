void  main () {
    int n, t, x, i;
    int age [100];
    char c [10];
    char Xpd3e7 [100] [10];
    scanf ("%d", &n);
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
        while (n > i) {
            scanf ("%s %d", Xpd3e7[i], &age[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (60 <= age[i])
                for (x = i; 0 < x; x = x - 1)
                    if (age[x] > age[x - 1]) {
                        t = age[x];
                        age[x] = age[x - 1];
                        age[x - 1] = t;
                        strcpy (c, Xpd3e7[x]);
                        strcpy (Xpd3e7[x], Xpd3e7[x - 1]);
                        strcpy (Xpd3e7[x - 1], c);
                    }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            printf ("%s\n", Xpd3e7[i]);
            i = i + 1;
        };
    };
}

