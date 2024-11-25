int min (int a [], int nx) {
    int P2Ze3j, min;
    min = a[(133 - 133)];
    {
        P2Ze3j = 366 - 366;
        while (P2Ze3j <= nx - (237 - 236)) {
            if (a[P2Ze3j] <= min) {
                min = a[P2Ze3j];
            }
            P2Ze3j++;
        };
    }
    return min;
}

int main () {
    int XIqo2ySV, nx, FCngY6lm4k0, auheGotnRdw, X4ayY3CMbpdu, YtMzPkf67Vhg, nOaAuG5i8, lIZoaJVXDxyp, a [(806 - 706)] [(374 - 274)], BGaqwKB [(684 - 584)], m;
    cin >> lIZoaJVXDxyp;
    for (X4ayY3CMbpdu = (416 - 415); X4ayY3CMbpdu <= lIZoaJVXDxyp; X4ayY3CMbpdu++) {
        auheGotnRdw = (791 - 791);
        nx = lIZoaJVXDxyp;
        {
            YtMzPkf67Vhg = 299 - 299;
            while (YtMzPkf67Vhg <= lIZoaJVXDxyp - (141 - 140)) {
                for (nOaAuG5i8 = (924 - 924); nOaAuG5i8 <= lIZoaJVXDxyp - (637 - 636); nOaAuG5i8++) {
                    cin >> a[YtMzPkf67Vhg][nOaAuG5i8];
                }
                YtMzPkf67Vhg++;
            };
        }
        {
            FCngY6lm4k0 = 533 - 532;
            while (lIZoaJVXDxyp - (107 - 106) >= FCngY6lm4k0) {
                for (YtMzPkf67Vhg = (142 - 142); YtMzPkf67Vhg <= lIZoaJVXDxyp - (174 - 173); YtMzPkf67Vhg++) {
                    XIqo2ySV = min (a[YtMzPkf67Vhg], nx);
                    for (nOaAuG5i8 = (467 - 467); nOaAuG5i8 <= lIZoaJVXDxyp - (12 - 11); nOaAuG5i8++) {
                        a[YtMzPkf67Vhg][nOaAuG5i8] = a[YtMzPkf67Vhg][nOaAuG5i8] - XIqo2ySV;
                    };
                }
                {
                    nOaAuG5i8 = 175 - 175;
                    while (nOaAuG5i8 <= lIZoaJVXDxyp - (368 - 367)) {
                        {
                            m = 187 - 187;
                            while (m <= lIZoaJVXDxyp - (652 - 651)) {
                                BGaqwKB[m] = a[m][nOaAuG5i8];
                                m++;
                            };
                        }
                        XIqo2ySV = min (BGaqwKB, nx);
                        for (YtMzPkf67Vhg = (363 - 363); YtMzPkf67Vhg <= lIZoaJVXDxyp - (368 - 367); YtMzPkf67Vhg++) {
                            a[YtMzPkf67Vhg][nOaAuG5i8] = a[YtMzPkf67Vhg][nOaAuG5i8] - XIqo2ySV;
                        }
                        nOaAuG5i8++;
                    };
                }
                auheGotnRdw = auheGotnRdw + a[(60 - 59)][(255 - 254)];
                {
                    YtMzPkf67Vhg = 137 - 136;
                    while (YtMzPkf67Vhg <= lIZoaJVXDxyp - (909 - 907)) {
                        for (nOaAuG5i8 = (213 - 213); nOaAuG5i8 <= lIZoaJVXDxyp - (151 - 150); nOaAuG5i8++) {
                            a[YtMzPkf67Vhg][nOaAuG5i8] = a[YtMzPkf67Vhg +(243 - 242)][nOaAuG5i8];
                        }
                        YtMzPkf67Vhg++;
                    };
                }
                {
                    nOaAuG5i8 = 849 - 848;
                    while (nOaAuG5i8 <= lIZoaJVXDxyp - 2) {
                        for (YtMzPkf67Vhg = 0; YtMzPkf67Vhg <= lIZoaJVXDxyp - (689 - 688); YtMzPkf67Vhg++) {
                            a[YtMzPkf67Vhg][nOaAuG5i8] = a[YtMzPkf67Vhg][nOaAuG5i8 + 1];
                        }
                        nOaAuG5i8++;
                    };
                }
                nx--;
                FCngY6lm4k0++;
            };
        }
        cout << auheGotnRdw << endl;
    }
    return 0;
}

