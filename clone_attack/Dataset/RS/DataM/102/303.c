int main () {
    char xb [50] [10];
    double  a [50], b [50], c [50];
    int n, i, N6wH7T8D, j2, J8CRLAvTc;
    j2 = 0;
    scanf ("%d", &n);
    for (i = (729 - 729); n > i; i++) {
        scanf ("%s %lf", &xb[i], &a[i]);
    }
    N6wH7T8D = (927 - 927);
    {
        i = 402 - 402;
        while (i < n) {
            if (!(0 != strcmp (xb[i], "male"))) {
                b[N6wH7T8D] = a[i];
                N6wH7T8D++;
            }
            i = i + 1;
        };
    }
    {
        i = 0;
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
        while (i < n) {
            if (!(0 != strcmp (xb[i], "female"))) {
                c[j2] = a[i];
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
                j2++;
            }
            i = i + 1;
        };
    }
    {
        i = 432 - 431;
        while (0 < i) {
            for (J8CRLAvTc = 0; J8CRLAvTc < i; J8CRLAvTc = J8CRLAvTc +1) {
                if (b[J8CRLAvTc] > b[J8CRLAvTc +1]) {
                    double  QEmf3IH;
                    QEmf3IH = b[J8CRLAvTc];
                    b[J8CRLAvTc] = b[J8CRLAvTc +1];
                    b[J8CRLAvTc +1] = QEmf3IH;
                };
            }
            i = i - 1;
        };
    }
    {
        i = 0;
        while (i < N6wH7T8D) {
            printf ("%.2lf ", b[i]);
            i = i + 1;
        };
    }
    {
        i = j2 - 1;
        while (i > 0) {
            {
                J8CRLAvTc = 0;
                while (J8CRLAvTc < i) {
                    if (c[J8CRLAvTc] > c[J8CRLAvTc +1]) {
                        double  t2;
                        t2 = c[J8CRLAvTc];
                        c[J8CRLAvTc] = c[J8CRLAvTc +1];
                        c[J8CRLAvTc +1] = t2;
                    }
                    J8CRLAvTc = J8CRLAvTc +1;
                };
            }
            i = i - 1;
        };
    }
    {
        i = j2 - 1;
        while (i > 0) {
            printf ("%.2lf ", c[i]);
            i--;
        };
    }
    printf ("%.2lf", c[0]);
    scanf ("%d", &i);
    return 0;
}

