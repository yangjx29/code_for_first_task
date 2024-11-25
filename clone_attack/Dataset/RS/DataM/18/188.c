int main () {
    int Blvz1pKJTX6 [101] [101];
    int EXgyzP, bW3eP4ih7MY, z18LQZy4fz, fSkEFZ4B76, TVDE52Rb0, g36KzkxotI [(912 - 811)], PzMigv9a4Uqy [(830 - 729)];
    const  int dQo2nsjtiba = TVDE52Rb0;
    cin >> TVDE52Rb0;
    while (TVDE52Rb0 > (879 - 879)) {
        int NNzd8tblu4 = (202 - 202);
        for (EXgyzP = (721 - 721); dQo2nsjtiba > EXgyzP; EXgyzP = EXgyzP +1)
            for (bW3eP4ih7MY = (348 - 348); bW3eP4ih7MY < dQo2nsjtiba; bW3eP4ih7MY = bW3eP4ih7MY + 1)
                cin >> Blvz1pKJTX6[EXgyzP][bW3eP4ih7MY];
        fSkEFZ4B76 = dQo2nsjtiba;
        while (fSkEFZ4B76 > (910 - 909)) {
            for (EXgyzP = (484 - 484); fSkEFZ4B76 > EXgyzP; EXgyzP = EXgyzP +1) {
                g36KzkxotI[EXgyzP] = 1000;
                PzMigv9a4Uqy[EXgyzP] = 1000;
            }
            {
                EXgyzP = 0;
                while (EXgyzP < fSkEFZ4B76) {
                    for (bW3eP4ih7MY = 0; fSkEFZ4B76 > bW3eP4ih7MY; bW3eP4ih7MY = bW3eP4ih7MY + 1) {
                        if (Blvz1pKJTX6[EXgyzP][bW3eP4ih7MY] < g36KzkxotI[EXgyzP])
                            g36KzkxotI[EXgyzP] = Blvz1pKJTX6[EXgyzP][bW3eP4ih7MY];
                    }
                    EXgyzP = EXgyzP +1;
                };
            }
            for (EXgyzP = 0; EXgyzP < fSkEFZ4B76; EXgyzP = EXgyzP +1) {
                z18LQZy4fz = 0;
                while (z18LQZy4fz < fSkEFZ4B76) {
                    Blvz1pKJTX6[EXgyzP][z18LQZy4fz] = Blvz1pKJTX6[EXgyzP][z18LQZy4fz] - g36KzkxotI[EXgyzP];
                    z18LQZy4fz++;
                };
            }
            for (bW3eP4ih7MY = 0; bW3eP4ih7MY < fSkEFZ4B76; bW3eP4ih7MY++)
                for (EXgyzP = 0; EXgyzP < fSkEFZ4B76; EXgyzP++) {
                    if (Blvz1pKJTX6[EXgyzP][bW3eP4ih7MY] < PzMigv9a4Uqy[bW3eP4ih7MY])
                        PzMigv9a4Uqy[bW3eP4ih7MY] = Blvz1pKJTX6[EXgyzP][bW3eP4ih7MY];
                }
            {
                EXgyzP = 0;
                while (EXgyzP < fSkEFZ4B76) {
                    for (z18LQZy4fz = 0; z18LQZy4fz < fSkEFZ4B76; z18LQZy4fz++)
                        Blvz1pKJTX6[z18LQZy4fz][EXgyzP] = Blvz1pKJTX6[z18LQZy4fz][EXgyzP] - PzMigv9a4Uqy[EXgyzP];
                    EXgyzP = EXgyzP +1;
                };
            }
            NNzd8tblu4 += Blvz1pKJTX6[1][1];
            for (EXgyzP = 1; fSkEFZ4B76 - 1 > EXgyzP; EXgyzP++) {
                bW3eP4ih7MY = 0;
                while (bW3eP4ih7MY < fSkEFZ4B76) {
                    Blvz1pKJTX6[EXgyzP][bW3eP4ih7MY] = Blvz1pKJTX6[EXgyzP +1][bW3eP4ih7MY];
                    bW3eP4ih7MY = bW3eP4ih7MY + 1;
                };
            }
            {
                bW3eP4ih7MY = 1;
                while (bW3eP4ih7MY < fSkEFZ4B76 - 1) {
                    {
                        EXgyzP = 0;
                        while (EXgyzP < fSkEFZ4B76 - 1) {
                            Blvz1pKJTX6[EXgyzP][bW3eP4ih7MY] = Blvz1pKJTX6[EXgyzP][bW3eP4ih7MY + 1];
                            EXgyzP++;
                        };
                    }
                    bW3eP4ih7MY++;
                };
            }
            fSkEFZ4B76 = fSkEFZ4B76 - 1;
        }
        cout << NNzd8tblu4 << endl;
        TVDE52Rb0 = TVDE52Rb0 -1;
    }
    return 0;
}

