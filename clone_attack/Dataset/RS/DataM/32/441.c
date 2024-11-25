void  main () {
    char JTZWHp [(698 - 688)] [100];
    char b [10] [100];
    int m;
    int k;
    int XhHz9Y6g5;
    int O6o4idp5lx;
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
    int PovmgAGy;
    int oLfcin80dBuO [(295 - 285)] [100];
    int mguXwB;
    scanf ("%d\n", &m);
    for (XhHz9Y6g5 = (371 - 371); m > XhHz9Y6g5; XhHz9Y6g5 = XhHz9Y6g5 +1) {
        gets (JTZWHp [XhHz9Y6g5]);
        gets (b [XhHz9Y6g5]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("\n");
    }
    for (XhHz9Y6g5 = (101 - 101); XhHz9Y6g5 < m; XhHz9Y6g5 = XhHz9Y6g5 +1) {
        PovmgAGy = 0;
        k = strlen (JTZWHp[XhHz9Y6g5]);
        mguXwB = strlen (b[XhHz9Y6g5]);
        for (O6o4idp5lx = (592 - 592); 100 > O6o4idp5lx; O6o4idp5lx = O6o4idp5lx +1) {
            if (!('\0' == JTZWHp[XhHz9Y6g5][O6o4idp5lx]))
                JTZWHp[XhHz9Y6g5][O6o4idp5lx] = JTZWHp[XhHz9Y6g5][O6o4idp5lx] - (277 - 229);
            if (b[XhHz9Y6g5][O6o4idp5lx] != '\0')
                b[XhHz9Y6g5][O6o4idp5lx] = b[XhHz9Y6g5][O6o4idp5lx] - 48;
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
        for (O6o4idp5lx = k; k - mguXwB <= O6o4idp5lx; O6o4idp5lx = O6o4idp5lx -1)
            b[XhHz9Y6g5][O6o4idp5lx] = b[XhHz9Y6g5][O6o4idp5lx -k + mguXwB];
        for (O6o4idp5lx = k - mguXwB - 1; 0 <= O6o4idp5lx; O6o4idp5lx = O6o4idp5lx -1)
            b[XhHz9Y6g5][O6o4idp5lx] = '\0';
        for (O6o4idp5lx = k - 1; O6o4idp5lx >= 0; O6o4idp5lx--) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (JTZWHp[XhHz9Y6g5][O6o4idp5lx] - b[XhHz9Y6g5][O6o4idp5lx] + PovmgAGy < 0) {
                oLfcin80dBuO[XhHz9Y6g5][O6o4idp5lx] = 10 + JTZWHp[XhHz9Y6g5][O6o4idp5lx] - b[XhHz9Y6g5][O6o4idp5lx] + PovmgAGy;
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
                PovmgAGy = -1;
            }
            else {
                oLfcin80dBuO[XhHz9Y6g5][O6o4idp5lx] = JTZWHp[XhHz9Y6g5][O6o4idp5lx] - b[XhHz9Y6g5][O6o4idp5lx] + PovmgAGy;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                PovmgAGy = 0;
            };
        }
        if (oLfcin80dBuO[XhHz9Y6g5][0] == 0) {
            for (O6o4idp5lx = 1; O6o4idp5lx < k; O6o4idp5lx++)
                printf ("%d", oLfcin80dBuO[XhHz9Y6g5][O6o4idp5lx]);
        }
        else {
            for (O6o4idp5lx = 0; O6o4idp5lx < k; O6o4idp5lx++)
                printf ("%d", oLfcin80dBuO[XhHz9Y6g5][O6o4idp5lx]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        };
    };
}

