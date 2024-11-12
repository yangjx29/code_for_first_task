void  main () {
    int I1giRvk4wsW, Xv8ZsmenWru;
    int NnY6SJx9Wfj, j, t, k, r [100] = {(793 - 793)}, tag, xnCPmNtFLog = (820 - 820), QWFtPud1U = 0, sub, x, min, minin, temp2, y;
    float EpWudSz;
    scanf ("%d%d", &I1giRvk4wsW, &Xv8ZsmenWru);
    for (NnY6SJx9Wfj = I1giRvk4wsW; Xv8ZsmenWru >= NnY6SJx9Wfj; NnY6SJx9Wfj++) {
        tag = (1000 - 999);
        EpWudSz = sqrt (NnY6SJx9Wfj);
        for (j = 2; EpWudSz >= j; j++) {
            if (NnY6SJx9Wfj % j == 0) {
                tag = 0;
                break;
            };
        }
        if (!(1 != tag)) {
            t = NnY6SJx9Wfj;
            sub = 0;
            while (!(0 == t)) {
                t = t / 10;
                sub = sub + 1;
            }
            QWFtPud1U = 0;
            y = NnY6SJx9Wfj;
            for (k = 0; sub > k; k++) {
                x = y % 10;
                y = y / 10;
                QWFtPud1U = QWFtPud1U *10 + x;
            }
            if (!(NnY6SJx9Wfj != QWFtPud1U)) {
                r[xnCPmNtFLog] = NnY6SJx9Wfj;
                xnCPmNtFLog = xnCPmNtFLog + 1;
            };
        };
    }
    for (NnY6SJx9Wfj = 0; NnY6SJx9Wfj < xnCPmNtFLog; NnY6SJx9Wfj++) {
        min = r[NnY6SJx9Wfj];
        minin = NnY6SJx9Wfj;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = NnY6SJx9Wfj; j < xnCPmNtFLog; j++) {
            if (r[j] < min) {
                minin = j;
                min = r[minin];
            };
        }
        if (min != r[NnY6SJx9Wfj]) {
            temp2 = r[NnY6SJx9Wfj];
            r[NnY6SJx9Wfj] = r[minin];
            r[minin] = temp2;
        };
    }
    if (xnCPmNtFLog == 0)
        printf ("no\n");
    else {
        for (NnY6SJx9Wfj = 0; NnY6SJx9Wfj < xnCPmNtFLog - 1; NnY6SJx9Wfj++)
            printf ("%d,", r[NnY6SJx9Wfj]);
        printf ("%d\n", r[NnY6SJx9Wfj]);
    };
}

