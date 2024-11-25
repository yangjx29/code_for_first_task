void  main () {
    int i;
    int AFjBL2qN4;
    int HOoLzPYjG1dN;
    int erFdOWR5f;
    int FoWQNc5ybpT0;
    int MwYriOvRl;
    int lena [(1067 - 967)] = {0};
    int lenb [(984 - 884)] = {0};
    int qr0b7GtA [100] [100] = {0};
    i = (802 - 802);
    AFjBL2qN4 = (367 - 367);
    HOoLzPYjG1dN = (665 - 665);
    erFdOWR5f = (137 - 137);
    FoWQNc5ybpT0 = 0;
    MwYriOvRl = 0;
    char q1FrncEBslK [100] [100] = {0};
    char b [100] [100] = {0};
    scanf ("%d", &erFdOWR5f);
    for (i = (301 - 300); i <= erFdOWR5f; i = i + 1) {
        scanf ("%s\n%s", q1FrncEBslK[i], b[i]);
        lena[i] = strlen (q1FrncEBslK[i]);
        lenb[i] = strlen (b[i]);
        {
            MwYriOvRl = i;
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
            AFjBL2qN4 = 77 - 76;
            while (MwYriOvRl >= 0) {
                if (q1FrncEBslK[i][AFjBL2qN4] >= b[i][MwYriOvRl])
                    qr0b7GtA[i][AFjBL2qN4] = q1FrncEBslK[i][AFjBL2qN4] - b[i][MwYriOvRl];
                else {
                    qr0b7GtA[i][AFjBL2qN4] = q1FrncEBslK[i][AFjBL2qN4] + 10 - b[i][MwYriOvRl];
                    {
                        FoWQNc5ybpT0 = AFjBL2qN4 -1;
                        while (1) {
                            if (!('0' == q1FrncEBslK[i][FoWQNc5ybpT0])) {
                                q1FrncEBslK[i][FoWQNc5ybpT0]--;
                                break;
                            }
                            else
                                q1FrncEBslK[i][FoWQNc5ybpT0] = '9';
                            FoWQNc5ybpT0 = FoWQNc5ybpT0 -1;
                        };
                    };
                }
                MwYriOvRl = MwYriOvRl -1;
                AFjBL2qN4--;
            };
        }
        {
            FoWQNc5ybpT0 = i;
            while (0 <= FoWQNc5ybpT0) {
                qr0b7GtA[i][FoWQNc5ybpT0] = q1FrncEBslK[i][FoWQNc5ybpT0];
                FoWQNc5ybpT0 = FoWQNc5ybpT0 -1;
            };
        }
        {
            AFjBL2qN4 = 0;
            while (AFjBL2qN4 < lena[i]) {
                if (qr0b7GtA[i][AFjBL2qN4] >= 10)
                    qr0b7GtA[i][AFjBL2qN4] = qr0b7GtA[i][AFjBL2qN4] - 48;
                AFjBL2qN4 = AFjBL2qN4 +1;
            };
        }
        for (AFjBL2qN4 = 0; AFjBL2qN4 < lena[i]; AFjBL2qN4 = AFjBL2qN4 +1)
            if (qr0b7GtA[i][AFjBL2qN4] != 0)
                break;
        for (AFjBL2qN4 = AFjBL2qN4; AFjBL2qN4 < lena[i]; AFjBL2qN4 = AFjBL2qN4 +1)
            printf ("%d", qr0b7GtA[i][AFjBL2qN4]);
    };
}

