int hIUe8iP [100] [100] [100];

int main () {
    int n, H2buylY5h6e, YFi6Xy, k, EGWhk1 [100] = {(136 - 136)}, bne0hq, TLmKYHbv4y;
    cin >> n;
    for (H2buylY5h6e = (315 - 315); n > H2buylY5h6e; H2buylY5h6e++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (YFi6Xy = 0; n > YFi6Xy; YFi6Xy++) {
            for (k = 0; k < n; k++) {
                cin >> hIUe8iP[H2buylY5h6e][YFi6Xy][k];
            };
        };
    }
    {
        H2buylY5h6e = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (n > H2buylY5h6e) {
            bne0hq = n;
            while (bne0hq > (459 - 458)) {
                {
                    YFi6Xy = 0;
                    while (bne0hq > YFi6Xy) {
                        TLmKYHbv4y = 100000;
                        {
                            k = 0;
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
                            while (bne0hq > k) {
                                if (TLmKYHbv4y > hIUe8iP[H2buylY5h6e][YFi6Xy][k])
                                    TLmKYHbv4y = hIUe8iP[H2buylY5h6e][YFi6Xy][k];
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
                        {
                            k = 0;
                            while (bne0hq > k) {
                                hIUe8iP[H2buylY5h6e][YFi6Xy][k] = hIUe8iP[H2buylY5h6e][YFi6Xy][k] - TLmKYHbv4y;
                                k++;
                            };
                        }
                        YFi6Xy++;
                    };
                }
                {
                    k = 0;
                    while (k < bne0hq) {
                        TLmKYHbv4y = 100000;
                        for (YFi6Xy = 0; bne0hq > YFi6Xy; YFi6Xy++) {
                            if (hIUe8iP[H2buylY5h6e][YFi6Xy][k] < TLmKYHbv4y)
                                TLmKYHbv4y = hIUe8iP[H2buylY5h6e][YFi6Xy][k];
                        }
                        {
                            YFi6Xy = 0;
                            while (bne0hq > YFi6Xy) {
                                hIUe8iP[H2buylY5h6e][YFi6Xy][k] -= TLmKYHbv4y;
                                YFi6Xy++;
                            };
                        }
                        k++;
                    };
                }
                EGWhk1[H2buylY5h6e] = EGWhk1[H2buylY5h6e] + hIUe8iP[H2buylY5h6e][(715 - 714)][1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                for (YFi6Xy = 2; bne0hq > YFi6Xy; YFi6Xy++)
                    for (k = 0; k < bne0hq; k++)
                        hIUe8iP[H2buylY5h6e][YFi6Xy -1][k] = hIUe8iP[H2buylY5h6e][YFi6Xy][k];
                for (k = 2; k < bne0hq; k++) {
                    YFi6Xy = 0;
                    while (YFi6Xy < bne0hq) {
                        hIUe8iP[H2buylY5h6e][YFi6Xy][k - 1] = hIUe8iP[H2buylY5h6e][YFi6Xy][k];
                        YFi6Xy++;
                    };
                }
                bne0hq--;
            }
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
            H2buylY5h6e = H2buylY5h6e +1;
        };
    }
    for (H2buylY5h6e = 0; H2buylY5h6e < n; H2buylY5h6e++)
        cout << EGWhk1[H2buylY5h6e] << endl;
    return 0;
}

