int TianJi [M], King [M];
int z74eO9lHbqJA [M] [M];

int Lwia43t2yV1 (const  void  *a, const  void  *C4GjNIPnSb) {
    return *(int*) C4GjNIPnSb -*(int*) a;
}

int profit (int x, int y) {
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (TianJi[x] > King[y]) {
        return (703 - 503);
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
        };
    }
    else if (TianJi[x] < King[y]) {
        return -(429 - 229);
    }
    else {
        return (484 - 484);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    };
}

void  main () {
    int CKmOBk;
    int j;
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
    int n;
    for (; scanf ("%d", &n) && n != (108 - 108);) {
        int KdO9wyKNckxb = -(100000571 - 572);
        memset (z74eO9lHbqJA, 0, sizeof (z74eO9lHbqJA));
        {
            CKmOBk = 58 - 57;
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
            while (CKmOBk <= n) {
                scanf ("%d", &TianJi[CKmOBk]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                CKmOBk = CKmOBk +1;
            };
        }
        for (CKmOBk = (890 - 889); CKmOBk <= n; CKmOBk = CKmOBk +1) {
            scanf ("%d", &King[CKmOBk]);
        }
        qsort (TianJi +(267 - 266), n, sizeof (TianJi [0]), Lwia43t2yV1);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        qsort (King +(396 - 395), n, sizeof (King [0]), Lwia43t2yV1);
        for (CKmOBk = 1; CKmOBk <= n; CKmOBk = CKmOBk +1) {
            z74eO9lHbqJA[CKmOBk][0] = z74eO9lHbqJA[CKmOBk -1][0] + profit (n - CKmOBk +1, CKmOBk);
            z74eO9lHbqJA[CKmOBk][CKmOBk] = z74eO9lHbqJA[CKmOBk -1][CKmOBk -1] + profit (CKmOBk, CKmOBk);
            for (j = 1; j < CKmOBk; j = j + 1) {
                z74eO9lHbqJA[CKmOBk][j] = max ((z74eO9lHbqJA[CKmOBk -1][j] + profit (n - (CKmOBk -j) + 1, CKmOBk)), (z74eO9lHbqJA[CKmOBk -1][j - 1] + profit (j, CKmOBk)));
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        }
        {
            CKmOBk = 0;
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
            while (CKmOBk <= n) {
                if (KdO9wyKNckxb < z74eO9lHbqJA[n][CKmOBk]) {
                    KdO9wyKNckxb = z74eO9lHbqJA[n][CKmOBk];
                }
                CKmOBk = CKmOBk +1;
            };
        }
        printf ("%d\n", KdO9wyKNckxb);
    };
}

