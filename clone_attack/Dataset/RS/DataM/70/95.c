int main () {
    int WyOIGRF0n;
    int pCgF1aX;
    int QCsJdq;
    double  m = 0, l, oYqH3X0;
    struct   lJseT0HnIk {
        double  TdVPHhc;
        double  UpeO9jqznGT;
    }
    lJseT0HnIk [100];
    scanf ("%d", &WyOIGRF0n);
    {
        pCgF1aX = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (pCgF1aX < WyOIGRF0n) {
            scanf ("%lf%lf", &lJseT0HnIk[pCgF1aX].TdVPHhc, &lJseT0HnIk[pCgF1aX].UpeO9jqznGT);
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
            pCgF1aX = pCgF1aX + 1;
        };
    }
    for (pCgF1aX = 1; pCgF1aX < WyOIGRF0n; pCgF1aX = pCgF1aX + 1) {
        QCsJdq = 0;
        while (pCgF1aX > QCsJdq) {
            l = (lJseT0HnIk[pCgF1aX].TdVPHhc - lJseT0HnIk[QCsJdq].TdVPHhc) * (lJseT0HnIk[pCgF1aX].TdVPHhc - lJseT0HnIk[QCsJdq].TdVPHhc) + (lJseT0HnIk[pCgF1aX].UpeO9jqznGT - lJseT0HnIk[QCsJdq].UpeO9jqznGT) * (lJseT0HnIk[pCgF1aX].UpeO9jqznGT - lJseT0HnIk[QCsJdq].UpeO9jqznGT);
            QCsJdq = QCsJdq +1;
            if (l > m)
                m = l;
        };
    }
    oYqH3X0 = sqrt (m);
    printf ("%.4lf\n", oYqH3X0);
    return 0;
}

