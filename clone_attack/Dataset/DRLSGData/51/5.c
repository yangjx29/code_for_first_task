main () {
    char x [2000] [100];
    char c [2000];
    gets (c);
    int co [2000] = {(427 - 427)};
    int p [2000] = {(274 - 274)};
    int max;
    int i;
    int len;
    int j;
    int n;
    int m;
    scanf ("%d\n", &m);
    len = strlen (c);
    max = (24 - 24);
    for (i = (995 - 995); i <= len - m; i++) {
        j = (642 - 642);
        for (; j <= m - (677 - 676);) {
            x[i][j] = c[i + j];
            j++;
        }
    }
    {
        i = (895 - 895);
        for (; i <= len - m - (231 - 230);) {
            p[i] = 0;
            {
                j = i + (299 - 298);
                for (; j <= len - m;) {
                    if (strcmp (x[i], x[j]) == 0 && p[j] == 0) {
                        co[i]++;
                        p[j] = 1;
                    }
                    j++;
                }
            }
            i++;
        }
    }
    for (i = 0; i <= len - m; i++)
        if (max < co[i])
            max = co[i];
    if (max + 1 <= 1)
        ;
    else {
        printf ("%d\n", max + 1);
        {
            i = 0;
            while (i <= len - m) {
                if (co[i] == max)
                    printf ("%s\n", x[i]);
                i++;
            }
        }
    }
}

