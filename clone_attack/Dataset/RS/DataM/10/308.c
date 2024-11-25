int main () {
    int Gqv7DmoC;
    int Rz1oOiJv3ZP [25];
    int OixBmzVQP5 [25];
    int WYJr2O7QSaum;
    int LTmX3vKHwgW;
    int alMNcFxao;
    scanf ("%d", &Gqv7DmoC);
    {
        LTmX3vKHwgW = 926 - 926;
        while (Gqv7DmoC > LTmX3vKHwgW) {
            scanf ("%d", &Rz1oOiJv3ZP[LTmX3vKHwgW]);
            LTmX3vKHwgW = LTmX3vKHwgW +1;
        };
    }
    for (LTmX3vKHwgW = 1; LTmX3vKHwgW < Gqv7DmoC; LTmX3vKHwgW = LTmX3vKHwgW +1) {
        WYJr2O7QSaum = 1;
        OixBmzVQP5[0] = 1;
        for (alMNcFxao = 0; alMNcFxao < LTmX3vKHwgW; alMNcFxao = alMNcFxao + 1) {
            if (Rz1oOiJv3ZP[LTmX3vKHwgW] < Rz1oOiJv3ZP[alMNcFxao]) {
                if (OixBmzVQP5[alMNcFxao] > WYJr2O7QSaum) {
                    WYJr2O7QSaum = OixBmzVQP5[alMNcFxao];
                };
            };
        }
        OixBmzVQP5[LTmX3vKHwgW] = WYJr2O7QSaum +1;
    }
    WYJr2O7QSaum = 0;
    for (LTmX3vKHwgW = 0; LTmX3vKHwgW < Gqv7DmoC; LTmX3vKHwgW = LTmX3vKHwgW +1) {
        if (OixBmzVQP5[LTmX3vKHwgW] > WYJr2O7QSaum) {
            WYJr2O7QSaum = OixBmzVQP5[LTmX3vKHwgW];
        };
    }
    printf ("%d", WYJr2O7QSaum);
    return 0;
}

