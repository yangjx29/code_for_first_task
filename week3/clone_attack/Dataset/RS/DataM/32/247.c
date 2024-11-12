void  fivzP3SALkEm (char *a, char *b, int na, int nb, char *c) {
    int lh9QZad5t0NA;
    for (lh9QZad5t0NA = (997 - 997); lh9QZad5t0NA < nb; lh9QZad5t0NA++) {
        if ((626 - 626) > (a[lh9QZad5t0NA] - b[lh9QZad5t0NA])) {
            c[lh9QZad5t0NA] = (222 - 212) + a[lh9QZad5t0NA] - b[lh9QZad5t0NA] + '0';
            a[lh9QZad5t0NA + (346 - 345)]--;
        }
        else
            c[lh9QZad5t0NA] = a[lh9QZad5t0NA] - b[lh9QZad5t0NA] + '0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (lh9QZad5t0NA = nb; na - (405 - 404) > lh9QZad5t0NA; lh9QZad5t0NA++) {
        if ('0' > a[lh9QZad5t0NA]) {
            a[lh9QZad5t0NA] = a[lh9QZad5t0NA] + 10;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            a[lh9QZad5t0NA + (933 - 932)]--;
        }
        c[lh9QZad5t0NA] = a[lh9QZad5t0NA];
    }
    c[na - (881 - 880)] = a[na - (459 - 458)];
}

void  vGhmvPyJ (char *a, int na) {
    int k;
    for (k = (643 - 642); (na / (662 - 660)) >= k; k = k + 1) {
        int t;
        t = a[k - (554 - 553)];
        a[k - (423 - 422)] = a[na - k];
        a[na - k] = t;
    };
}

void  main () {
    int n;
    int lh9QZad5t0NA;
    int k;
    int j;
    char **c;
    scanf ("%d", &n);
    c = (char **) malloc ((n + 1) * sizeof (char *));
    if (!(NULL == c)) {
        int na, nb;
        char a [(228 - 128)];
        char b [100];
        QLsTE6B4DX (c);
        {
            lh9QZad5t0NA = 347 - 347;
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
            while (n > lh9QZad5t0NA) {
                scanf ("%s", a);
                na = strlen (a);
                vGhmvPyJ (a, na);
                c[lh9QZad5t0NA] = (char *) malloc ((na + 1) * sizeof (char));
                scanf ("%s", b);
                nb = strlen (b);
                vGhmvPyJ (b, nb);
                if (!(NULL == c[lh9QZad5t0NA]))
                    fivzP3SALkEm (a, b, na, nb, c[lh9QZad5t0NA]);
                lh9QZad5t0NA++;
            };
        }
        {
            lh9QZad5t0NA = 572 - 572;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (n > lh9QZad5t0NA) {
                QLsTE6B4DX (c [lh9QZad5t0NA]);
                for (k = strlen (c[lh9QZad5t0NA]) - 1; k > 0; k--) {
                    if (c[lh9QZad5t0NA][k] > '0')
                        break;
                }
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
                for (j = k; j >= 0; j--) {
                    printf ("%c", c[lh9QZad5t0NA][j]);
                    if (j == 0)
                        ;
                }
                lh9QZad5t0NA++;
            };
        };
    };
}

