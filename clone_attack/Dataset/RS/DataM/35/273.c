int main () {
    int V5jHzvCko [(614 - 606)] [(381 - 373)];
    int pim6Qel;
    int sNCI290vO;
    int rvTsaWKBU;
    int oane4MN;
    int gqF2LlBoZHs;
    int Bnt2ZHSJYxyu;
    int BW1RZrvEz [8];
    int Cz7UNEO [8];
    int flag;
    scanf ("%d,%d", &gqF2LlBoZHs, &Bnt2ZHSJYxyu);
    {
        pim6Qel = 986 - 986;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (gqF2LlBoZHs > pim6Qel) {
            for (sNCI290vO = (229 - 229); Bnt2ZHSJYxyu > sNCI290vO; sNCI290vO = sNCI290vO + 1) {
                scanf ("%d", &V5jHzvCko[pim6Qel][sNCI290vO]);
            }
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
            pim6Qel = pim6Qel + 1;
        };
    }
    {
        pim6Qel = 604 - 604;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (gqF2LlBoZHs > pim6Qel) {
            Cz7UNEO[pim6Qel] = 0;
            rvTsaWKBU = V5jHzvCko[pim6Qel][0];
            for (sNCI290vO = (198 - 197); Bnt2ZHSJYxyu > sNCI290vO; sNCI290vO = sNCI290vO + 1) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (V5jHzvCko[pim6Qel][sNCI290vO] > rvTsaWKBU) {
                    rvTsaWKBU = V5jHzvCko[pim6Qel][sNCI290vO];
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
                    Cz7UNEO[pim6Qel] = sNCI290vO;
                };
            }
            pim6Qel++;
        };
    }
    for (sNCI290vO = 0; sNCI290vO < Bnt2ZHSJYxyu; sNCI290vO++) {
        BW1RZrvEz[sNCI290vO] = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        oane4MN = V5jHzvCko[0][sNCI290vO];
        for (pim6Qel = 1; gqF2LlBoZHs > pim6Qel; pim6Qel = pim6Qel + 1) {
            if (V5jHzvCko[pim6Qel][sNCI290vO] < oane4MN) {
                oane4MN = V5jHzvCko[pim6Qel][sNCI290vO];
                BW1RZrvEz[sNCI290vO] = pim6Qel;
            };
        };
    }
    flag = 1;
    for (pim6Qel = 0; gqF2LlBoZHs > pim6Qel; pim6Qel = pim6Qel + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (sNCI290vO = 0; sNCI290vO < Bnt2ZHSJYxyu; sNCI290vO++) {
            if (V5jHzvCko[pim6Qel][Cz7UNEO[pim6Qel]] == V5jHzvCko[BW1RZrvEz[sNCI290vO]][sNCI290vO]) {
                printf ("%d+%d\n", BW1RZrvEz[sNCI290vO], Cz7UNEO[pim6Qel]);
                flag = 0;
                break;
            };
        };
    }
    if (flag)
        printf ("No\n");
    return 0;
}

