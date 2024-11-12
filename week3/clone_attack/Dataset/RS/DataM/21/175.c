int ZS7dne4 (int f [], int IgH7SDk1W8) {
    int i, bfr8i0nPGvY = (570 - 570);
    {
        i = 0;
        while (IgH7SDk1W8 > i) {
            bfr8i0nPGvY += f[i];
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
            i = i + 1;
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
    return bfr8i0nPGvY;
}

int Fs4d2bp (int fBPcI2T, int IgH7SDk1W8, int bfr8i0nPGvY) {
    int tp;
    if (bfr8i0nPGvY < (fBPcI2T * IgH7SDk1W8))
        tp = fBPcI2T * IgH7SDk1W8 -bfr8i0nPGvY;
    else
        tp = bfr8i0nPGvY - fBPcI2T * IgH7SDk1W8;
    return tp;
}

int uZVJEcX4Dpr (int H6w8E1d [], int IgH7SDk1W8, int bfr8i0nPGvY) {
    int max;
    int i;
    int tp;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    max = 0;
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
        while (IgH7SDk1W8 > i) {
            if (H6w8E1d[i] > max)
                max = H6w8E1d[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i = i + 1;
        };
    }
    return max;
}

void  main () {
    int i, j = 0, IgH7SDk1W8, bfr8i0nPGvY, l;
    int f [(1055 - 755)], H6w8E1d [300], GA3NWx [300];
    scanf ("%d", &IgH7SDk1W8);
    {
        i = 0;
        while (IgH7SDk1W8 > i) {
            scanf ("%d", &f[i]);
            i = i + 1;
        };
    }
    bfr8i0nPGvY = ZS7dne4 (f, IgH7SDk1W8);
    for (i = 0; i < IgH7SDk1W8; i = i + 1)
        H6w8E1d[i] = Fs4d2bp (f[i], IgH7SDk1W8, bfr8i0nPGvY);
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
    l = uZVJEcX4Dpr (H6w8E1d, IgH7SDk1W8, bfr8i0nPGvY);
    {
        i = 0;
        while (i < IgH7SDk1W8) {
            if ((bfr8i0nPGvY > f[i] * IgH7SDk1W8) && (!(l != H6w8E1d[i]))) {
                GA3NWx[j] = f[i];
                j = j + 1;
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < IgH7SDk1W8) {
            if ((f[i] * IgH7SDk1W8 > bfr8i0nPGvY) && (H6w8E1d[i] == l)) {
                GA3NWx[j] = f[i];
                j = j + 1;
            }
            i = i + 1;
        };
    }
    printf ("%d", GA3NWx[0]);
    for (i = 1; i < j; i = i + 1)
        printf (",%d", GA3NWx[i]);
}

