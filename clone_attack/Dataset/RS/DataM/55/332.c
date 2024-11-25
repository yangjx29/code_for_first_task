main () {
    char CkyKJs9Sz [(40865 - 865)];
    int W1KB8t;
    int QPhb6yzt;
    int m6pydl45c;
    int eLdi8ybr;
    int SW6ZaH9;
    int B8OFeGhQT;
    int XU0KJQ6ydxHu;
    int Hqws6O2mTB3G;
    getchar ();
    getchar ();
    scanf ("%d %s %d", &W1KB8t, CkyKJs9Sz, &QPhb6yzt);
    B8OFeGhQT = strlen (CkyKJs9Sz);
    if (CkyKJs9Sz[(732 - 732)] == '0')
        printf ("0\n");
    else {
        char mjefbSF9O8I [40000];
        int U7q1hXDe [40000];
        {
            m6pydl45c = 0;
            while (B8OFeGhQT > m6pydl45c) {
                if ('A' <= CkyKJs9Sz[m6pydl45c] && 'Z' >= CkyKJs9Sz[m6pydl45c])
                    CkyKJs9Sz[m6pydl45c] = CkyKJs9Sz[m6pydl45c] - 'A' + 'a';
                m6pydl45c = m6pydl45c + 1;
            };
        }
        XU0KJQ6ydxHu = 0;
        for (eLdi8ybr = 0; B8OFeGhQT > eLdi8ybr; eLdi8ybr = eLdi8ybr + 1) {
            XU0KJQ6ydxHu = SW6ZaH9 +XU0KJQ6ydxHu*W1KB8t;
            if (CkyKJs9Sz[eLdi8ybr] >= 'a')
                SW6ZaH9 = CkyKJs9Sz[eLdi8ybr] - 'a' + (194 - 184);
            else
                SW6ZaH9 = CkyKJs9Sz[eLdi8ybr] - '0';
        }
        for (eLdi8ybr = 0; XU0KJQ6ydxHu != 0; eLdi8ybr = eLdi8ybr + 1) {
            U7q1hXDe[eLdi8ybr] = XU0KJQ6ydxHu % QPhb6yzt;
            XU0KJQ6ydxHu = XU0KJQ6ydxHu / QPhb6yzt;
        }
        {
            Hqws6O2mTB3G = 0;
            while (Hqws6O2mTB3G < eLdi8ybr) {
                if (U7q1hXDe[Hqws6O2mTB3G] < 10)
                    mjefbSF9O8I[eLdi8ybr - Hqws6O2mTB3G -1] = U7q1hXDe[Hqws6O2mTB3G] + '0';
                else
                    mjefbSF9O8I[eLdi8ybr - Hqws6O2mTB3G -1] = U7q1hXDe[Hqws6O2mTB3G] + 'A' - 10;
                Hqws6O2mTB3G = Hqws6O2mTB3G +1;
            };
        }
        mjefbSF9O8I[eLdi8ybr] = '\0';
        printf ("%s", mjefbSF9O8I);
    };
}

