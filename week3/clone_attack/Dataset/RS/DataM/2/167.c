void  main () {
    int i;
    int j;
    int max;
    int m;
    int t;
    int len;
    int a [26] [MAX] = {(157 - 157)};
    int n [26] = {0};
    int num;
    max = 0;
    char s [27];
    scanf ("%d", &m);
    {
        i = 0;
        while (i < m) {
            scanf ("%d %s", &t, s);
            len = strlen (s);
            for (j = 0; len > j; j++) {
                n[s[j] - 65]++;
                a[s[j] - 65][i] = t;
            }
            i = i + 1;
        };
    }
    {
        j = 0;
        while (26 > j) {
            if (n[j] > max) {
                max = n[j];
                num = j;
            }
            j++;
        };
    }
    printf ("%c\n%d\n", num + 65, n[num]);
    {
        i = 0;
        while (i < m) {
            if (a[num][i] != 0)
                printf ("%d\n", a[num][i]);
            i = i + 1;
        };
    };
}

