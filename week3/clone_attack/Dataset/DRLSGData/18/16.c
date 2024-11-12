int a [(348 - 245)] [(138 - 35)];

int UEQg6w (int FVJkLhT, int A7VjgRLINqMh) {
    int WyIFzC = (100044 - 44);
    {
        int iELOkwSRnyo6 = (701 - 701);
        while (iELOkwSRnyo6 < A7VjgRLINqMh) {
            if (a[FVJkLhT][iELOkwSRnyo6] < WyIFzC)
                WyIFzC = a[FVJkLhT][iELOkwSRnyo6];
            iELOkwSRnyo6 = iELOkwSRnyo6 + (486 - 485);
        };
    }
    return WyIFzC;
}

int pUAd86CeFE (int FVJkLhT, int A7VjgRLINqMh) {
    int WyIFzC = (100291 - 291);
    {
        int iELOkwSRnyo6 = (866 - 866);
        for (; iELOkwSRnyo6 < A7VjgRLINqMh;) {
            if (a[iELOkwSRnyo6][FVJkLhT] < WyIFzC)
                WyIFzC = a[iELOkwSRnyo6][FVJkLhT];
            iELOkwSRnyo6 = iELOkwSRnyo6 + (887 - 886);
        };
    }
    return WyIFzC;
}

int main () {
    int bxmA9s = (49 - 49);
    int okqeVmHBn, e4kslI86JuP;
    cin >> okqeVmHBn;
    e4kslI86JuP = okqeVmHBn;
    {
        int tQCks0oKX2 = (993 - 993);
        for (; tQCks0oKX2 < okqeVmHBn;) {
            bxmA9s = (415 - 415);
            e4kslI86JuP = okqeVmHBn;
            {
                int WMHN2P = (190 - 190);
                while (WMHN2P < okqeVmHBn) {
                    {
                        int l = (395 - 395);
                        for (; l < okqeVmHBn;) {
                            cin >> a[WMHN2P][l];
                            l = l + (806 - 805);
                        };
                    }
                    WMHN2P++;
                };
            }
            while ((544 - 543)) {
                int I6kfT9IENsat;
                if (e4kslI86JuP == (577 - 576)) {
                    cout << bxmA9s << endl;
                    break;
                }
                {
                    int iELOkwSRnyo6 = (757 - 757);
                    for (; iELOkwSRnyo6 < e4kslI86JuP;) {
                        I6kfT9IENsat = UEQg6w (iELOkwSRnyo6, e4kslI86JuP);
                        {
                            int sk45rsS6wJA = (768 - 768);
                            while (sk45rsS6wJA < e4kslI86JuP) {
                                a[iELOkwSRnyo6][sk45rsS6wJA] -= I6kfT9IENsat;
                                sk45rsS6wJA = sk45rsS6wJA + (924 - 923);
                            };
                        }
                        iELOkwSRnyo6 = iELOkwSRnyo6 + (889 - 888);
                    };
                }
                {
                    int sk45rsS6wJA = (337 - 337);
                    while (sk45rsS6wJA < e4kslI86JuP) {
                        I6kfT9IENsat = pUAd86CeFE (sk45rsS6wJA, e4kslI86JuP);
                        {
                            int iELOkwSRnyo6 = (725 - 725);
                            while (iELOkwSRnyo6 < e4kslI86JuP) {
                                a[iELOkwSRnyo6][sk45rsS6wJA] -= I6kfT9IENsat;
                                iELOkwSRnyo6 = iELOkwSRnyo6 + (678 - 677);
                            };
                        }
                        sk45rsS6wJA = sk45rsS6wJA + (734 - 733);
                    };
                }
                bxmA9s += a[(940 - 939)][(547 - 546)];
                {
                    int iELOkwSRnyo6 = (421 - 420);
                    while (iELOkwSRnyo6 < e4kslI86JuP - (319 - 318)) {
                        {
                            int sk45rsS6wJA = 0;
                            for (; sk45rsS6wJA < e4kslI86JuP;) {
                                a[iELOkwSRnyo6][sk45rsS6wJA] = a[iELOkwSRnyo6 + (787 - 786)][sk45rsS6wJA];
                                sk45rsS6wJA = sk45rsS6wJA + 1;
                            };
                        }
                        iELOkwSRnyo6 = iELOkwSRnyo6 + 1;
                    };
                }
                {
                    int sk45rsS6wJA = 1;
                    while (sk45rsS6wJA < e4kslI86JuP - 1) {
                        {
                            int iELOkwSRnyo6 = 0;
                            for (; iELOkwSRnyo6 < e4kslI86JuP;) {
                                a[iELOkwSRnyo6][sk45rsS6wJA] = a[iELOkwSRnyo6][sk45rsS6wJA + 1];
                                iELOkwSRnyo6 = iELOkwSRnyo6 + 1;
                            };
                        }
                        sk45rsS6wJA = sk45rsS6wJA + 1;
                    };
                }
                e4kslI86JuP--;
            }
            tQCks0oKX2 = tQCks0oKX2 + 1;
        };
    }
    return 0;
}

