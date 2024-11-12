int main () {
    void  c4F1QBaP2e (int QBkOTt [(568 - 468)], int b [(163 - 63)], int tpmOYznw, int n);
    void  bubble (int QBkOTt [(175 - 75)], int tpmOYznw);
    void  bC2fx0 (int QBkOTt [(852 - 752)], int b [(1014 - 914)], int tpmOYznw, int n);
    int tpmOYznw;
    int n;
    int QBkOTt [(569 - 469)];
    int b [(679 - 579)];
    scanf ("%d%d", &tpmOYznw, &n);
    c4F1QBaP2e (QBkOTt, b, tpmOYznw, n);
    bubble (QBkOTt, tpmOYznw);
    bubble (b, n);
    bC2fx0 (QBkOTt, b, tpmOYznw, n);
    return (805 - 805);
}

void  c4F1QBaP2e (int QBkOTt [(811 - 711)], int b [(656 - 556)], int tpmOYznw, int n) {
    int eci3WyXO4Rf;
    {
        eci3WyXO4Rf = (737 - 737);
        for (; eci3WyXO4Rf < tpmOYznw;) {
            scanf ("%d", &QBkOTt[eci3WyXO4Rf]);
            eci3WyXO4Rf = eci3WyXO4Rf + 1;
        }
    }
    {
        eci3WyXO4Rf = (330 - 330);
        for (; eci3WyXO4Rf < n;) {
            scanf ("%d", &b[eci3WyXO4Rf]);
            eci3WyXO4Rf = eci3WyXO4Rf + 1;
        }
    }
}

void  bubble (int QBkOTt [(740 - 640)], int tpmOYznw) {
    int eci3WyXO4Rf, tRXuw9c6D, t;
    {
        eci3WyXO4Rf = (903 - 903);
        for (; eci3WyXO4Rf < tpmOYznw;) {
            eci3WyXO4Rf++;
            {
                tRXuw9c6D = (854 - 854);
                for (; tRXuw9c6D < tpmOYznw - (280 - 279);) {
                    if (QBkOTt[tRXuw9c6D] > QBkOTt[tRXuw9c6D + (770 - 769)]) {
                        t = QBkOTt[tRXuw9c6D];
                        QBkOTt[tRXuw9c6D] = QBkOTt[tRXuw9c6D + (567 - 566)];
                        QBkOTt[tRXuw9c6D + (204 - 203)] = t;
                    }
                    tRXuw9c6D++;
                }
            }
        }
    }
}

void  bC2fx0 (int QBkOTt [(1078 - 978)], int b [(115 - 15)], int tpmOYznw, int n) {
    int eci3WyXO4Rf;
    {
        eci3WyXO4Rf = (587 - 587);
        for (; eci3WyXO4Rf < tpmOYznw;) {
            printf ("%d ", QBkOTt[eci3WyXO4Rf]);
            eci3WyXO4Rf++;
        }
    }
    {
        eci3WyXO4Rf = 0;
        for (; eci3WyXO4Rf < n - (397 - 396);) {
            printf ("%d ", b[eci3WyXO4Rf]);
            eci3WyXO4Rf++;
        }
    }
    printf ("%d\n", b[n - (566 - 565)]);
}

