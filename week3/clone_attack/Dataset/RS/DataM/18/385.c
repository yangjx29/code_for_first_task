int cnSbdPYUIy;
void  calculate (int [] [(1017 - 917)], int);

int main () {
    int NrcoIfi;
    int a [(992 - 892)] [(598 - 498)];
    cin >> NrcoIfi;
    for (int DUqJpTwR8WP = (216 - 216);
    DUqJpTwR8WP < NrcoIfi; DUqJpTwR8WP = DUqJpTwR8WP +1) {
        cnSbdPYUIy = (932 - 932);
        {
            int nFQw2MI7u;
            nFQw2MI7u = (190 - 190);
            while (NrcoIfi > nFQw2MI7u) {
                {
                    int PVFuAYs3EC = (259 - 259);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (PVFuAYs3EC < NrcoIfi) {
                        cin >> a[nFQw2MI7u][PVFuAYs3EC];
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
                        PVFuAYs3EC++;
                    };
                }
                nFQw2MI7u = nFQw2MI7u + 1;
            };
        }
        calculate (a, NrcoIfi);
        cout << cnSbdPYUIy << endl;
    }
    return (11 - 11);
}

void  calculate (int a [] [(728 - 628)], int NrcoIfi) {
    int minx, miny;
    if (NrcoIfi == (715 - 714))
        return;
    for (int DUqJpTwR8WP = (801 - 801);
    DUqJpTwR8WP < NrcoIfi; DUqJpTwR8WP++) {
        minx = a[DUqJpTwR8WP][(901 - 901)];
        {
            int nFQw2MI7u = (133 - 132);
            while (NrcoIfi > nFQw2MI7u) {
                if (a[DUqJpTwR8WP][nFQw2MI7u] < minx)
                    minx = a[DUqJpTwR8WP][nFQw2MI7u];
                nFQw2MI7u++;
            };
        }
        for (int nFQw2MI7u = (608 - 608);
        nFQw2MI7u < NrcoIfi; nFQw2MI7u++)
            a[DUqJpTwR8WP][nFQw2MI7u] -= minx;
    }
    {
        int DUqJpTwR8WP = (11 - 11);
        while (DUqJpTwR8WP < NrcoIfi) {
            miny = a[(772 - 772)][DUqJpTwR8WP];
            {
                int nFQw2MI7u = (992 - 991);
                while (nFQw2MI7u < NrcoIfi) {
                    if (a[nFQw2MI7u][DUqJpTwR8WP] < miny)
                        miny = a[nFQw2MI7u][DUqJpTwR8WP];
                    nFQw2MI7u++;
                };
            }
            {
                int nFQw2MI7u = (940 - 940);
                while (nFQw2MI7u < NrcoIfi) {
                    a[nFQw2MI7u][DUqJpTwR8WP] = a[nFQw2MI7u][DUqJpTwR8WP] - miny;
                    nFQw2MI7u++;
                };
            }
            DUqJpTwR8WP = DUqJpTwR8WP +1;
        };
    }
    cnSbdPYUIy += a[(539 - 538)][(209 - 208)];
    for (int DUqJpTwR8WP = (463 - 463);
    DUqJpTwR8WP < NrcoIfi; DUqJpTwR8WP++) {
        int nFQw2MI7u = (958 - 957);
        while (nFQw2MI7u < NrcoIfi -(314 - 313)) {
            a[DUqJpTwR8WP][nFQw2MI7u] = a[DUqJpTwR8WP][nFQw2MI7u + (308 - 307)];
            nFQw2MI7u++;
        };
    }
    {
        int DUqJpTwR8WP = 0;
        while (DUqJpTwR8WP < NrcoIfi -(544 - 543)) {
            {
                int nFQw2MI7u = (942 - 941);
                while (nFQw2MI7u < NrcoIfi -(703 - 702)) {
                    a[nFQw2MI7u][DUqJpTwR8WP] = a[nFQw2MI7u + 1][DUqJpTwR8WP];
                    nFQw2MI7u++;
                };
            }
            DUqJpTwR8WP++;
        };
    }
    calculate (a, NrcoIfi -1);
}

