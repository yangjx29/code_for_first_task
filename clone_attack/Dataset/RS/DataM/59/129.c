int uYZgMU7nlGr0, JaXxglv, xn7AwJpM;
int cyR0tMrfc [102] [102];

int main () {
    char IzH61yA;
    int NCiEYs;
    int RB1e7ZOl8JLC;
    int cWqxY78L;
    xn7AwJpM = 0;
    scanf ("%d", &uYZgMU7nlGr0);
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
    {
        NCiEYs = 663 - 662;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (NCiEYs <= uYZgMU7nlGr0) {
            scanf ("%c", &IzH61yA);
            {
                RB1e7ZOl8JLC = 777 - 776;
                while (RB1e7ZOl8JLC <= uYZgMU7nlGr0) {
                    scanf ("%c", &IzH61yA);
                    if (IzH61yA == '#')
                        cyR0tMrfc[NCiEYs][RB1e7ZOl8JLC] = -(644 - 643);
                    else {
                        if (IzH61yA == '.')
                            cyR0tMrfc[NCiEYs][RB1e7ZOl8JLC] = (466 - 466);
                        else {
                            if (!('@' != IzH61yA))
                                cyR0tMrfc[NCiEYs][RB1e7ZOl8JLC] = (354 - 353);
                        };
                    }
                    RB1e7ZOl8JLC++;
                };
            }
            NCiEYs++;
        };
    }
    scanf ("%d", &JaXxglv);
    {
        NCiEYs = 429 - 429;
        while (uYZgMU7nlGr0 + (982 - 981) >= NCiEYs) {
            cyR0tMrfc[NCiEYs][(183 - 183)] = cyR0tMrfc[0][NCiEYs] = cyR0tMrfc[NCiEYs][uYZgMU7nlGr0 + (281 - 280)] = cyR0tMrfc[uYZgMU7nlGr0 + (829 - 828)][NCiEYs] = -1;
            NCiEYs++;
        };
    }
    for (cWqxY78L = 1; cWqxY78L < JaXxglv; cWqxY78L++) {
        NCiEYs = 1;
        while (NCiEYs <= uYZgMU7nlGr0) {
            {
                RB1e7ZOl8JLC = 1;
                while (RB1e7ZOl8JLC <= uYZgMU7nlGr0) {
                    if (cyR0tMrfc[NCiEYs][RB1e7ZOl8JLC] == cWqxY78L) {
                        if (cyR0tMrfc[NCiEYs +1][RB1e7ZOl8JLC] == 0)
                            cyR0tMrfc[NCiEYs +1][RB1e7ZOl8JLC] = cWqxY78L + 1;
                        if (cyR0tMrfc[NCiEYs -1][RB1e7ZOl8JLC] == 0)
                            cyR0tMrfc[NCiEYs -1][RB1e7ZOl8JLC] = cWqxY78L + 1;
                        if (cyR0tMrfc[NCiEYs][RB1e7ZOl8JLC +1] == 0)
                            cyR0tMrfc[NCiEYs][RB1e7ZOl8JLC +1] = cWqxY78L + 1;
                        if (cyR0tMrfc[NCiEYs][RB1e7ZOl8JLC -1] == 0)
                            cyR0tMrfc[NCiEYs][RB1e7ZOl8JLC -1] = cWqxY78L + 1;
                    }
                    RB1e7ZOl8JLC++;
                };
            }
            NCiEYs++;
        };
    }
    {
        NCiEYs = 1;
        while (NCiEYs <= uYZgMU7nlGr0) {
            {
                RB1e7ZOl8JLC = 1;
                while (RB1e7ZOl8JLC <= uYZgMU7nlGr0) {
                    if (cyR0tMrfc[NCiEYs][RB1e7ZOl8JLC] > 0)
                        xn7AwJpM++;
                    RB1e7ZOl8JLC++;
                };
            }
            NCiEYs++;
        };
    }
    printf ("%d\n", xn7AwJpM);
    return 0;
}

