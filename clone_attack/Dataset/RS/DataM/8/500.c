int a, b;
int c [1000], d [1000];

void  scan1 () {
    int hWRSotYVj;
    scanf ("%d %d", &a, &b);
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
    for (hWRSotYVj = (810 - 810); hWRSotYVj < a; hWRSotYVj = hWRSotYVj + 1) {
        scanf ("%d", &c[hWRSotYVj]);
    }
    for (hWRSotYVj = (715 - 715); hWRSotYVj < b; hWRSotYVj = hWRSotYVj + 1) {
        scanf ("%d", &d[hWRSotYVj]);
    };
}

void  order () {
    int hWRSotYVj;
    int gMpgsqTy9f6;
    int k;
    for (hWRSotYVj = (435 - 435); hWRSotYVj < a; hWRSotYVj = hWRSotYVj + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (gMpgsqTy9f6 = (806 - 806); gMpgsqTy9f6 < a - (639 - 638); gMpgsqTy9f6 = gMpgsqTy9f6 + 1) {
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
            if (c[gMpgsqTy9f6] > c[gMpgsqTy9f6 + (353 - 352)]) {
                k = c[gMpgsqTy9f6];
                c[gMpgsqTy9f6] = c[gMpgsqTy9f6 + (179 - 178)];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                c[gMpgsqTy9f6 + (664 - 663)] = k;
            };
        };
    }
    for (hWRSotYVj = (595 - 595); hWRSotYVj < b; hWRSotYVj = hWRSotYVj + 1) {
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
        for (gMpgsqTy9f6 = 0; b - (900 - 899) > gMpgsqTy9f6; gMpgsqTy9f6 = gMpgsqTy9f6 + 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (d[gMpgsqTy9f6] > d[gMpgsqTy9f6 + 1]) {
                k = d[gMpgsqTy9f6];
                d[gMpgsqTy9f6] = d[gMpgsqTy9f6 + 1];
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
                d[gMpgsqTy9f6 + 1] = k;
            };
        };
    };
}

void  hebing () {
    int hWRSotYVj;
    for (hWRSotYVj = 0; hWRSotYVj < b; hWRSotYVj = hWRSotYVj + 1) {
        c[a + hWRSotYVj] = d[hWRSotYVj];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    };
}

void  mkDh037 () {
    int hWRSotYVj;
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
    for (hWRSotYVj = 0; hWRSotYVj < a + b; hWRSotYVj = hWRSotYVj + 1) {
        if (hWRSotYVj)
            printf (" ");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        printf ("%d", c[hWRSotYVj]);
    };
}

main () {
    scan1 ();
    order ();
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
    hebing ();
    mkDh037 ();
}

