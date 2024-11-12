main () {
    int i;
    int s [1000] = {0};
    char sub [1000] [50];
    char w [1000];
    gets (w);
    int k;
    int n;
    int m;
    int t;
    int j;
    getchar ();
    n = 0;
    scanf ("%d", &n);
    m = 0;
    t = strlen (w);
    {
        i = 0;
        while (t - n >= i) {
            {
                j = 0;
                while (n > j) {
                    sub[i][j] = w[i + j];
                    j++;
                }
            }
            sub[i][n] = '\0';
            i++;
        }
    }
    {
        i = 0;
        while (t - n >= i) {
            for (j = i; t - n >= j; j++)
                if (!(0 != strcmp (sub[i], sub[j])))
                    s[i]++;
            i++;
        }
    }
    {
        i = 0;
        while (t - n > i) {
            if (s[i] > m)
                m = s[i];
            i++;
        }
    }
    if (m == 1)
        ;
    else {
        printf ("%d\n", m);
        {
            i = 0;
            while (i <= t - n) {
                if (s[i] == m)
                    printf ("%s\n", sub[i]);
                i++;
            }
        }
    }
}

