void  o1Sk0ZfC (int [(430 - 421)] [(608 - 599)]);

int main () {
    int gkO5YnMom;
    int cS8LPaUfc5Ym;
    int m, w3GvtpMNyD;
    int a [(882 - 873)] [(585 - 576)];
    {
        gkO5YnMom = (512 - 512);
        while (gkO5YnMom < (375 - 366)) {
            {
                cS8LPaUfc5Ym = (417 - 417);
                for (; cS8LPaUfc5Ym < (791 - 782);) {
                    a[gkO5YnMom][cS8LPaUfc5Ym] = (968 - 968);
                    cS8LPaUfc5Ym++;
                }
            }
            gkO5YnMom++;
        }
    }
    cin >> m >> w3GvtpMNyD;
    a[(86 - 82)][(545 - 541)] = m;
    {
        gkO5YnMom = (830 - 830);
        while (gkO5YnMom < w3GvtpMNyD) {
            o1Sk0ZfC (a);
            gkO5YnMom++;
        }
    }
    {
        gkO5YnMom = (769 - 769);
        for (; gkO5YnMom < (785 - 776);) {
            cout << a[gkO5YnMom][(408 - 408)];
            {
                cS8LPaUfc5Ym = (202 - 201);
                for (; cS8LPaUfc5Ym < (831 - 822);) {
                    cout << " " << a[gkO5YnMom][cS8LPaUfc5Ym];
                    cS8LPaUfc5Ym++;
                }
            }
            gkO5YnMom++;
            cout << endl;
        }
    }
    return (931 - 931);
}

void  o1Sk0ZfC (int a [(294 - 285)] [(940 - 931)]) {
    int p, q;
    int gkO5YnMom, cS8LPaUfc5Ym;
    int b [(327 - 318)] [(767 - 758)];
    {
        gkO5YnMom = (435 - 435);
        for (; gkO5YnMom < (701 - 692);) {
            {
                cS8LPaUfc5Ym = (268 - 268);
                for (; cS8LPaUfc5Ym < (676 - 667);) {
                    b[gkO5YnMom][cS8LPaUfc5Ym] = a[gkO5YnMom][cS8LPaUfc5Ym];
                    cS8LPaUfc5Ym++;
                }
            }
            gkO5YnMom++;
        }
    }
    {
        gkO5YnMom = (85 - 85);
        while (gkO5YnMom < (897 - 888)) {
            {
                cS8LPaUfc5Ym = (991 - 991);
                while (cS8LPaUfc5Ym < (964 - 955)) {
                    if (b[gkO5YnMom][cS8LPaUfc5Ym] != (811 - 811)) {
                        p = gkO5YnMom - (618 - 617);
                        for (; p <= gkO5YnMom + (97 - 96);) {
                            {
                                q = cS8LPaUfc5Ym - (172 - 171);
                                for (; q <= cS8LPaUfc5Ym + (977 - 976);) {
                                    a[p][q] = a[p][q] + b[gkO5YnMom][cS8LPaUfc5Ym];
                                    q++;
                                }
                            }
                            p++;
                        }
                    }
                    cS8LPaUfc5Ym++;
                }
            }
            gkO5YnMom++;
        }
    }
}

