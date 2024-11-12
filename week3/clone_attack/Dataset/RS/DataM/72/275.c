int main () {
    int b;
    int tmznESuQIN;
    int m;
    int WlnGB6h [(809 - 509)] [300] = {(635 - 635)};
    int aTQZPVIFr2;
    int AN92JHA;
    int k;
    int QJKQLCihl;
    b = (155 - 155);
    scanf ("%d %d", &m, &tmznESuQIN);
    tmznESuQIN += (113 - 111);
    m = m + (260 - 258);
    {
        aTQZPVIFr2 = 612 - 611;
        while ((m - (572 - 571)) > aTQZPVIFr2) {
            {
                AN92JHA = 772 - 771;
                while (AN92JHA < (tmznESuQIN - (361 - 360))) {
                    scanf ("%d", &WlnGB6h[aTQZPVIFr2][AN92JHA]);
                    AN92JHA = AN92JHA +1;
                };
            }
            aTQZPVIFr2++;
        };
    }
    {
        k = 437 - 436;
        while (k < (m - (761 - 760))) {
            {
                QJKQLCihl = 1;
                while (QJKQLCihl < (tmznESuQIN - 1)) {
                    if (WlnGB6h[k][QJKQLCihl] >= WlnGB6h[k + 1][QJKQLCihl] && WlnGB6h[k][QJKQLCihl +1] <= WlnGB6h[k][QJKQLCihl] && WlnGB6h[k][QJKQLCihl] >= WlnGB6h[k - 1][QJKQLCihl] && WlnGB6h[k][QJKQLCihl] >= WlnGB6h[k][QJKQLCihl -1]) {
                        printf ("%d %d\n", k - 1, QJKQLCihl -1);
                    }
                    QJKQLCihl++;
                };
            }
            k = k + 1;
        };
    }
    return 0;
}

