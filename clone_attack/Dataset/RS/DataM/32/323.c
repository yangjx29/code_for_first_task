void  main () {
    int n, n4N1nwfTpXYE, j, al, bl, t;
    char mxtbe3W [100];
    char b [100];
    char out [100];
    scanf ("%d", &n);
    {
        n4N1nwfTpXYE = 1;
        while (n4N1nwfTpXYE <= n) {
            int anum [100];
            int bnum [100];
            n4N1nwfTpXYE = n4N1nwfTpXYE + 1;
            scanf ("%s", mxtbe3W);
            al = strlen (mxtbe3W);
            {
                j = 0;
                while (j < al) {
                    anum[al - 1 - j] = mxtbe3W[j] - '0';
                    j = j + 1;
                };
            }
            scanf ("%s", b);
            bl = strlen (b);
            {
                j = 0;
                while (bl > j) {
                    bnum[bl - 1 - j] = b[j] - '0';
                    j = j + 1;
                };
            }
            {
                j = 0;
                while (j < bl) {
                    anum[j] = anum[j] - bnum[j];
                    j = j + 1;
                };
            }
            {
                j = 0;
                while (j < bl) {
                    if (anum[j] < 0) {
                        anum[j] = anum[j] + 10;
                        anum[j + 1] = anum[j + 1] - 1;
                    }
                    j = j + 1;
                };
            }
            if (anum[al - 1] == 0) {
                {
                    j = 0;
                    while (j < al - 1) {
                        out[j] = anum[al - 2 - j] + '0';
                        j = j + 1;
                    };
                }
                out[al - 1] = '\0';
            }
            if (anum[al - 1] > 0) {
                {
                    j = 0;
                    while (j < al) {
                        out[j] = anum[al - 1 - j] + '0';
                        j = j + 1;
                    };
                }
                out[al] = '\0';
            }
            printf ("%s\n", out);
        };
    };
}

