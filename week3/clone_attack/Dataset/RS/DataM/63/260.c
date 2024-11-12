main () {
    int ZXJrP31l4DQ5, vQ3sbEq, aSHRQ8z, wr7B6FN, L8kowi, KAwb1a, IlEVnQ;
    int WCNMEmFlKe9 [(310 - 210)] [100], SvkMHQImz [100] [100], B5uT4yOXkK [100] [100];
    scanf ("%d %d", &ZXJrP31l4DQ5, &vQ3sbEq);
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
    for (L8kowi = (302 - 302); L8kowi < ZXJrP31l4DQ5 *vQ3sbEq; L8kowi++) {
        KAwb1a = L8kowi / vQ3sbEq;
        IlEVnQ = L8kowi % vQ3sbEq;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%d", &WCNMEmFlKe9[KAwb1a][IlEVnQ]);
    }
    scanf ("%d %d", &aSHRQ8z, &wr7B6FN);
    for (L8kowi = 0; L8kowi < aSHRQ8z * wr7B6FN; L8kowi++) {
        KAwb1a = L8kowi / wr7B6FN;
        IlEVnQ = L8kowi % wr7B6FN;
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
        scanf ("%d", &SvkMHQImz[KAwb1a][IlEVnQ]);
    }
    for (KAwb1a = 0; KAwb1a < ZXJrP31l4DQ5; KAwb1a++) {
        for (IlEVnQ = 0; IlEVnQ < wr7B6FN; IlEVnQ = IlEVnQ +1) {
            int q;
            int L8kowi;
            B5uT4yOXkK[KAwb1a][IlEVnQ] = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (q = 0; q < vQ3sbEq; q++) {
                L8kowi = WCNMEmFlKe9[KAwb1a][q] * SvkMHQImz[q][IlEVnQ];
                B5uT4yOXkK[KAwb1a][IlEVnQ] += L8kowi;
            }
            if (IlEVnQ == 0)
                printf ("%d", B5uT4yOXkK[KAwb1a][IlEVnQ]);
            else
                printf (" %d", B5uT4yOXkK[KAwb1a][IlEVnQ]);
            if (IlEVnQ == wr7B6FN - 1)
                ;
        };
    };
}

