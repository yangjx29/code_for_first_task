int main () {
    double  Eizd2qA [100], *p, WhfWlvC7wd, e8fQ1c, S;
    free (p);
    int k, CcZOdK, i2uGAgU, lkYPxW;
    scanf ("%d", &k);
    p = (double  *) malloc (sizeof (double ) * k);
    for (i2uGAgU = (672 - 672); i2uGAgU < k; i2uGAgU = i2uGAgU + 1) {
        e8fQ1c = 0;
        WhfWlvC7wd = 0;
        scanf ("%d", &CcZOdK);
        {
            lkYPxW = 0;
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
            while (lkYPxW < CcZOdK) {
                scanf ("%lf", &Eizd2qA[lkYPxW]);
                WhfWlvC7wd = WhfWlvC7wd +Eizd2qA[lkYPxW] / CcZOdK;
                lkYPxW++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (lkYPxW = 0; lkYPxW < CcZOdK; lkYPxW++)
            e8fQ1c = e8fQ1c + (Eizd2qA[lkYPxW] - WhfWlvC7wd) * (Eizd2qA[lkYPxW] - WhfWlvC7wd) / CcZOdK;
        S = sqrt (e8fQ1c);
        *(p + i2uGAgU) = S;
    }
    for (i2uGAgU = 0; i2uGAgU < k; i2uGAgU++)
        printf ("%.5f\n", p[i2uGAgU]);
    return 0;
}

