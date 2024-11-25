void  main () {
    char s [50] [50];
    int n;
    int i;
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
    int GyYgd1TaoGiU;
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
        while (i < n) {
            scanf ("%s", s[i]);
            GyYgd1TaoGiU = strlen (s[i]);
            p[i] = s[i] + GyYgd1TaoGiU -(906 - 905);
            if (!('r' != *p[i]))
                *(p[i] - 1) = '\0';
            if (*p[i] == 'y')
                *(p[i] - 1) = '\0';
            if (*p[i] == 'g')
                *(p[i] - 2) = '\0';
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            printf ("%s\n", s[i]);
            i = i + 1;
        };
    };
}

