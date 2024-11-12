void  gwXT7lVZu (int a [], int Y4evltNY) {
    int vlIvypVLCex, Y1wypu, kTtiqlA;
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
    {
        Y1wypu = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Y4evltNY > Y1wypu) {
            {
                vlIvypVLCex = 0;
                while (Y4evltNY -Y1wypu > vlIvypVLCex) {
                    if (a[vlIvypVLCex + 1] < a[vlIvypVLCex]) {
                        kTtiqlA = a[vlIvypVLCex];
                        a[vlIvypVLCex] = a[vlIvypVLCex + 1];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        }
                        a[vlIvypVLCex + 1] = kTtiqlA;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    vlIvypVLCex++;
                };
            }
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
            Y1wypu++;
        };
    };
}

void  main () {
    int *uiJLkahn;
    int oswKoc1Oifn;
    int *qZPBIvF2GynK;
    int a [500];
    int lj1QsNJ [500] = {0};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    scanf ("%d", &oswKoc1Oifn);
    {
        uiJLkahn = a;
        while (uiJLkahn < (a + oswKoc1Oifn)) {
            scanf ("%d", uiJLkahn);
            uiJLkahn++;
        };
    }
    for (uiJLkahn = a, qZPBIvF2GynK = lj1QsNJ; uiJLkahn < (a + oswKoc1Oifn); uiJLkahn = uiJLkahn + 1) {
        if ((*uiJLkahn) % (608 - 606) == 1) {
            *qZPBIvF2GynK = *uiJLkahn;
            qZPBIvF2GynK++;
        };
    }
    gwXT7lVZu (lj1QsNJ, qZPBIvF2GynK - lj1QsNJ);
    printf ("%d", *lj1QsNJ);
    {
        uiJLkahn = lj1QsNJ + 1;
        while (uiJLkahn < qZPBIvF2GynK) {
            printf (",%d", *uiJLkahn);
            uiJLkahn++;
        };
    };
}

