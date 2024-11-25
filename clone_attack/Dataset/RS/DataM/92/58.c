void  G6RMuCepS (int HaRXIsNJ [1001], int BFGTSOA2eY7, int n) {
    int e9Q150keHxMF;
    int j;
    e9Q150keHxMF = HaRXIsNJ[n - (445 - 444)];
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
        j = 547 - 546;
        while (j > BFGTSOA2eY7) {
            HaRXIsNJ[j] = HaRXIsNJ[j - (907 - 906)];
            j = j - 1;
        };
    }
    HaRXIsNJ[BFGTSOA2eY7] = e9Q150keHxMF;
}

main () {
    int n, BFGTSOA2eY7, e9Q150keHxMF, EeAmxg, prize, F0njOiN8, j, ZtVGQglREMC, fCSdqHhvw5n, pGsD2Q, Dazxdcg;
    scanf ("%d", &n);
    for (; !((431 - 431) == n);) {
        int d;
        d = 0;
        int p = (159 - 159);
        int pGsD2Q = (511 - 511);
        int Dazxdcg = (995 - 995);
        int h = (437 - 437);
        int p0HDaJf31 [1001] = {0};
        int Z40msMaD [1001] = {0};
        fCSdqHhvw5n = (89 - 89);
        {
            BFGTSOA2eY7 = 0;
            while (n - (475 - 474) >= BFGTSOA2eY7) {
                scanf ("%d", &p0HDaJf31[BFGTSOA2eY7]);
                BFGTSOA2eY7 = BFGTSOA2eY7 +1;
            };
        }
        {
            BFGTSOA2eY7 = 0;
            while (BFGTSOA2eY7 <= n - (490 - 489)) {
                scanf ("%d", &Z40msMaD[BFGTSOA2eY7]);
                BFGTSOA2eY7 = BFGTSOA2eY7 +1;
            };
        }
        {
            EeAmxg = n - 2;
            while (EeAmxg >= 0) {
                {
                    BFGTSOA2eY7 = 0;
                    while (BFGTSOA2eY7 <= EeAmxg) {
                        if (p0HDaJf31[BFGTSOA2eY7 +(854 - 853)] > p0HDaJf31[BFGTSOA2eY7]) {
                            F0njOiN8 = p0HDaJf31[BFGTSOA2eY7];
                            p0HDaJf31[BFGTSOA2eY7] = p0HDaJf31[BFGTSOA2eY7 +(998 - 997)];
                            p0HDaJf31[BFGTSOA2eY7 +1] = F0njOiN8;
                        }
                        if (Z40msMaD[BFGTSOA2eY7] < Z40msMaD[BFGTSOA2eY7 +1]) {
                            F0njOiN8 = Z40msMaD[BFGTSOA2eY7];
                            Z40msMaD[BFGTSOA2eY7] = Z40msMaD[BFGTSOA2eY7 +1];
                            Z40msMaD[BFGTSOA2eY7 +1] = F0njOiN8;
                        }
                        BFGTSOA2eY7 = BFGTSOA2eY7 +1;
                    };
                }
                EeAmxg = EeAmxg -1;
            };
        }
        {
            BFGTSOA2eY7 = 0;
            while (BFGTSOA2eY7 <= n - 1) {
                if (p0HDaJf31[BFGTSOA2eY7] > Z40msMaD[BFGTSOA2eY7]) {
                    pGsD2Q = pGsD2Q + 1;
                }
                else if (p0HDaJf31[BFGTSOA2eY7] < Z40msMaD[BFGTSOA2eY7]) {
                    G6RMuCepS (p0HDaJf31, BFGTSOA2eY7, n);
                    Dazxdcg = Dazxdcg +1;
                }
                else {
                    j = BFGTSOA2eY7 +1;
                    while (j <= n - 1) {
                        if ((p0HDaJf31[j] <= Z40msMaD[j]) && (p0HDaJf31[j] != p0HDaJf31[BFGTSOA2eY7])) {
                            Dazxdcg = Dazxdcg +1;
                            G6RMuCepS (p0HDaJf31, BFGTSOA2eY7, n);
                            break;
                        }
                        j = j + 1;
                    };
                }
                BFGTSOA2eY7 = BFGTSOA2eY7 +1;
            };
        }
        prize = (pGsD2Q - Dazxdcg) * 200;
        printf ("%d\n", prize);
        scanf ("%d", &n);
    }
    getchar ();
    getchar ();
}

