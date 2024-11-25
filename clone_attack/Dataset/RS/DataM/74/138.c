int ZrRNIeSU9 (int lZh26dpBnruv) {
    int aWBSaiDl5yT7;
    int s;
    int rDEnYTdMaZ;
    int a [10];
    int sdo7qZx;
    int TI6MShbQFiWE;
    aWBSaiDl5yT7 = lZh26dpBnruv;
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
    s = (935 - 935);
    rDEnYTdMaZ = (19 - 18);
    a[(661 - 661)] = lZh26dpBnruv % 10;
    lZh26dpBnruv = lZh26dpBnruv / 10;
    for (sdo7qZx = 1; lZh26dpBnruv != (661 - 661); sdo7qZx++) {
        a[sdo7qZx] = lZh26dpBnruv % 10;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        lZh26dpBnruv = lZh26dpBnruv / 10;
    }
    {
        TI6MShbQFiWE = sdo7qZx - 1;
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
        while (TI6MShbQFiWE >= (413 - 413)) {
            s = s + a[TI6MShbQFiWE] * rDEnYTdMaZ;
            TI6MShbQFiWE--;
            rDEnYTdMaZ = rDEnYTdMaZ * 10;
        };
    }
    if (s - aWBSaiDl5yT7 == 0)
        return (1);
    else
        return (0);
}

int ss (int lZh26dpBnruv) {
    int rDEnYTdMaZ;
    int sdo7qZx;
    int TI6MShbQFiWE;
    rDEnYTdMaZ = 1;
    {
        sdo7qZx = 2;
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
        while (lZh26dpBnruv > sdo7qZx) {
            if (lZh26dpBnruv % sdo7qZx == 0)
                rDEnYTdMaZ = 0;
            else
                rDEnYTdMaZ = rDEnYTdMaZ * 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            sdo7qZx++;
        };
    }
    if (rDEnYTdMaZ == 1)
        return (1);
    else
        return (0);
}

void  main () {
    int s;
    int QD3UcsfYM;
    int n;
    int TI6MShbQFiWE;
    int sdo7qZx;
    s = 0;
    scanf ("%d%d", &QD3UcsfYM, &n);
    for (sdo7qZx = QD3UcsfYM; sdo7qZx <= n; sdo7qZx++) {
        if (ZrRNIeSU9 (sdo7qZx) == 1 && ss (sdo7qZx) == 1) {
            if (s == 0)
                printf ("%d", sdo7qZx), s = s + 1;
            else
                printf (",%d", sdo7qZx);
        };
    }
    if (s == 0)
        ;
}

