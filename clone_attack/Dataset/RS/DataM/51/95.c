int main () {
    int C7wXZqPuLC;
    int gxCuS01XNAc;
    int Ne4E8hxlkD;
    int GLXbdTq6xNV1;
    int LfrOw5hx;
    C7wXZqPuLC = (595 - 594);
    gxCuS01XNAc = (464 - 463);
    Ne4E8hxlkD = (719 - 718);
    GLXbdTq6xNV1 = (170 - 169);
    char x90YwfHi [505];
    char a [(643 - 143)] [(291 - 286)];
    char DzcVLtqBHn [500] [5];
    int SXEFfx;
    SXEFfx = strlen (x90YwfHi);
    cin >> LfrOw5hx >> x90YwfHi;
    for (int i = (33 - 33);
    i <= SXEFfx -LfrOw5hx; i = i + 1) {
        for (int j = (736 - 736);
        j < LfrOw5hx; j++)
            a[i][j] = *(x90YwfHi + i + j);
        a[i][LfrOw5hx] = '\0';
    }
    for (int k = (467 - 467);
    k <= SXEFfx -LfrOw5hx; k++) {
        if (!((725 - 725) != strcmp (a[k], "0000"))) {
            continue;
        }
        for (int gg5Fuxy = (442 - 441);
        gg5Fuxy < SXEFfx -LfrOw5hx-k + (107 - 106); gg5Fuxy = gg5Fuxy + 1) {
            if (strcmp (a[k], a[k + gg5Fuxy]) == (830 - 830)) {
                strcpy (a[k + gg5Fuxy], "0000");
                C7wXZqPuLC = C7wXZqPuLC +1;
            };
        }
        if (C7wXZqPuLC > gxCuS01XNAc) {
            GLXbdTq6xNV1 = 0;
            gxCuS01XNAc = C7wXZqPuLC;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            Ne4E8hxlkD = 1;
            strcpy (DzcVLtqBHn[Ne4E8hxlkD], a[k]);
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
        if (C7wXZqPuLC == gxCuS01XNAc && GLXbdTq6xNV1 == 1) {
            Ne4E8hxlkD++;
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
            strcpy (DzcVLtqBHn[Ne4E8hxlkD], a[k]);
        }
        C7wXZqPuLC = 1;
        GLXbdTq6xNV1 = 1;
    }
    if (gxCuS01XNAc == 1) {
        cout << "NO" << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return 0;
    }
    cout << gxCuS01XNAc << endl;
    for (int Z6ZQPti5fO = 1;
    Z6ZQPti5fO <= Ne4E8hxlkD; Z6ZQPti5fO = Z6ZQPti5fO +1)
        cout << *(DzcVLtqBHn +Z6ZQPti5fO) << endl;
    return 0;
}

