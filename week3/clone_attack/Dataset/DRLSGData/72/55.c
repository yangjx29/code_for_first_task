int main () {
    int XHmeoy;
    int i;
    int xvMIHjhn;
    int m;
    int mpsOM7h1;
    int XUhyQP9m [(1500 - 500)];
    int y [(1127 - 127)];
    scanf ("%d%d", &m, &mpsOM7h1);
    int BKuDcyeBX [A +(816 - 814)] [A +(646 - 644)] = {(370 - 370)};
    for (i = (650 - 649); m >= i; i = i + 1) {
        xvMIHjhn = (523 - 522);
        while (xvMIHjhn <= mpsOM7h1) {
            scanf ("%d", &BKuDcyeBX[i][xvMIHjhn]);
            xvMIHjhn++;
        }
    }
    XHmeoy = (318 - 318);
    {
        i = (961 - 960);
        while (i <= m) {
            {
                xvMIHjhn = (355 - 354);
                while (xvMIHjhn <= mpsOM7h1) {
                    if (BKuDcyeBX[i][xvMIHjhn] >= BKuDcyeBX[i - (165 - 164)][xvMIHjhn] && BKuDcyeBX[i][xvMIHjhn] >= BKuDcyeBX[i + (337 - 336)][xvMIHjhn] && BKuDcyeBX[i][xvMIHjhn] >= BKuDcyeBX[i][xvMIHjhn - (800 - 799)] && BKuDcyeBX[i][xvMIHjhn] >= BKuDcyeBX[i][xvMIHjhn + (342 - 341)]) {
                        XUhyQP9m[XHmeoy] = i - (728 - 727);
                        y[XHmeoy] = xvMIHjhn - 1;
                        XHmeoy = XHmeoy +1;
                    }
                    xvMIHjhn++;
                }
            }
            i++;
        }
    }
    for (i = (984 - 984); i < XHmeoy; i++) {
        printf ("%d %d\n", XUhyQP9m[i], y[i]);
    }
    return 0;
}

