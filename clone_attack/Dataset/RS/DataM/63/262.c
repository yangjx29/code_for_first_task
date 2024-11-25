main () {
    int QuJgdX, mBXNqPO65ebH, zFPY4N, y2;
    int EjTJbEdLt, j, XVwM1C;
    long  int aTYMkrVDR [(822 - 722)] [(445 - 345)];
    long  int srAXxwnUk [(1033 - 933)] [(934 - 834)];
    long  int c [(304 - 204)] [(401 - 301)] = {(453 - 453)};
    getchar ();
    scanf ("%d %d", &QuJgdX, &mBXNqPO65ebH);
    {
        EjTJbEdLt = 236 - 236;
        while (QuJgdX > EjTJbEdLt) {
            {
                j = 606 - 606;
                while (mBXNqPO65ebH > j) {
                    scanf ("%d", &srAXxwnUk[EjTJbEdLt][j]);
                    j++;
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
            EjTJbEdLt = EjTJbEdLt +1;
        };
    }
    scanf ("%d %d", &zFPY4N, &y2);
    {
        EjTJbEdLt = 314 - 314;
        while (zFPY4N > EjTJbEdLt) {
            {
                j = 190 - 190;
                while (y2 > j) {
                    scanf ("%d", &aTYMkrVDR[EjTJbEdLt][j]);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    j++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            EjTJbEdLt = EjTJbEdLt +1;
        };
    }
    {
        EjTJbEdLt = 607 - 607;
        while (QuJgdX > EjTJbEdLt) {
            for (j = 0; y2 > j; j++) {
                XVwM1C = 0;
                while (XVwM1C < mBXNqPO65ebH) {
                    c[EjTJbEdLt][j] = c[EjTJbEdLt][j] + srAXxwnUk[EjTJbEdLt][XVwM1C] * aTYMkrVDR[XVwM1C][j];
                    XVwM1C++;
                };
            }
            EjTJbEdLt++;
        };
    }
    for (EjTJbEdLt = 0; QuJgdX > EjTJbEdLt; EjTJbEdLt++) {
        j = 0;
        while (y2 > j) {
            if (!(0 != j)) {
                printf ("%ld", c[EjTJbEdLt][j]);
            }
            else {
                printf (" %ld", c[EjTJbEdLt][j]);
            }
            if (j == (y2 - 1))
                printf ("\n");
            j++;
        };
    }
    getchar ();
}

