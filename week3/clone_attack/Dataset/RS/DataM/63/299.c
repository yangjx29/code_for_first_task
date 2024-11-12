int main () {
    int a [(336 - 236)] [(541 - 441)];
    int b [(711 - 611)] [(556 - 456)];
    int imjtiUs [(906 - 806)] [100] = {(648 - 648)};
    int QSVsNGY1;
    int JlqdQHtTR4;
    int bZdczCRO7q;
    int hlT3Xg;
    int u0E3PcKU;
    int b1;
    int kFukShx;
    int K1NJORnEXC;
    int YE95I1;
    cin >> hlT3Xg >> u0E3PcKU;
    for (QSVsNGY1 = (275 - 275); hlT3Xg > QSVsNGY1; QSVsNGY1++) {
        JlqdQHtTR4 = 185 - 185;
        while (JlqdQHtTR4 < u0E3PcKU) {
            cin >> a[QSVsNGY1][JlqdQHtTR4];
            JlqdQHtTR4 = JlqdQHtTR4 +1;
        };
    }
    cin >> b1 >> kFukShx;
    {
        QSVsNGY1 = 113 - 113;
        while (QSVsNGY1 < b1) {
            {
                JlqdQHtTR4 = 122 - 122;
                while (kFukShx > JlqdQHtTR4) {
                    cin >> b[QSVsNGY1][JlqdQHtTR4];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    JlqdQHtTR4++;
                };
            }
            QSVsNGY1 = QSVsNGY1 +1;
        };
    }
    YE95I1 = kFukShx;
    K1NJORnEXC = hlT3Xg;
    {
        QSVsNGY1 = 0;
        while (QSVsNGY1 < K1NJORnEXC) {
            for (JlqdQHtTR4 = 0; JlqdQHtTR4 < YE95I1; JlqdQHtTR4++) {
                bZdczCRO7q = 0;
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
                while (bZdczCRO7q < u0E3PcKU) {
                    imjtiUs[QSVsNGY1][JlqdQHtTR4] = imjtiUs[QSVsNGY1][JlqdQHtTR4] + a[QSVsNGY1][bZdczCRO7q] * b[bZdczCRO7q][JlqdQHtTR4];
                    bZdczCRO7q++;
                };
            }
            QSVsNGY1++;
        };
    }
    {
        QSVsNGY1 = 0;
        while (QSVsNGY1 < K1NJORnEXC) {
            {
                JlqdQHtTR4 = 0;
                while (JlqdQHtTR4 < YE95I1) {
                    printf ("%d", imjtiUs[QSVsNGY1][JlqdQHtTR4]);
                    if (JlqdQHtTR4 == YE95I1 -(370 - 369))
                        printf ("\n");
                    else
                        printf (" ");
                    JlqdQHtTR4++;
                };
            }
            QSVsNGY1++;
        };
    }
    return 0;
}

