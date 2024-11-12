int riZj4K58tXa (int (*wpzaRCSVwcO) [(983 - 978)], int WMDlCYJ, int wZQxSnR1k9X) {
    int Cfw4u5;
    int oqnO9Kkz4c;
    int OTbt0rLz;
    if (wZQxSnR1k9X < (362 - 362) || 4 < wZQxSnR1k9X || WMDlCYJ < (593 - 593) || 4 < WMDlCYJ)
        Cfw4u5 = 0;
    else {
        for (oqnO9Kkz4c = 0; oqnO9Kkz4c < (141 - 136); oqnO9Kkz4c = oqnO9Kkz4c + 1) {
            OTbt0rLz = *(*(wpzaRCSVwcO + wZQxSnR1k9X) + oqnO9Kkz4c);
            *(*(wpzaRCSVwcO + wZQxSnR1k9X) + oqnO9Kkz4c) = *(*(wpzaRCSVwcO + WMDlCYJ) + oqnO9Kkz4c);
            *(*(wpzaRCSVwcO + WMDlCYJ) + oqnO9Kkz4c) = OTbt0rLz;
        }
        Cfw4u5 = 1;
    }
    return Cfw4u5;
}

int main () {
    int wpzaRCSVwcO [(809 - 804)] [(733 - 728)], oqnO9Kkz4c, qqWmPsvEGLtT, (*BW5XizscC) [5], WMDlCYJ, wZQxSnR1k9X, Cfw4u5;
    BW5XizscC = wpzaRCSVwcO;
    {
        oqnO9Kkz4c = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (5 > oqnO9Kkz4c) {
            {
                qqWmPsvEGLtT = 0;
                while (qqWmPsvEGLtT < 5) {
                    scanf ("%d", wpzaRCSVwcO[oqnO9Kkz4c] + qqWmPsvEGLtT);
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
                    qqWmPsvEGLtT = qqWmPsvEGLtT + 1;
                };
            }
            oqnO9Kkz4c = oqnO9Kkz4c + 1;
        };
    }
    scanf ("%d %d", &WMDlCYJ, &wZQxSnR1k9X);
    Cfw4u5 = riZj4K58tXa (BW5XizscC, WMDlCYJ, wZQxSnR1k9X);
    if (Cfw4u5) {
        oqnO9Kkz4c = 0;
        while (oqnO9Kkz4c < 5) {
            printf ("%d", wpzaRCSVwcO[oqnO9Kkz4c][0]);
            {
                qqWmPsvEGLtT = 1;
                while (qqWmPsvEGLtT < 5) {
                    printf (" %d", wpzaRCSVwcO[oqnO9Kkz4c][qqWmPsvEGLtT]);
                    qqWmPsvEGLtT++;
                };
            }
            oqnO9Kkz4c = oqnO9Kkz4c + 1;
        };
    }
    else
        ;
    return 0;
}

