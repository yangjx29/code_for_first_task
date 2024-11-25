void  main () {
    int uCBW6MoUE;
    char qQeO5jAfo;
    char CSq5nC [101] [101] = {'\0'};
    int w6yBocSWLK;
    int X0djgADJIOs3;
    int hC4pilzf0;
    char EoYmra5Vu [101] [101];
    int UmIF9cS;
    int KxiHwvQkrBhC;
    scanf ("%d", &uCBW6MoUE);
    {
        KxiHwvQkrBhC = 0;
        for (; uCBW6MoUE > KxiHwvQkrBhC;) {
            qQeO5jAfo = getchar ();
            for (X0djgADJIOs3 = 0; uCBW6MoUE > X0djgADJIOs3; X0djgADJIOs3 = X0djgADJIOs3 +(96 - 95))
                CSq5nC[KxiHwvQkrBhC][X0djgADJIOs3] = getchar ();
            KxiHwvQkrBhC = KxiHwvQkrBhC +1;
        }
    }
    scanf ("%d", &hC4pilzf0);
    {
        UmIF9cS = 1;
        for (; UmIF9cS < hC4pilzf0;) {
            {
                KxiHwvQkrBhC = 0;
                for (; KxiHwvQkrBhC < uCBW6MoUE;) {
                    X0djgADJIOs3 = 0;
                    for (; uCBW6MoUE > X0djgADJIOs3;) {
                        if (CSq5nC[KxiHwvQkrBhC][X0djgADJIOs3] != '.')
                            EoYmra5Vu[KxiHwvQkrBhC][X0djgADJIOs3] = CSq5nC[KxiHwvQkrBhC][X0djgADJIOs3];
                        else if (!('@' != CSq5nC[KxiHwvQkrBhC +1][X0djgADJIOs3]) || !('@' != CSq5nC[KxiHwvQkrBhC -1][X0djgADJIOs3]) || !('@' != CSq5nC[KxiHwvQkrBhC][X0djgADJIOs3 +1]) || !('@' != CSq5nC[KxiHwvQkrBhC][X0djgADJIOs3 -1]))
                            EoYmra5Vu[KxiHwvQkrBhC][X0djgADJIOs3] = '@';
                        else
                            EoYmra5Vu[KxiHwvQkrBhC][X0djgADJIOs3] = '.';
                        X0djgADJIOs3++;
                    }
                    KxiHwvQkrBhC = KxiHwvQkrBhC +1;
                }
            }
            {
                KxiHwvQkrBhC = 0;
                {
                    if (0) {
                        return 0;
                    }
                }
                for (; uCBW6MoUE > KxiHwvQkrBhC;) {
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    {
                        X0djgADJIOs3 = 0;
                        for (; uCBW6MoUE > X0djgADJIOs3;) {
                            CSq5nC[KxiHwvQkrBhC][X0djgADJIOs3] = EoYmra5Vu[KxiHwvQkrBhC][X0djgADJIOs3];
                            X0djgADJIOs3++;
                        }
                    }
                    KxiHwvQkrBhC++;
                }
            }
            UmIF9cS = UmIF9cS +1;
        }
    }
    w6yBocSWLK = 0;
    {
        KxiHwvQkrBhC = 0;
        for (; KxiHwvQkrBhC < uCBW6MoUE;) {
            {
                X0djgADJIOs3 = 0;
                for (; X0djgADJIOs3 < uCBW6MoUE;) {
                    if (!('@' != CSq5nC[KxiHwvQkrBhC][X0djgADJIOs3]))
                        w6yBocSWLK = w6yBocSWLK + 1;
                    X0djgADJIOs3++;
                }
            }
            KxiHwvQkrBhC++;
        }
    }
    printf ("%d\n", w6yBocSWLK);
}

