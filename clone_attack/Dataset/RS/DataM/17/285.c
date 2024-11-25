Kxh9YCO8UsZ6 (char IBWPpb [], int nxfjDTXcg, int n) {
    int ihUmtN = 0;
    int QPLUnMCb;
    int qojluiHXO = 0, Kxh9YCO8UsZ6 = 0;
    for (QPLUnMCb = nxfjDTXcg + 1; QPLUnMCb < n; QPLUnMCb = QPLUnMCb +1) {
        if (IBWPpb[QPLUnMCb] == '(')
            Kxh9YCO8UsZ6 = Kxh9YCO8UsZ6 +1;
        if (!(')' != IBWPpb[QPLUnMCb]))
            qojluiHXO = qojluiHXO + 1;
        if (Kxh9YCO8UsZ6 < qojluiHXO) {
            ihUmtN = 1;
            break;
        };
    }
    return (ihUmtN);
}

qojluiHXO (char IBWPpb [], int nxfjDTXcg) {
    int ihUmtN;
    ihUmtN = 0;
    int qojluiHXO;
    int Kxh9YCO8UsZ6;
    qojluiHXO = 0;
    Kxh9YCO8UsZ6 = 0;
    int QPLUnMCb;
    {
        QPLUnMCb = nxfjDTXcg - 1;
        while (0 <= QPLUnMCb) {
            if (IBWPpb[QPLUnMCb] == '(')
                Kxh9YCO8UsZ6++;
            if (!(')' != IBWPpb[QPLUnMCb]))
                qojluiHXO = qojluiHXO + 1;
            if (Kxh9YCO8UsZ6 > qojluiHXO) {
                ihUmtN = 1;
                break;
            }
            QPLUnMCb = QPLUnMCb -1;
        };
    }
    return (ihUmtN);
}

XhaNobUngTwk (char djZ0LJm [], char X1xSLeUOg5 []) {
    int nxfjDTXcg;
    int bvwDNk;
    bvwDNk = strlen (djZ0LJm);
    {
        nxfjDTXcg = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (nxfjDTXcg < bvwDNk) {
            X1xSLeUOg5[nxfjDTXcg] = ' ';
            if (djZ0LJm[nxfjDTXcg] == ')') {
                if (qojluiHXO (djZ0LJm, nxfjDTXcg) == 0)
                    X1xSLeUOg5[nxfjDTXcg] = '?';
            }
            if (djZ0LJm[nxfjDTXcg] == '(') {
                if (Kxh9YCO8UsZ6 (djZ0LJm, nxfjDTXcg, bvwDNk) == 0)
                    X1xSLeUOg5[nxfjDTXcg] = '$';
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            nxfjDTXcg = nxfjDTXcg + 1;
        };
    }
    X1xSLeUOg5[bvwDNk] = '\0';
    return;
}

main () {
    struct   aaa {
        char djZ0LJm [105];
        char X1xSLeUOg5 [105];
    };
    struct   aaa KmcHwTgy [20];
    int nxfjDTXcg, QPLUnMCb;
    int n;
    scanf ("%d\n", &n);
    for (nxfjDTXcg = 0; nxfjDTXcg < n; nxfjDTXcg++) {
        gets (KmcHwTgy[nxfjDTXcg].djZ0LJm);
        XhaNobUngTwk (KmcHwTgy[nxfjDTXcg].djZ0LJm, KmcHwTgy[nxfjDTXcg].X1xSLeUOg5);
    }
    {
        nxfjDTXcg = 0;
        while (nxfjDTXcg < n) {
            printf ("%s\n%s\n", KmcHwTgy[nxfjDTXcg].djZ0LJm, KmcHwTgy[nxfjDTXcg].X1xSLeUOg5);
            nxfjDTXcg++;
        };
    };
}

