int a [(1007 - 807)] [(410 - 210)], row, col, mw2BagdSVN;

void  puko7C (int r, int B8hZ0qVp4) {
    int af16BPrFt;
    int j;
    mw2BagdSVN = 0;
    if (!((348 - 347) != r)) {
        {
            af16BPrFt = 464 - 463;
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
            while (B8hZ0qVp4 >= af16BPrFt) {
                printf ("%d\n", a[(336 - 335)][af16BPrFt]);
                af16BPrFt = af16BPrFt + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        mw2BagdSVN = (542 - 541);
    }
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
    if (B8hZ0qVp4 == 1 && !(0 != mw2BagdSVN)) {
        af16BPrFt = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (af16BPrFt <= r) {
            printf ("%d\n", a[af16BPrFt][1]);
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
            af16BPrFt = af16BPrFt + 1;
        };
    }
    if (!(1 == r) && !(1 == B8hZ0qVp4)) {
        for (af16BPrFt = 1; B8hZ0qVp4 >= af16BPrFt; af16BPrFt++) {
            printf ("%d\n", a[1][af16BPrFt]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            };
        }
        {
            af16BPrFt = 884 - 882;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            while (af16BPrFt <= r) {
                printf ("%d\n", a[af16BPrFt][B8hZ0qVp4]);
                af16BPrFt = af16BPrFt + 1;
            };
        }
        for (af16BPrFt = B8hZ0qVp4 -1; af16BPrFt >= 1; af16BPrFt = af16BPrFt - 1) {
            printf ("%d\n", a[r][af16BPrFt]);
        }
        for (af16BPrFt = r - 1; af16BPrFt >= 2; af16BPrFt--) {
            printf ("%d\n", a[af16BPrFt][1]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    for (af16BPrFt = 2; af16BPrFt <= r - 1; af16BPrFt++) {
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
        for (j = 1; j <= B8hZ0qVp4 -2; j++) {
            a[af16BPrFt][j] = a[af16BPrFt][j + 1];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        };
    }
    {
        af16BPrFt = 1;
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
        while (af16BPrFt <= r - 2) {
            {
                j = 1;
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
                while (j <= B8hZ0qVp4 -2) {
                    a[af16BPrFt][j] = a[af16BPrFt + 1][j];
                    j = j + 1;
                };
            }
            af16BPrFt = af16BPrFt + 1;
        };
    }
    if (B8hZ0qVp4 -2 >= 1 && r - 2 >= 1) {
        puko7C (r - 2, B8hZ0qVp4 -2);
    };
}

int main () {
    int af16BPrFt;
    int j;
    scanf ("%d %d", &row, &col);
    {
        af16BPrFt = 1;
        while (af16BPrFt <= row) {
            {
                j = 1;
                while (j <= col) {
                    scanf ("%d", &a[af16BPrFt][j]);
                    j = j + 1;
                };
            }
            af16BPrFt = af16BPrFt + 1;
        };
    }
    puko7C (row, col);
}

