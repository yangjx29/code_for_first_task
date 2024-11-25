int main () {
    int ZlhRuq6JQ;
    int UJRY1rqx;
    int O8cTRE7hVBtn;
    int ynrPZOSVseq6;
    int SC1Akg;
    int len [100];
    ZlhRuq6JQ = 0;
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
    UJRY1rqx = 0;
    char NRwXo73E9 [100] [100] = {' '};
    cin >> O8cTRE7hVBtn;
    cin.get ();
    {
        ynrPZOSVseq6 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (O8cTRE7hVBtn > ynrPZOSVseq6) {
            cin.getline (NRwXo73E9[ynrPZOSVseq6], 100);
            len[ynrPZOSVseq6] = strlen (NRwXo73E9[ynrPZOSVseq6]);
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
            ynrPZOSVseq6 = ynrPZOSVseq6 + 1;
        };
    }
    {
        ynrPZOSVseq6 = 0;
        while (ynrPZOSVseq6 < O8cTRE7hVBtn) {
            ZlhRuq6JQ = 0;
            if ((!('_' != NRwXo73E9[ynrPZOSVseq6][0])) || ('a' <= NRwXo73E9[ynrPZOSVseq6][0] && NRwXo73E9[ynrPZOSVseq6][0] <= 'z' || 'A' <= NRwXo73E9[ynrPZOSVseq6][0] && NRwXo73E9[ynrPZOSVseq6][0] <= 'Z')) {
                ZlhRuq6JQ = 1;
            }
            UJRY1rqx = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            {
                SC1Akg = 0;
                while (SC1Akg < len[ynrPZOSVseq6]) {
                    UJRY1rqx = 0;
                    if ((NRwXo73E9[ynrPZOSVseq6][SC1Akg] == '_') || (NRwXo73E9[ynrPZOSVseq6][SC1Akg] >= '0' && NRwXo73E9[ynrPZOSVseq6][SC1Akg] <= '9') || (('a' <= NRwXo73E9[ynrPZOSVseq6][SC1Akg] && NRwXo73E9[ynrPZOSVseq6][SC1Akg] <= 'z') || ('A' <= NRwXo73E9[ynrPZOSVseq6][SC1Akg] && NRwXo73E9[ynrPZOSVseq6][SC1Akg] <= 'Z')))
                        UJRY1rqx = 1;
                    if (UJRY1rqx == 0)
                        break;
                    SC1Akg = SC1Akg +1;
                };
            }
            ynrPZOSVseq6++;
            if (ZlhRuq6JQ +UJRY1rqx == 2)
                cout << 1 << endl;
            else
                cout << 0 << endl;
        };
    }
    return 0;
}

