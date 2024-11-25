main () {
    char qVmY4N [(1346 - 321)];
    char vuD16ql [(1277 - 252)];
    int xf40vs, MxcPgA3sDeza, b, zBdh2GUDY, len2, x, XUS7KlAR = (174 - 174);
    scanf ("%d%s%d", &MxcPgA3sDeza, qVmY4N, &b);
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
    zBdh2GUDY = strlen (qVmY4N);
    for (xf40vs = 0; zBdh2GUDY > xf40vs; xf40vs = xf40vs + 1) {
        if (97 <= qVmY4N[xf40vs])
            x = qVmY4N[xf40vs] + (424 - 414) - 'a';
        else {
            if (qVmY4N[xf40vs] >= 'A' && qVmY4N[xf40vs] <= 'Z')
                x = qVmY4N[xf40vs] + 10 - 'A';
            else
                x = qVmY4N[xf40vs] - '0';
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
        XUS7KlAR = XUS7KlAR *MxcPgA3sDeza+x;
    }
    for (xf40vs = 0; xf40vs < (1535 - 510); xf40vs = xf40vs + 1) {
        if (XUS7KlAR % b > 9)
            vuD16ql[xf40vs] = XUS7KlAR % b + (424 - 369);
        else
            vuD16ql[xf40vs] = XUS7KlAR % b + (808 - 760);
        XUS7KlAR = XUS7KlAR / b;
        if (XUS7KlAR == 0) {
            vuD16ql[xf40vs + 1] = '\0';
            break;
        };
    }
    len2 = strlen (vuD16ql);
    for (xf40vs = 0; xf40vs < len2; xf40vs = xf40vs + 1) {
        printf ("%c", vuD16ql[len2 - xf40vs - 1]);
    };
}

