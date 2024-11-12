int main () {
    int nnBIwukT;
    nnBIwukT = 0;
    int HsFTfOJMqrba [1000];
    int cIqcjwFxld [1000];
    int bmKYStfIy;
    int c3dl9yJKbiD;
    int YLCPv51T2Eu;
    bmKYStfIy = (252 - 251);
    c3dl9yJKbiD = 1;
    char hs20VYolM [110000];
    char go [110000];
    int people;
    int ZgWOi7v6;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    people = 1;
    ZgWOi7v6 = strlen (hs20VYolM);
    cin.getline (hs20VYolM, 110000);
    cin.getline (go, 110000);
    {
        YLCPv51T2Eu = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ZgWOi7v6 > YLCPv51T2Eu) {
            if (!(',' != hs20VYolM[YLCPv51T2Eu]))
                people++;
            YLCPv51T2Eu = YLCPv51T2Eu +1;
        };
    }
    HsFTfOJMqrba[0] = atoi (hs20VYolM);
    cout << people;
    {
        YLCPv51T2Eu = 0;
        while (ZgWOi7v6 > YLCPv51T2Eu) {
            if (hs20VYolM[YLCPv51T2Eu] == ',') {
                HsFTfOJMqrba[c3dl9yJKbiD] = atoi (hs20VYolM + YLCPv51T2Eu +1);
                c3dl9yJKbiD = c3dl9yJKbiD + 1;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            YLCPv51T2Eu++;
        };
    }
    ZgWOi7v6 = strlen (go);
    c3dl9yJKbiD = 1;
    cIqcjwFxld[0] = atoi (go);
    for (YLCPv51T2Eu = 0; YLCPv51T2Eu < ZgWOi7v6; YLCPv51T2Eu++)
        if (!(',' != go[YLCPv51T2Eu])) {
            cIqcjwFxld[c3dl9yJKbiD] = atoi (go + YLCPv51T2Eu +1);
            c3dl9yJKbiD++;
        }
    {
        YLCPv51T2Eu = 0;
        while (1000 >= YLCPv51T2Eu) {
            int number;
            number = 0;
            {
                c3dl9yJKbiD = 0;
                while (c3dl9yJKbiD < people) {
                    if (YLCPv51T2Eu >= HsFTfOJMqrba[c3dl9yJKbiD] && YLCPv51T2Eu < cIqcjwFxld[c3dl9yJKbiD])
                        number = number + 1;
                    c3dl9yJKbiD++;
                };
            }
            YLCPv51T2Eu++;
            if (number > nnBIwukT)
                nnBIwukT = number;
        };
    }
    cout << ' ' << nnBIwukT;
    return 0;
}

