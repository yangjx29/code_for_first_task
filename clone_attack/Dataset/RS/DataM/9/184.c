main () {
    int b [100];
    char d [100] [2000];
    int n;
    int i;
    int j;
    int cLhX2U4AOWu3;
    int rcMTDpn = (119 - 119);
    char a [100] [2000];
    char b0iFGfv8O [11];
    int c [100];
    scanf ("%d", &n);
    for (i = 0; n - (814 - 813) >= i; i = i + 1)
        scanf ("%s %d", a[i], &b[i]);
    for (i = 0; i < n; i++) {
        if (b[i] >= 60) {
            c[rcMTDpn] = b[i];
            strcpy (d[rcMTDpn], a[i]);
            rcMTDpn = rcMTDpn + 1;
        };
    }
    {
        j = rcMTDpn - 2;
        while (j >= 0) {
            {
                i = j;
                while (i <= rcMTDpn - 2) {
                    if (c[i] < c[i + 1]) {
                        strcpy (b0iFGfv8O, d[i]);
                        strcpy (d[i], d[i + 1]);
                        strcpy (d[i + 1], b0iFGfv8O);
                        cLhX2U4AOWu3 = c[i];
                        c[i] = c[i + 1];
                        c[i + 1] = cLhX2U4AOWu3;
                    }
                    i = i + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j--;
        };
    }
    {
        i = 0;
        while (i < rcMTDpn) {
            printf ("%s\n", d[i]);
            i = i + 1;
        };
    }
    rcMTDpn = 0;
    {
        i = 0;
        while (i < n) {
            if (b[i] < 60) {
                c[rcMTDpn] = b[i];
                strcpy (d[rcMTDpn], a[i]);
                rcMTDpn++;
            }
            i++;
        };
    }
    for (i = 0; i < rcMTDpn; i++)
        printf ("%s\n", d[i]);
}

