void  main () {
    int vaMd6OPy;
    int FNI1bByJU;
    int seL2CmlvGQ;
    int wdg08TFhBI9;
    int ygtMHV2cjIzN [10];
    int DEfqaWPJ [10];
    int a1 [10] [100] = {(533 - 533)};
    int I1c9Hn7W [10] [100] = {(728 - 728)};
    vaMd6OPy = (857 - 857);
    char EyMO5nVG87 [10] [100];
    char cikysfZ0G [10] [100];
    scanf ("%d", &wdg08TFhBI9);
    {
        FNI1bByJU = 0;
        while (wdg08TFhBI9 > FNI1bByJU) {
            scanf ("%s %s", EyMO5nVG87[FNI1bByJU], cikysfZ0G[FNI1bByJU]);
            ygtMHV2cjIzN[FNI1bByJU] = strlen (EyMO5nVG87[FNI1bByJU]);
            DEfqaWPJ[FNI1bByJU] = strlen (cikysfZ0G[FNI1bByJU]);
            for (seL2CmlvGQ = ygtMHV2cjIzN[FNI1bByJU] - (742 - 741); 0 <= seL2CmlvGQ; seL2CmlvGQ--) {
                a1[FNI1bByJU][vaMd6OPy] = EyMO5nVG87[FNI1bByJU][seL2CmlvGQ] - '0';
                vaMd6OPy++;
            }
            vaMd6OPy = 0;
            for (seL2CmlvGQ = DEfqaWPJ[FNI1bByJU] - 1; 0 <= seL2CmlvGQ; seL2CmlvGQ--) {
                I1c9Hn7W[FNI1bByJU][vaMd6OPy] = cikysfZ0G[FNI1bByJU][seL2CmlvGQ] - '0';
                vaMd6OPy++;
            }
            vaMd6OPy = 0;
            for (seL2CmlvGQ = 0; ygtMHV2cjIzN[FNI1bByJU] > seL2CmlvGQ; seL2CmlvGQ++) {
                a1[FNI1bByJU][seL2CmlvGQ] = a1[FNI1bByJU][seL2CmlvGQ] - I1c9Hn7W[FNI1bByJU][seL2CmlvGQ];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                if (a1[FNI1bByJU][seL2CmlvGQ] < 0) {
                    a1[FNI1bByJU][seL2CmlvGQ] = a1[FNI1bByJU][seL2CmlvGQ] + 10;
                    a1[FNI1bByJU][seL2CmlvGQ + 1] = a1[FNI1bByJU][seL2CmlvGQ + 1] - 1;
                };
            }
            {
                seL2CmlvGQ = FNI1bByJU;
                while (seL2CmlvGQ >= 0) {
                    printf ("%d", a1[FNI1bByJU][seL2CmlvGQ]);
                    seL2CmlvGQ--;
                };
            }
            FNI1bByJU++;
        };
    };
}

