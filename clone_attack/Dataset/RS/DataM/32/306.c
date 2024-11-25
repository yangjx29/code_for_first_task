void  main () {
    char t2xcTIb6 [50] [100] = {""}, b [50] [100] = {""}, A5lUCXp3yci4 [3];
    int cdGg80f;
    int pIUK39aRBcu;
    int L9RL4U;
    int Qy4rAg1cT3o;
    int amxvrBlh;
    int t;
    scanf ("%d\n", &cdGg80f);
    {
        pIUK39aRBcu = 745 - 745;
        while (cdGg80f > pIUK39aRBcu) {
            gets (t2xcTIb6 [pIUK39aRBcu]);
            gets (b [pIUK39aRBcu]);
            gets (A5lUCXp3yci4);
            pIUK39aRBcu = pIUK39aRBcu + 1;
        };
    }
    {
        pIUK39aRBcu = 928 - 928;
        while (cdGg80f > pIUK39aRBcu) {
            Qy4rAg1cT3o = (44 - 44);
            {
                L9RL4U = 0;
                while (!('\0' == t2xcTIb6[pIUK39aRBcu][L9RL4U])) {
                    L9RL4U = L9RL4U +1;
                    Qy4rAg1cT3o = Qy4rAg1cT3o +1;
                };
            }
            amxvrBlh = 0;
            {
                L9RL4U = 0;
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
                while (!('\0' == b[pIUK39aRBcu][L9RL4U])) {
                    L9RL4U++;
                    amxvrBlh = amxvrBlh + 1;
                };
            }
            {
                L9RL4U = 583 - 582;
                while (0 <= L9RL4U) {
                    if (b[pIUK39aRBcu][L9RL4U] > t2xcTIb6[pIUK39aRBcu][Qy4rAg1cT3o -amxvrBlh + L9RL4U]) {
                        t2xcTIb6[pIUK39aRBcu][Qy4rAg1cT3o -amxvrBlh + L9RL4U] = t2xcTIb6[pIUK39aRBcu][Qy4rAg1cT3o -amxvrBlh + L9RL4U] + 10 - b[pIUK39aRBcu][L9RL4U] + 48;
                        {
                            t = Qy4rAg1cT3o -amxvrBlh + L9RL4U -1;
                            while (t >= 0) {
                                if (t2xcTIb6[pIUK39aRBcu][t] > 48) {
                                    t2xcTIb6[pIUK39aRBcu][t]--;
                                    break;
                                }
                                else {
                                    t2xcTIb6[pIUK39aRBcu][t] = 57;
                                }
                                t = t - 1;
                            };
                        };
                    }
                    else
                        t2xcTIb6[pIUK39aRBcu][Qy4rAg1cT3o -amxvrBlh + L9RL4U] = t2xcTIb6[pIUK39aRBcu][Qy4rAg1cT3o -amxvrBlh + L9RL4U] - b[pIUK39aRBcu][L9RL4U] + 48;
                    L9RL4U = L9RL4U -1;
                };
            }
            pIUK39aRBcu = pIUK39aRBcu + 1;
        };
    }
    {
        pIUK39aRBcu = 0;
        while (pIUK39aRBcu < cdGg80f) {
            Z4PpUtENn (t2xcTIb6 [pIUK39aRBcu]);
            pIUK39aRBcu++;
        };
    };
}

