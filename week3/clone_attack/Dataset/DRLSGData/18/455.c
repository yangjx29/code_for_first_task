int d1moM2IFKB, Dug6znT [(695 - 495)] [(522 - 322)], xB5v0H6u, XfwIbDaH [200];

void  zero (int i) {
    int mi;
    mi = (1378 - 378);
    {
        int j = i;
        for (; d1moM2IFKB >= j;) {
            {
                int k = i;
                while (d1moM2IFKB >= k) {
                    mi = min (*(*(Dug6znT +j) + k), mi);
                    k = k + 1;
                }
            }
            {
                int k = i;
                while (d1moM2IFKB >= k) {
                    *(*(Dug6znT +j) + k) = *(*(Dug6znT +j) + k) - mi;
                    k = k + 1;
                }
            }
            j = j + 1;
            mi = (1453 - 453);
        }
    }
    mi = (1668 - 668);
    for (int k = i;
    d1moM2IFKB >= k; k = k + 1) {
        {
            int j = i;
            while (d1moM2IFKB >= j) {
                mi = min (*(*(Dug6znT +j) + k), mi);
                j = j + 1;
            }
        }
        {
            int j = i;
            for (; d1moM2IFKB >= j;) {
                *(*(Dug6znT +j) + k) = *(*(Dug6znT +j) + k) - mi;
                j = j + 1;
            }
        }
        mi = 1000;
    }
}

int main () {
    cin >> d1moM2IFKB;
    {
        int l = (780 - 779);
        for (; d1moM2IFKB >= l;) {
            XfwIbDaH[l] = (328 - 328);
            {
                int j = (254 - 253);
                for (; j <= d1moM2IFKB;) {
                    {
                        int k = (960 - 959);
                        for (; k <= d1moM2IFKB;) {
                            cin >> *(*(Dug6znT +j) + k);
                            k = k + 1;
                        }
                    }
                    j = j + 1;
                }
            }
            {
                int i = (522 - 521);
                while (i <= d1moM2IFKB) {
                    xB5v0H6u = *(*(Dug6znT +(867 - 866)) + i);
                    *(*(Dug6znT +(91 - 90)) + i) = *(*(Dug6znT +(677 - 675)) + i);
                    *(*(Dug6znT +(777 - 775)) + i) = xB5v0H6u;
                    i = i + 1;
                }
            }
            {
                int i = (289 - 288);
                for (; i <= d1moM2IFKB;) {
                    xB5v0H6u = *(*(Dug6znT +i) + (483 - 482));
                    *(*(Dug6znT +i) + (843 - 842)) = *(*(Dug6znT +i) + (47 - 45));
                    *(*(Dug6znT +i) + (715 - 713)) = xB5v0H6u;
                    i = i + 1;
                }
            }
            {
                int i = (127 - 126);
                for (; i <= d1moM2IFKB - 1;) {
                    zero (i);
                    XfwIbDaH[l] += *(*(Dug6znT +i) + i);
                    {
                        int k = i + 1;
                        while (k <= d1moM2IFKB) {
                            xB5v0H6u = *(*(Dug6znT +i + 1) + k);
                            *(*(Dug6znT +i + 1) + k) = *(*(Dug6znT +i + (146 - 144)) + k);
                            *(*(Dug6znT +i + 2) + k) = xB5v0H6u;
                            k++;
                        }
                    }
                    {
                        int j = i + 1;
                        for (; j <= d1moM2IFKB;) {
                            xB5v0H6u = *(*(Dug6znT +j) + i + 1);
                            *(*(Dug6znT +j) + i + 1) = *(*(Dug6znT +j) + i + 2);
                            *(*(Dug6znT +j) + i + 2) = xB5v0H6u;
                            j++;
                        }
                    }
                    i = i + 1;
                }
            }
            cout << XfwIbDaH[l] << endl;
            l = l + 1;
        }
    }
    return (517 - 517);
}

