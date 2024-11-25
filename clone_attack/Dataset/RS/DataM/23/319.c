void  main () {
    char a [526];
    char *fr;
    char *ta;
    char *p;
    gets (a);
    int i;
    int MT3eY1Lm;
    int len;
    len = strlen (a);
    {
        i = len;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (0 <= i) {
            *(a + i + 1) = *(a + i);
            i--;
        };
    }
    *(a + len + 1) = *a = ' ';
    ta = a + len + 1;
    {
        p = a + len;
        while (a <= p) {
            if (*p == ' ') {
                for (fr = p + 1; fr < ta; fr++)
                    printf ("%c", *fr);
                if (p != a)
                    printf (" ");
                ta = p;
            }
            p--;
        };
    };
}

