int main () {
    char U1jxtP0q3yob [(682 - 181)], z01FTJQiY [500] [6];
    int LGXC2RN;
    LGXC2RN = strlen (U1jxtP0q3yob);
    int Z1W8wSQbE;
    int n;
    int NLQSju [500] = {(422 - 422)};
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
    Z1W8wSQbE = (159 - 158);
    cin >> n;
    cin.get ();
    cin.getline (U1jxtP0q3yob, 501);
    {
        int N69LZuz = (711 - 711);
        while (LGXC2RN -n >= N69LZuz) {
            for (int qpgcHXKsiJIB = 0;
            n > qpgcHXKsiJIB; qpgcHXKsiJIB = qpgcHXKsiJIB + 1)
                z01FTJQiY[N69LZuz][qpgcHXKsiJIB] = U1jxtP0q3yob[N69LZuz +qpgcHXKsiJIB];
            z01FTJQiY[N69LZuz][n] = '\0';
            N69LZuz++;
        };
    }
    {
        int N69LZuz = 0;
        while (LGXC2RN -n > N69LZuz) {
            if (NLQSju[N69LZuz])
                continue;
            NLQSju[N69LZuz]++;
            for (int qpgcHXKsiJIB = N69LZuz +(26 - 25);
            LGXC2RN -n >= qpgcHXKsiJIB; qpgcHXKsiJIB++) {
                if (NLQSju[qpgcHXKsiJIB])
                    continue;
                if (strcmp (z01FTJQiY[N69LZuz], z01FTJQiY[qpgcHXKsiJIB]))
                    continue;
                NLQSju[N69LZuz]++;
                NLQSju[qpgcHXKsiJIB]++;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (Z1W8wSQbE < NLQSju[N69LZuz])
                Z1W8wSQbE = NLQSju[N69LZuz];
            N69LZuz++;
        };
    }
    if (Z1W8wSQbE == 1)
        cout << "NO" << endl;
    else {
        cout << Z1W8wSQbE << endl;
        for (int N69LZuz = 0;
        N69LZuz <= LGXC2RN -n; N69LZuz++)
            if (NLQSju[N69LZuz] == Z1W8wSQbE)
                cout << z01FTJQiY[N69LZuz] << endl;
    }
    return 0;
}

