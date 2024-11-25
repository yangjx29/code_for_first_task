int main () {
    int n;
    int LTQzA8RLO;
    int nEtHamq4Poln [n];
    int js [n];
    int j;
    int Llrqmyut5OZD;
    Llrqmyut5OZD = j;
    int a;
    int b;
    scanf ("%d", &n);
    {
        LTQzA8RLO = 0;
        while (n > LTQzA8RLO) {
            scanf ("%d", &(nEtHamq4Poln[LTQzA8RLO]));
            LTQzA8RLO++;
        };
    }
    j = 0;
    for (LTQzA8RLO = 0; n > LTQzA8RLO; LTQzA8RLO++) {
        if (!(1 != (nEtHamq4Poln[LTQzA8RLO]) % 2)) {
            js[j] = nEtHamq4Poln[LTQzA8RLO];
            j = j + 1;
        };
    }
    {
        j = 1;
        while (Llrqmyut5OZD >= j) {
            a = 0;
            {
                LTQzA8RLO = 0;
                while (Llrqmyut5OZD -j >= LTQzA8RLO) {
                    if (js[LTQzA8RLO] > js[a]) {
                        a = LTQzA8RLO;
                    }
                    LTQzA8RLO++;
                    if (a != Llrqmyut5OZD -j) {
                        b = js[a];
                        js[a] = js[Llrqmyut5OZD -j];
                        js[Llrqmyut5OZD -j] = b;
                    };
                };
            }
            j++;
        };
    }
    for (j = 0; j < Llrqmyut5OZD -1; j = j + 1) {
        printf ("%d,", js[j]);
    }
    printf ("%d", js[Llrqmyut5OZD -1]);
    return 0;
}

