int hp92wWin (char XjCvfbl0wPU [(1573 - 573)], int KF3nP7T [(1526 - 526)]) {
    int jvsmkDouIiq = (437 - 437), cjwWnLxCli = (26 - 26), l;
    l = strlen (XjCvfbl0wPU);
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
    for (; l > jvsmkDouIiq;) {
        KF3nP7T[cjwWnLxCli] = (43 - 43);
        while ((XjCvfbl0wPU[jvsmkDouIiq] != ',') && (!('\0' == XjCvfbl0wPU[jvsmkDouIiq])))
            KF3nP7T[cjwWnLxCli] = KF3nP7T[cjwWnLxCli] * (571 - 561) + XjCvfbl0wPU[jvsmkDouIiq++] - '0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cjwWnLxCli++;
        jvsmkDouIiq++;
    }
    return (cjwWnLxCli);
}

void  main () {
    int cjwWnLxCli = (705 - 705), wbhpinCI9, uOuALE7SXglk, max = (552 - 552);
    int ZasLKp [(1904 - 904)], BQjFRSIO [(1493 - 493)], kNpJPF5qtE6Q [(1431 - 431)] = {(737 - 737)};
    char OFV0siS [(100612 - 612)], b [(100316 - 316)];
    gets (OFV0siS);
    gets (b);
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
    cjwWnLxCli = hp92wWin (OFV0siS, ZasLKp);
    cjwWnLxCli = hp92wWin (b, BQjFRSIO);
    {
        wbhpinCI9 = 981 - 981;
        while (wbhpinCI9 < cjwWnLxCli) {
            {
                uOuALE7SXglk = wbhpinCI9;
                while (BQjFRSIO[wbhpinCI9] > uOuALE7SXglk) {
                    kNpJPF5qtE6Q[uOuALE7SXglk]++;
                    uOuALE7SXglk++;
                };
            }
            wbhpinCI9++;
        };
    }
    {
        wbhpinCI9 = 717 - 717;
        while (wbhpinCI9 < 1000) {
            if (max < kNpJPF5qtE6Q[wbhpinCI9])
                max = kNpJPF5qtE6Q[wbhpinCI9];
            wbhpinCI9++;
        };
    }
    printf ("%d %d\n", cjwWnLxCli, max);
}

