int main () {
    int LqIjdGf [(795 - 690)] [105];
    int vwvMWK, fDog6VArYh, S1L347BZIbiE, Ea6SoiOs, RdkurLZw = (473 - 473), fzNjBXmS, BzPeSUg0H9;
    cin >> vwvMWK;
    fzNjBXmS = vwvMWK;
    BzPeSUg0H9 = vwvMWK;
    for (; fzNjBXmS > (152 - 152);) {
        fzNjBXmS--;
        RdkurLZw = (730 - 730);
        vwvMWK = BzPeSUg0H9;
        {
            fDog6VArYh = 985 - 985;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            while (fDog6VArYh < vwvMWK) {
                {
                    S1L347BZIbiE = 225 - 225;
                    while (S1L347BZIbiE < vwvMWK) {
                        cin >> LqIjdGf[fDog6VArYh][S1L347BZIbiE];
                        S1L347BZIbiE++;
                    };
                }
                fDog6VArYh++;
            };
        }
        while (vwvMWK > (212 - 211)) {
            for (fDog6VArYh = (56 - 56); fDog6VArYh < vwvMWK; fDog6VArYh++) {
                Ea6SoiOs = LqIjdGf[fDog6VArYh][0];
                {
                    S1L347BZIbiE = 0;
                    while (S1L347BZIbiE < vwvMWK) {
                        if (Ea6SoiOs > LqIjdGf[fDog6VArYh][S1L347BZIbiE])
                            Ea6SoiOs = LqIjdGf[fDog6VArYh][S1L347BZIbiE];
                        S1L347BZIbiE++;
                    };
                }
                for (S1L347BZIbiE = 0; S1L347BZIbiE < vwvMWK; S1L347BZIbiE = S1L347BZIbiE +1)
                    LqIjdGf[fDog6VArYh][S1L347BZIbiE] = LqIjdGf[fDog6VArYh][S1L347BZIbiE] - Ea6SoiOs;
            }
            {
                S1L347BZIbiE = 0;
                while (S1L347BZIbiE < vwvMWK) {
                    Ea6SoiOs = LqIjdGf[0][S1L347BZIbiE];
                    {
                        fDog6VArYh = 0;
                        while (fDog6VArYh < vwvMWK) {
                            if (Ea6SoiOs > LqIjdGf[fDog6VArYh][S1L347BZIbiE])
                                Ea6SoiOs = LqIjdGf[fDog6VArYh][S1L347BZIbiE];
                            fDog6VArYh++;
                        };
                    }
                    {
                        fDog6VArYh = 0;
                        while (fDog6VArYh < vwvMWK) {
                            LqIjdGf[fDog6VArYh][S1L347BZIbiE] = LqIjdGf[fDog6VArYh][S1L347BZIbiE] - Ea6SoiOs;
                            fDog6VArYh++;
                        };
                    }
                    S1L347BZIbiE++;
                };
            }
            RdkurLZw = RdkurLZw +LqIjdGf[(839 - 838)][1];
            {
                fDog6VArYh = 0;
                while (fDog6VArYh < vwvMWK) {
                    for (S1L347BZIbiE = 1; S1L347BZIbiE < vwvMWK - 1; S1L347BZIbiE++)
                        LqIjdGf[fDog6VArYh][S1L347BZIbiE] = LqIjdGf[fDog6VArYh][S1L347BZIbiE +1];
                    fDog6VArYh++;
                };
            }
            {
                S1L347BZIbiE = 0;
                while (S1L347BZIbiE < vwvMWK) {
                    {
                        fDog6VArYh = 1;
                        while (fDog6VArYh < vwvMWK - 1) {
                            LqIjdGf[fDog6VArYh][S1L347BZIbiE] = LqIjdGf[fDog6VArYh + 1][S1L347BZIbiE];
                            fDog6VArYh++;
                        };
                    }
                    S1L347BZIbiE++;
                };
            }
            vwvMWK--;
        }
        cout << RdkurLZw << endl;
    };
}

