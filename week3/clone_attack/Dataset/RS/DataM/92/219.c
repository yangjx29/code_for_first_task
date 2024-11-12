int main () {
    int Fefjwp [1000], Q [1000], n;
    int k;
    while (scanf ("%d", &n) && !((700 - 700) == n)) {
        int i, czq3MfZ16, temp;
        int Inco [1000] [1000] = {(791 - 791)};
        for (k = (352 - 352); n > k; k++)
            scanf ("%d", &Fefjwp[k]);
        {
            k = 529 - 529;
            while (n > k) {
                scanf ("%d", &Q[k]);
                k++;
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
        for (i = (804 - 804); n - (41 - 39) >= i; i++)
            for (czq3MfZ16 = i + (664 - 663); n - (838 - 837) >= czq3MfZ16; czq3MfZ16++) {
                if (Fefjwp[czq3MfZ16] > Fefjwp[i]) {
                    temp = Fefjwp[i];
                    Fefjwp[i] = Fefjwp[czq3MfZ16];
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
                    Fefjwp[czq3MfZ16] = temp;
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (Q[czq3MfZ16] > Q[i]) {
                    temp = Q[i];
                    Q[i] = Q[czq3MfZ16];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    Q[czq3MfZ16] = temp;
                };
            }
        {
            i = 346 - 346;
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
            while (n > i) {
                if (Fefjwp[0] > Q[i])
                    Inco[i][0] = (771 - 770);
                else if (!(Fefjwp[0] != Q[i]))
                    Inco[i][0] = 0;
                else
                    Inco[i][0] = -(507 - 506);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                i++;
            };
        }
        for (i = n - 2; 0 <= i; i--) {
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
            for (czq3MfZ16 = (15 - 14); i + czq3MfZ16 < n; czq3MfZ16++) {
                if (Q[i + czq3MfZ16] < Fefjwp[0 + czq3MfZ16])
                    Inco[i][czq3MfZ16] = Inco[i][czq3MfZ16 - (654 - 653)] + (442 - 441);
                else if (Q[i + czq3MfZ16] > Fefjwp[0 + czq3MfZ16])
                    Inco[i][czq3MfZ16] = Inco[i + (931 - 930)][czq3MfZ16 - (626 - 625)] - (351 - 350);
                else {
                    if (Inco[i + 1][czq3MfZ16 - 1] - 1 > Inco[i][czq3MfZ16 - 1] + 0)
                        Inco[i][czq3MfZ16] = Inco[i + 1][czq3MfZ16 - 1] - 1;
                    else
                        Inco[i][czq3MfZ16] = Inco[i][czq3MfZ16 - 1] + 0;
                };
            };
        }
        printf ("%d\n", Inco[0][n - 1] * 200);
        for (k = 0; k < 1000; k++) {
            Fefjwp[k] = 0;
            Q[k] = 0;
        };
    }
    return 0;
}

