int main () {
    int n, qg3RbnJfETF, PfbLic4, PJT4boFs0lA7, IIdcVrouLG4t, gJTwi06KObl;
    scanf ("%d", &n);
    {
        qg3RbnJfETF = 0;
        while (qg3RbnJfETF < n) {
            char Dmc8p6igeqx [100000];
            int NjuG4wW1 [26] = {0};
            IIdcVrouLG4t = 0;
            scanf ("%s", Dmc8p6igeqx);
            gJTwi06KObl = strlen (Dmc8p6igeqx);
            {
                PfbLic4 = 0;
                while (PfbLic4 < gJTwi06KObl) {
                    {
                        PJT4boFs0lA7 = 97;
                        while (PJT4boFs0lA7 < 123) {
                            if (Dmc8p6igeqx[PfbLic4] == PJT4boFs0lA7) {
                                NjuG4wW1[PJT4boFs0lA7 -97]++;
                                break;
                            }
                            PJT4boFs0lA7++;
                        };
                    }
                    PfbLic4++;
                };
            }
            {
                PfbLic4 = 0;
                while (PfbLic4 < gJTwi06KObl) {
                    if (NjuG4wW1[Dmc8p6igeqx[PfbLic4] - 97] == (53 - 52)) {
                        printf ("%c\n", Dmc8p6igeqx[PfbLic4]);
                        IIdcVrouLG4t = 1;
                        break;
                    }
                    PfbLic4++;
                };
            }
            if (IIdcVrouLG4t == 0) {
            }
            qg3RbnJfETF++;
        };
    }
    return 0;
}

