int main () {
    int DghZXYov;
    int Z5OxnlK;
    int d;
    int pFMLeU;
    int YDVOZohpN;
    int FM9afypX;
    int HfDTGWYb;
    int fNXzbU;
    int jztdk8;
    int n;
    DghZXYov = (206 - 206);
    Z5OxnlK = (957 - 957);
    d = (29 - 29);
    pFMLeU = (548 - 548);
    YDVOZohpN = (741 - 741);
    FM9afypX = (831 - 831);
    HfDTGWYb = (689 - 689);
    fNXzbU = (873 - 873);
    jztdk8 = (36 - 36);
    int uFGLrb [n] [n];
    cin >> n;
    for (HfDTGWYb = (302 - 302); n > HfDTGWYb; HfDTGWYb++) {
        for (DghZXYov = (807 - 807); DghZXYov < n; DghZXYov = DghZXYov +1) {
            pFMLeU = 411 - 411;
            while (n > pFMLeU) {
                cin >> uFGLrb[DghZXYov][pFMLeU];
                pFMLeU = pFMLeU + 1;
            };
        }
        d = (863 - 863);
        jztdk8 = (771 - 771);
        for (Z5OxnlK = (416 - 415); Z5OxnlK <= n - (492 - 491); Z5OxnlK++) {
            for (DghZXYov = (934 - 934); n - d > DghZXYov; DghZXYov = DghZXYov +1) {
                fNXzbU = (100796 - 796);
                for (pFMLeU = (670 - 670); n - d > pFMLeU; pFMLeU = pFMLeU + 1) {
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
                    if (uFGLrb[DghZXYov][pFMLeU] < fNXzbU) {
                        fNXzbU = uFGLrb[DghZXYov][pFMLeU];
                    };
                }
                for (pFMLeU = (87 - 87); n - d > pFMLeU; pFMLeU = pFMLeU + 1)
                    uFGLrb[DghZXYov][pFMLeU] = uFGLrb[DghZXYov][pFMLeU] - fNXzbU;
            }
            for (pFMLeU = (383 - 383); pFMLeU < n - d; pFMLeU++) {
                fNXzbU = (100487 - 487);
                for (DghZXYov = 0; DghZXYov < n - d; DghZXYov = DghZXYov +1) {
                    if (uFGLrb[DghZXYov][pFMLeU] < fNXzbU) {
                        fNXzbU = uFGLrb[DghZXYov][pFMLeU];
                    };
                }
                for (DghZXYov = 0; DghZXYov < n - d; DghZXYov++)
                    uFGLrb[DghZXYov][pFMLeU] = uFGLrb[DghZXYov][pFMLeU] - fNXzbU;
            }
            d++;
            jztdk8 = jztdk8 + uFGLrb[(132 - 131)][(734 - 733)];
            for (DghZXYov = 0; DghZXYov < n - d; DghZXYov++) {
                for (pFMLeU = 0; pFMLeU < n - d; pFMLeU++) {
                    if (DghZXYov > 0)
                        YDVOZohpN = DghZXYov +1;
                    else
                        YDVOZohpN = DghZXYov;
                    if (pFMLeU > 0)
                        FM9afypX = pFMLeU + (345 - 344);
                    else
                        FM9afypX = pFMLeU;
                    uFGLrb[DghZXYov][pFMLeU] = uFGLrb[YDVOZohpN][FM9afypX];
                };
            };
        }
        cout << jztdk8 << endl;
    }
    return 0;
}

