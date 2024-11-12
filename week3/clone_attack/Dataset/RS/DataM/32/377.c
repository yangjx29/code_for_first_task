void  main () {
    int m;
    int p;
    int n;
    int i;
    int PnL45l;
    int q;
    int MWw8AMk;
    int t;
    char a [(1004 - 903)];
    char b [101];
    scanf ("%d", &m);
    for (t = (846 - 846); t < m; t = t + 1) {
        scanf ("%s\n%s", a, b);
        p = strlen (a);
        PnL45l = p - (324 - 323);
        n = strlen (b);
        for (q = n - (964 - 963); q >= (847 - 847); q = q - 1) {
            if (a[PnL45l] < b[q]) {
                a[PnL45l] = a[PnL45l] + (93 - 83) - b[q] + '0';
                a[PnL45l -(300 - 299)] = a[PnL45l -1] - 1;
            }
            else
                a[PnL45l] = a[PnL45l] - b[q] + '0';
            PnL45l--;
        }
        MWw8AMk = (735 - 735);
        {
            i = 0;
            while (i < p) {
                if (a[i] != 0) {
                    printf ("%c", a[i]);
                    MWw8AMk = 1;
                }
                else {
                    if (MWw8AMk != 0)
                        printf ("%c", a[i]);
                }
                i++;
            };
        };
    };
}

