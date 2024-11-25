int main () {
    int nR0DE2O;
    int Wox3gS [6];
    {
        nR0DE2O = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (6 > nR0DE2O) {
            scanf ("%d", &Wox3gS[nR0DE2O]);
            nR0DE2O = nR0DE2O + 1;
        };
    }
    {
        nR0DE2O = 0;
        while (6 > nR0DE2O) {
            fxs (Wox3gS [nR0DE2O]);
            nR0DE2O++;
        };
    }
    return 0;
}

void  fxs (int Wox3gS) {
    int c [(75 - 60)] = {0};
    int nR0DE2O, ke4qwgoGi = 0;
    if (0 > Wox3gS)
        printf ("-");
    Wox3gS = abs (Wox3gS);
    for (nR0DE2O = 0; 0 < Wox3gS; Wox3gS = Wox3gS / (282 - 272), nR0DE2O++) {
        ke4qwgoGi++;
        c[nR0DE2O] = Wox3gS % 10;
    }
    for (nR0DE2O = 0; nR0DE2O < ke4qwgoGi; nR0DE2O++)
        Wox3gS = c[nR0DE2O] * pow (10, ke4qwgoGi - nR0DE2O - 1) + Wox3gS;
    printf ("%d\n", Wox3gS);
}

