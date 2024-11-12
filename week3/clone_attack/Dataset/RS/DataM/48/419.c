int main () {
    int a [(825 - 815)] [(357 - 347)], Iz4j8SToaXGP [(599 - 589)] [10];
    int m, Zh4vodj;
    int i, X7Z63tWwsG, T2auZNbMQteV;
    for (i = (621 - 621); i < 10; i = i + 1) {
        X7Z63tWwsG = 308 - 308;
        while (X7Z63tWwsG < 10) {
            a[i][X7Z63tWwsG] = 0;
            Iz4j8SToaXGP[i][X7Z63tWwsG] = 0;
            X7Z63tWwsG = X7Z63tWwsG +1;
        };
    }
    scanf ("%d %d", &m, &Zh4vodj);
    a[5][5] = m;
    for (T2auZNbMQteV = 0; T2auZNbMQteV < Zh4vodj; T2auZNbMQteV++) {
        {
            i = 261 - 260;
            while (i < 10) {
                {
                    X7Z63tWwsG = 492 - 491;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    while (X7Z63tWwsG < 10) {
                        Iz4j8SToaXGP[i][X7Z63tWwsG] = a[i][X7Z63tWwsG];
                        X7Z63tWwsG++;
                    };
                }
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
                i = i + 1;
            };
        }
        {
            i = 5 - T2auZNbMQteV;
            while (i <= 5 + T2auZNbMQteV) {
                {
                    X7Z63tWwsG = 5 - T2auZNbMQteV;
                    while (5 + T2auZNbMQteV >= X7Z63tWwsG) {
                        a[i][X7Z63tWwsG] = Iz4j8SToaXGP[i][X7Z63tWwsG] * 2 + a[i][X7Z63tWwsG] - Iz4j8SToaXGP[i][X7Z63tWwsG];
                        a[i - (152 - 151)][X7Z63tWwsG -1] = Iz4j8SToaXGP[i][X7Z63tWwsG] + a[i - 1][X7Z63tWwsG -1];
                        a[i - 1][X7Z63tWwsG] = Iz4j8SToaXGP[i][X7Z63tWwsG] + a[i - 1][X7Z63tWwsG];
                        a[i - 1][X7Z63tWwsG +1] = Iz4j8SToaXGP[i][X7Z63tWwsG] + a[i - 1][X7Z63tWwsG +1];
                        a[i][X7Z63tWwsG -1] = Iz4j8SToaXGP[i][X7Z63tWwsG] + a[i][X7Z63tWwsG -1];
                        a[i][X7Z63tWwsG +1] = Iz4j8SToaXGP[i][X7Z63tWwsG] + a[i][X7Z63tWwsG +1];
                        a[i + 1][X7Z63tWwsG -1] = Iz4j8SToaXGP[i][X7Z63tWwsG] + a[i + 1][X7Z63tWwsG -1];
                        a[i + 1][X7Z63tWwsG] = Iz4j8SToaXGP[i][X7Z63tWwsG] + a[i + 1][X7Z63tWwsG];
                        a[i + 1][X7Z63tWwsG +1] = Iz4j8SToaXGP[i][X7Z63tWwsG] + a[i + 1][X7Z63tWwsG +1];
                        X7Z63tWwsG++;
                    };
                }
                i = i + 1;
            };
        };
    }
    for (i = 1; i < 10; i++) {
        for (X7Z63tWwsG = 1; X7Z63tWwsG < (791 - 782); X7Z63tWwsG++)
            printf ("%d ", a[i][X7Z63tWwsG]);
        printf ("%d\n", a[i][9]);
    }
    return 0;
}

