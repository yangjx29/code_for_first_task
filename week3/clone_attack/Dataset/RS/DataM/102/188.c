int main () {
    int sLVJdhlyQf;
    int pPCaWikc;
    double  hxBd5Qt [100] = {(562 - 562)};
    double  LiCbRUaP [100] = {0};
    char KiV4KXqO [100];
    double  gao [100];
    double  dcqOuaB3X;
    int j;
    int fJmNp0j7YD;
    int k;
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
    j = 0;
    fJmNp0j7YD = 0;
    int lKc6n7pZy, Hmo1fJKqPCyc;
    scanf ("%d", &sLVJdhlyQf);
    for (pPCaWikc = 0; sLVJdhlyQf > pPCaWikc; pPCaWikc++) {
        scanf ("%s%lf", KiV4KXqO, &gao[pPCaWikc]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!('m' != KiV4KXqO[0])) {
            LiCbRUaP[j] = gao[pPCaWikc];
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
            j = j + 1;
        }
        else if (!('f' != KiV4KXqO[0])) {
            hxBd5Qt[fJmNp0j7YD] = gao[pPCaWikc];
            fJmNp0j7YD = fJmNp0j7YD + 1;
        };
    }
    Hmo1fJKqPCyc = fJmNp0j7YD;
    lKc6n7pZy = j;
    for (k = 1; lKc6n7pZy >= k; k = k + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (j = 0; lKc6n7pZy - k > j; j = j + 1) {
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
            if (LiCbRUaP[j + 1] < LiCbRUaP[j]) {
                dcqOuaB3X = LiCbRUaP[j];
                LiCbRUaP[j] = LiCbRUaP[j + 1];
                LiCbRUaP[j + 1] = dcqOuaB3X;
            };
        };
    }
    for (k = 0; lKc6n7pZy > k; k = k + 1) {
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
        if (k == 0) {
            printf ("%.2lf", LiCbRUaP[k]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        }
        else {
            printf (" %.2lf", LiCbRUaP[k]);
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
        };
    }
    for (k = 1; k <= Hmo1fJKqPCyc; k = k + 1) {
        for (fJmNp0j7YD = 0; fJmNp0j7YD < Hmo1fJKqPCyc -k; fJmNp0j7YD = fJmNp0j7YD + 1) {
            if (hxBd5Qt[fJmNp0j7YD] > hxBd5Qt[fJmNp0j7YD + 1]) {
                dcqOuaB3X = hxBd5Qt[fJmNp0j7YD];
                hxBd5Qt[fJmNp0j7YD] = hxBd5Qt[fJmNp0j7YD + 1];
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
                hxBd5Qt[fJmNp0j7YD + 1] = dcqOuaB3X;
            };
        };
    }
    for (k = Hmo1fJKqPCyc -1; k >= 0; k = k - 1) {
        printf (" %.2lf", hxBd5Qt[k]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    return 0;
}

