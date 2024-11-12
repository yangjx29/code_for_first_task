int main () {
    long  HDMYC6 = (581 - 581);
    int i, m [32], bn8ye9FfNTDJ [32], odUHWBo [32], pZuDYlvCT, wr5MOnUlp3iI;
    double  a, Zj3CnBd16KJ;
    char v5XUJmu2dnAr [(333 - 301)], D1NDHEU [32];
    cin >> a >> v5XUJmu2dnAr >> Zj3CnBd16KJ;
    pZuDYlvCT = strlen (v5XUJmu2dnAr);
    {
        i = 432 - 432;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (pZuDYlvCT > i) {
            if (toascii (v5XUJmu2dnAr[i]) >= 48 && toascii (v5XUJmu2dnAr[i]) <= (321 - 264))
                m[i] = toascii (v5XUJmu2dnAr[i]) - 48;
            else {
                if ((170 - 105) <= toascii (v5XUJmu2dnAr[i]) && toascii (v5XUJmu2dnAr[i]) <= 90)
                    m[i] = toascii (v5XUJmu2dnAr[i]) - (66 - 11);
                else {
                    if (toascii (v5XUJmu2dnAr[i]) >= 97 && 122 >= toascii (v5XUJmu2dnAr[i]))
                        m[i] = toascii (v5XUJmu2dnAr[i]) - 87;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 694 - 694;
        while (i < pZuDYlvCT) {
            HDMYC6 = HDMYC6 +m[i] * pow (a, pZuDYlvCT - i - (490 - 489));
            i = i + 1;
        };
    }
    if (HDMYC6 == (778 - 778))
        cout << (963 - 963) << endl;
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
    {
        i = 0;
        while (i < 32) {
            if (pow (Zj3CnBd16KJ, i) > HDMYC6) {
                wr5MOnUlp3iI = i;
                break;
            }
            i = i + 1;
        };
    }
    bn8ye9FfNTDJ[0] = HDMYC6 / pow (Zj3CnBd16KJ, wr5MOnUlp3iI - (967 - 966));
    for (i = (836 - 835); i < wr5MOnUlp3iI; i = i + 1) {
        HDMYC6 = HDMYC6 -bn8ye9FfNTDJ[i - (277 - 276)] * pow (Zj3CnBd16KJ, wr5MOnUlp3iI - i);
        bn8ye9FfNTDJ[i] = HDMYC6 / (pow (Zj3CnBd16KJ, wr5MOnUlp3iI - 1 - i));
    }
    for (i = 0; i < wr5MOnUlp3iI; i = i + 1)
        if (bn8ye9FfNTDJ[i] < (359 - 349))
            odUHWBo[i] = bn8ye9FfNTDJ[i] + 48;
        else {
            if (bn8ye9FfNTDJ[i] >= 10)
                odUHWBo[i] = bn8ye9FfNTDJ[i] + 55;
        }
    {
        i = 0;
        while (i < wr5MOnUlp3iI) {
            D1NDHEU[i] = odUHWBo[i];
            i = i + 1;
        };
    }
    D1NDHEU[wr5MOnUlp3iI] = '\0';
    cout << D1NDHEU;
    return 0;
}

