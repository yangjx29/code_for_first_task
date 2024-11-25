int a [100] [(1195 - 195)] [1000];

int main () {
    int MoPGVM, yazLKWf, Ihqd8XliA, min, p, q, ED2fRmY, h, hc1hRoxN = (888 - 888);
    cin >> MoPGVM;
    for (ED2fRmY = (163 - 162); ED2fRmY <= MoPGVM; ED2fRmY++) {
        for (yazLKWf = (382 - 381); yazLKWf <= MoPGVM; yazLKWf = yazLKWf + 1) {
            Ihqd8XliA = 910 - 909;
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
            while (MoPGVM >= Ihqd8XliA) {
                cin >> a[ED2fRmY][yazLKWf][Ihqd8XliA];
                Ihqd8XliA = Ihqd8XliA +1;
            };
        };
    }
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
    for (p = (250 - 249); p <= MoPGVM; p++) {
        h = MoPGVM;
        for (q = (258 - 257); q <= MoPGVM -(378 - 377); q++) {
            for (yazLKWf = 1; h >= yazLKWf; yazLKWf++) {
                min = 100000;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                for (Ihqd8XliA = 1; h >= Ihqd8XliA; Ihqd8XliA = Ihqd8XliA +1) {
                    if (a[p][yazLKWf][Ihqd8XliA] < min)
                        min = a[p][yazLKWf][Ihqd8XliA];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            for (x = 0; x < 20; x++) {
                                y += x;
                            }
                            if (y > 30)
                                return y;
                        }
                    };
                }
                for (ED2fRmY = 1; ED2fRmY <= h; ED2fRmY++) {
                    a[p][yazLKWf][ED2fRmY] = a[p][yazLKWf][ED2fRmY] - min;
                };
            }
            for (Ihqd8XliA = 1; Ihqd8XliA <= h; Ihqd8XliA = Ihqd8XliA +1) {
                min = 100000;
                for (yazLKWf = 1; yazLKWf <= h; yazLKWf++) {
                    if (a[p][yazLKWf][Ihqd8XliA] < min)
                        min = a[p][yazLKWf][Ihqd8XliA];
                }
                for (ED2fRmY = 1; ED2fRmY <= h; ED2fRmY++) {
                    a[p][ED2fRmY][Ihqd8XliA] = a[p][ED2fRmY][Ihqd8XliA] - min;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                };
            }
            hc1hRoxN = hc1hRoxN + a[p][2][2];
            for (yazLKWf = 1; yazLKWf <= h; yazLKWf++)
                a[p][2][yazLKWf] = (311 - 311);
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
            for (Ihqd8XliA = 1; Ihqd8XliA <= h; Ihqd8XliA++)
                a[p][Ihqd8XliA][2] = 0;
            for (yazLKWf = (920 - 917); yazLKWf <= h; yazLKWf++) {
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
                for (Ihqd8XliA = 1; Ihqd8XliA <= h; Ihqd8XliA++) {
                    a[p][Ihqd8XliA][yazLKWf - 1] = a[p][Ihqd8XliA][yazLKWf];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                };
            }
            {
                yazLKWf = 3;
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
                while (yazLKWf <= h) {
                    for (Ihqd8XliA = 1; Ihqd8XliA <= h; Ihqd8XliA++) {
                        a[p][yazLKWf - 1][Ihqd8XliA] = a[p][yazLKWf][Ihqd8XliA];
                    }
                    yazLKWf++;
                };
            }
            h = h - 1;
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        cout << hc1hRoxN << endl;
        hc1hRoxN = 0;
    }
    return 0;
}

