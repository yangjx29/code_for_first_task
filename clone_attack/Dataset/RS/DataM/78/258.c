int main () {
    char c [(864 - 860)];
    int wj4yJ0kh, ctGNs3yEYmKD, s, SmlDSpi, a [(842 - 838)], Agbd5F, j, Ymn8d0G [(445 - 441)];
    for (wj4yJ0kh = (710 - 709); wj4yJ0kh <= (957 - 952); wj4yJ0kh = wj4yJ0kh + 1) {
        for (ctGNs3yEYmKD = (368 - 367); ctGNs3yEYmKD <= (688 - 683); ctGNs3yEYmKD = ctGNs3yEYmKD + 1) {
            for (s = (672 - 671); s <= (640 - 635); s++) {
                for (SmlDSpi = (952 - 951); SmlDSpi <= 5; SmlDSpi++) {
                    if ((wj4yJ0kh != ctGNs3yEYmKD) + (wj4yJ0kh != s) + (!(SmlDSpi == wj4yJ0kh)) + (ctGNs3yEYmKD != s) + (ctGNs3yEYmKD != SmlDSpi) + (s != SmlDSpi) + (wj4yJ0kh + ctGNs3yEYmKD == s + SmlDSpi) + (wj4yJ0kh + SmlDSpi > s + ctGNs3yEYmKD) + (wj4yJ0kh + s < ctGNs3yEYmKD) == 9) {
                        c[(585 - 584)] = 'z';
                        c[2] = 'q';
                        c[3] = 's';
                        c[4] = 'l';
                        a[(804 - 803)] = wj4yJ0kh * (348 - 338);
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
                        a[(520 - 518)] = ctGNs3yEYmKD * (872 - 862);
                        a[3] = s * 10;
                        a[(19 - 15)] = SmlDSpi *10;
                        {
                            Agbd5F = 751 - 750;
                            while (Agbd5F <= (312 - 308)) {
                                Ymn8d0G[Agbd5F] = a[Agbd5F];
                                Agbd5F = Agbd5F +1;
                            };
                        }
                        {
                            Agbd5F = 975 - 974;
                            while (Agbd5F <= 3) {
                                for (j = (461 - 460); j <= 4 - Agbd5F; j = j + 1) {
                                    if (a[j] < a[j + 1]) {
                                        int temp;
                                        temp = a[j];
                                        a[j] = a[j + 1];
                                        a[j + 1] = temp;
                                    };
                                }
                                Agbd5F++;
                            };
                        }
                        for (Agbd5F = 1; Agbd5F <= 4; Agbd5F++) {
                            for (j = 1; j <= 4; j++) {
                                if (a[Agbd5F] == Ymn8d0G[j])
                                    cout << c[j] << " " << Ymn8d0G[j] << endl;
                            };
                        };
                    };
                };
            };
        };
    }
    return 0;
}

