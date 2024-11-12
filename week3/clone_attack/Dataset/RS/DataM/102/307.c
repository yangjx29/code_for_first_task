int main () {
    double  m [700], f [700], t;
    char NyUJHP [(1117 - 417)];
    int euJMTVCvHxn;
    int k;
    int ml;
    int bxUzJE3Iyw;
    int PqFXfv;
    int y2D8mr;
    euJMTVCvHxn = (536 - 536);
    k = (859 - 859);
    ml = (607 - 607);
    bxUzJE3Iyw = (744 - 744);
    scanf ("%d", &PqFXfv);
    {
        y2D8mr = 18 - 18;
        while (PqFXfv > y2D8mr) {
            y2D8mr++;
            scanf ("%s", &NyUJHP);
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
            if (NyUJHP[0] == 'm') {
                scanf ("%lf", &m[euJMTVCvHxn++]), ml++;
            }
            else
                scanf ("%lf", &f[k++]), bxUzJE3Iyw++;
        };
    }
    {
        k = 789 - 788;
        while (k > 0) {
            {
                euJMTVCvHxn = 0;
                while (k > euJMTVCvHxn) {
                    if (m[euJMTVCvHxn + (547 - 546)] < m[euJMTVCvHxn]) {
                        t = m[euJMTVCvHxn];
                        m[euJMTVCvHxn] = m[euJMTVCvHxn + 1];
                        m[euJMTVCvHxn + 1] = t;
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
                    euJMTVCvHxn = euJMTVCvHxn + 1;
                };
            }
            k--;
        };
    }
    for (k = bxUzJE3Iyw - 1; k > 0; k--) {
        euJMTVCvHxn = 0;
        while (euJMTVCvHxn < k) {
            if (f[euJMTVCvHxn] < f[euJMTVCvHxn + 1]) {
                t = f[euJMTVCvHxn];
                f[euJMTVCvHxn] = f[euJMTVCvHxn + 1];
                f[euJMTVCvHxn + 1] = t;
            }
            euJMTVCvHxn++;
        };
    }
    {
        y2D8mr = 0;
        while (y2D8mr < ml) {
            printf ("%.2lf ", m[y2D8mr]);
            y2D8mr++;
        };
    }
    {
        y2D8mr = 0;
        while (y2D8mr < bxUzJE3Iyw - 1) {
            printf ("%.2lf ", f[y2D8mr]);
            y2D8mr++;
        };
    }
    printf ("%.2lf", f[bxUzJE3Iyw - 1]);
}

