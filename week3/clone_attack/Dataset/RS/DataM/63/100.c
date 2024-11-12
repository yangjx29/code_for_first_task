main () {
    int a6q0Mx5zjPm [120] [120];
    int qO5URvZdca4 [120] [120];
    int loCvk9, GzyM9Tn2tZo;
    int ZXaOqUZ4l [(534 - 414)] [120];
    int YqJrNK;
    int m;
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
    scanf ("%d %d", &m, &YqJrNK);
    {
        int Xo6AaS0vJD = (576 - 576);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (m - (800 - 799) >= Xo6AaS0vJD) {
            {
                int rLxfFjEIM = 0;
                while (YqJrNK -(15 - 14) >= rLxfFjEIM) {
                    scanf ("%d", &ZXaOqUZ4l[Xo6AaS0vJD][rLxfFjEIM]);
                    rLxfFjEIM = rLxfFjEIM + 1;
                };
            }
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
            Xo6AaS0vJD++;
        };
    }
    scanf ("%d %d", &loCvk9, &GzyM9Tn2tZo);
    {
        int YuhxaCt = 0;
        while (loCvk9 - 1 >= YuhxaCt) {
            {
                int r8BYKuJc5p = 0;
                while (GzyM9Tn2tZo -1 >= r8BYKuJc5p) {
                    scanf ("%d", &qO5URvZdca4[YuhxaCt][r8BYKuJc5p]);
                    r8BYKuJc5p++;
                };
            }
            YuhxaCt++;
        };
    }
    for (int MPhj8UMR = 0;
    MPhj8UMR <= m - 1; MPhj8UMR = MPhj8UMR +1) {
        int g = 0;
        while (g <= GzyM9Tn2tZo -1) {
            a6q0Mx5zjPm[MPhj8UMR][g] = 0;
            {
                int GyNaxo7 = 0;
                while (GyNaxo7 <= YqJrNK -1) {
                    a6q0Mx5zjPm[MPhj8UMR][g] = a6q0Mx5zjPm[MPhj8UMR][g] + ZXaOqUZ4l[MPhj8UMR][GyNaxo7] * qO5URvZdca4[GyNaxo7][g];
                    GyNaxo7++;
                };
            }
            g = g + 1;
        };
    }
    {
        int efkDa4zQ8C2Y = 0;
        while (efkDa4zQ8C2Y <= m - 1) {
            {
                int l = 0;
                while (l <= GzyM9Tn2tZo -2) {
                    printf ("%d ", a6q0Mx5zjPm[efkDa4zQ8C2Y][l]);
                    l++;
                };
            }
            printf ("%d\n", a6q0Mx5zjPm[efkDa4zQ8C2Y][GzyM9Tn2tZo -1]);
            efkDa4zQ8C2Y++;
        };
    };
}

