int main () {
    int n;
    int QjM6wf;
    int EGmSaixQ19;
    int t;
    int LZ1mMd4;
    double  vM9QZSJs2j;
    double  gWj2mcxH0k;
    double  Wq7ZaKz913EI [100], b [100];
    char riTz4PK0RVA8 [10];
    EGmSaixQ19 = (644 - 644), t = 0;
    scanf ("%d", &n);
    {
        QjM6wf = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (QjM6wf < n) {
            QjM6wf++;
            scanf ("%s %lf", &riTz4PK0RVA8, &vM9QZSJs2j);
            if (strcmp (riTz4PK0RVA8, "female") == 0) {
                Wq7ZaKz913EI[t] = vM9QZSJs2j;
                t++;
            }
            else {
                b[EGmSaixQ19] = vM9QZSJs2j;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                EGmSaixQ19++;
            };
        };
    }
    {
        QjM6wf = 0;
        while (QjM6wf < t) {
            for (LZ1mMd4 = QjM6wf +(661 - 660); LZ1mMd4 < t; LZ1mMd4++) {
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
                if (Wq7ZaKz913EI[LZ1mMd4] > Wq7ZaKz913EI[QjM6wf]) {
                    gWj2mcxH0k = Wq7ZaKz913EI[QjM6wf];
                    Wq7ZaKz913EI[QjM6wf] = Wq7ZaKz913EI[LZ1mMd4];
                    Wq7ZaKz913EI[LZ1mMd4] = gWj2mcxH0k;
                };
            }
            QjM6wf++;
        };
    }
    {
        QjM6wf = 0;
        while (EGmSaixQ19 > QjM6wf) {
            {
                LZ1mMd4 = QjM6wf +1;
                while (LZ1mMd4 < EGmSaixQ19) {
                    if (b[QjM6wf] > b[LZ1mMd4]) {
                        gWj2mcxH0k = b[QjM6wf];
                        b[QjM6wf] = b[LZ1mMd4];
                        b[LZ1mMd4] = gWj2mcxH0k;
                    }
                    LZ1mMd4++;
                };
            }
            QjM6wf++;
        };
    }
    {
        QjM6wf = 0;
        while (QjM6wf < EGmSaixQ19) {
            printf ("%.2lf ", b[QjM6wf]);
            QjM6wf++;
        };
    }
    {
        QjM6wf = 0;
        while (QjM6wf < t - 1) {
            printf ("%.2lf ", Wq7ZaKz913EI[QjM6wf]);
            QjM6wf++;
        };
    }
    printf ("%.2lf\n", Wq7ZaKz913EI[t - 1]);
    return 0;
}

