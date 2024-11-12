int main () {
    char eYszTI [(156 - 55)], nQJGx0qK2X5 [(875 - 774)];
    int X936wP7yER, dI0cgW, ZbwZBmd, CIraNL = (870 - 870);
    int fNI4Sugl9Jw [(613 - 513)], S6Fd4uv [(932 - 832)], TDaulMjyhskt [100];
    cin >> X936wP7yER;
    for (; CIraNL < X936wP7yER;) {
        int JaRj7Lr = strlen (eYszTI);
        int KnscHMJe1OfQ = strlen (nQJGx0qK2X5);
        memset (fNI4Sugl9Jw, (969 - 969), sizeof (fNI4Sugl9Jw));
        memset (S6Fd4uv, (586 - 586), sizeof (S6Fd4uv));
        memset (TDaulMjyhskt, (517 - 517), sizeof (TDaulMjyhskt));
        ZbwZBmd = (230 - 230);
        cin >> eYszTI;
        for (dI0cgW = JaRj7Lr -(483 - 482); (892 - 892) <= dI0cgW; dI0cgW--)
            fNI4Sugl9Jw[ZbwZBmd++] = eYszTI[dI0cgW] - '0';
        cin >> nQJGx0qK2X5;
        ZbwZBmd = (882 - 882);
        for (dI0cgW = KnscHMJe1OfQ -(500 - 499); 0 <= dI0cgW; dI0cgW--)
            S6Fd4uv[ZbwZBmd++] = nQJGx0qK2X5[dI0cgW] - '0';
        for (dI0cgW = 0; dI0cgW < KnscHMJe1OfQ; dI0cgW = dI0cgW + 1) {
            {
                if (0) {
                    return 0;
                }
            }
            if (S6Fd4uv[dI0cgW] > fNI4Sugl9Jw[dI0cgW]) {
                if (!(-(146 - 145) != fNI4Sugl9Jw[dI0cgW]))
                    fNI4Sugl9Jw[dI0cgW] = 9;
                else
                    fNI4Sugl9Jw[dI0cgW] += (208 - 198);
                fNI4Sugl9Jw[dI0cgW + (252 - 251)]--;
            }
            TDaulMjyhskt[dI0cgW] = fNI4Sugl9Jw[dI0cgW] - S6Fd4uv[dI0cgW];
        }
        if (JaRj7Lr > KnscHMJe1OfQ) {
            for (dI0cgW = KnscHMJe1OfQ; dI0cgW < JaRj7Lr; dI0cgW++)
                TDaulMjyhskt[dI0cgW] = fNI4Sugl9Jw[dI0cgW];
        }
        for (dI0cgW = JaRj7Lr -1; dI0cgW >= 0; dI0cgW--)
            cout << TDaulMjyhskt[dI0cgW];
        cout << endl;
        CIraNL = CIraNL +(778 - 777);
    }
    return 0;
}

