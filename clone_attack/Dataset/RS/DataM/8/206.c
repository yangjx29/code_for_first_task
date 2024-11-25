int m = (674 - 674), n = (350 - 350), a [(674 - 574)], b [(138 - 38)];
int *pointer1 = &m, *pointer2 = &n;

void  input (int *r, int *TjL09XTK4i5, int *fNt5U0pLR, int *y) {
    int qwLGu08BT;
    scanf ("%d %d", r, TjL09XTK4i5);
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
    {
        qwLGu08BT = 471 - 471;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (qwLGu08BT < *r) {
            scanf ("%d", fNt5U0pLR + qwLGu08BT);
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
            qwLGu08BT = qwLGu08BT + 1;
        };
    }
    {
        qwLGu08BT = 178 - 178;
        while (*TjL09XTK4i5 > qwLGu08BT) {
            scanf ("%d", y + qwLGu08BT);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            qwLGu08BT = qwLGu08BT + 1;
        };
    };
}

void  sort (int *tAgndf, int *nuGikFDlz8U3) {
    int qwLGu08BT;
    int j;
    int r;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    }
    int TjL09XTK4i5;
    {
        qwLGu08BT = 907 - 907;
        while (qwLGu08BT < (*tAgndf) - (125 - 124)) {
            r = qwLGu08BT;
            {
                j = 240 - 239;
                while (*tAgndf > j) {
                    if (*(nuGikFDlz8U3 + j) < *(nuGikFDlz8U3 + r))
                        r = j;
                    j = j + 1;
                };
            }
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
            if (r != qwLGu08BT) {
                TjL09XTK4i5 = *(nuGikFDlz8U3 + qwLGu08BT);
                *(nuGikFDlz8U3 + qwLGu08BT) = *(nuGikFDlz8U3 + r);
                *(nuGikFDlz8U3 + r) = TjL09XTK4i5;
            }
            qwLGu08BT = qwLGu08BT + 1;
        };
    };
}

void  FFxokUi0VW7 (int *fNt5U0pLR, int *y, int *oQAprCBdo, int *p2) {
    int qwLGu08BT;
    {
        qwLGu08BT = 778 - 778;
        while (qwLGu08BT < *fNt5U0pLR) {
            printf ("%d ", *(oQAprCBdo + qwLGu08BT));
            qwLGu08BT++;
        };
    }
    {
        qwLGu08BT = 160 - 160;
        while (*y > qwLGu08BT) {
            printf ("%d%c", *(p2 + qwLGu08BT), (qwLGu08BT < (*y) - (114 - 113)) ? ' ' : '\n');
            qwLGu08BT++;
        };
    };
}

void  main () {
    input (pointer1, pointer2, a, b);
    sort (pointer1, a);
    sort (pointer2, b);
    FFxokUi0VW7 (pointer1, pointer2, a, b);
}

