int main () {
    int FmdviZL, ryQchwDHJetb, A2xWVj7tL6gp, y2;
    int **M1LGMqC = (int **) malloc (FmdviZL * sizeof (int *));
    int **Ildwos9m5qL = (int **) malloc (A2xWVj7tL6gp * sizeof (int *));
    int **p3 = (int **) malloc (FmdviZL * sizeof (int *));
    int ZuzSpUVarXjl, t6EuJDk, aYFxI4tlhW;
    scanf ("%d %d", &FmdviZL, &ryQchwDHJetb);
    for (ZuzSpUVarXjl = (400 - 400); FmdviZL > ZuzSpUVarXjl; ZuzSpUVarXjl = ZuzSpUVarXjl +1)
        M1LGMqC[ZuzSpUVarXjl] = (int *) malloc (ryQchwDHJetb * sizeof (int));
    {
        ZuzSpUVarXjl = 331 - 331;
        while (FmdviZL > ZuzSpUVarXjl) {
            {
                t6EuJDk = 750 - 750;
                while (ryQchwDHJetb > t6EuJDk) {
                    scanf ("%d", &M1LGMqC[ZuzSpUVarXjl][t6EuJDk]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    t6EuJDk = t6EuJDk + 1;
                };
            }
            ZuzSpUVarXjl = ZuzSpUVarXjl +1;
        };
    }
    scanf ("%d %d", &A2xWVj7tL6gp, &y2);
    for (ZuzSpUVarXjl = (538 - 538); A2xWVj7tL6gp > ZuzSpUVarXjl; ZuzSpUVarXjl = ZuzSpUVarXjl +1)
        Ildwos9m5qL[ZuzSpUVarXjl] = (int *) malloc (y2 * sizeof (int));
    for (ZuzSpUVarXjl = (221 - 221); A2xWVj7tL6gp > ZuzSpUVarXjl; ZuzSpUVarXjl = ZuzSpUVarXjl +1) {
        t6EuJDk = 110 - 110;
        while (y2 > t6EuJDk) {
            scanf ("%d", &Ildwos9m5qL[ZuzSpUVarXjl][t6EuJDk]);
            t6EuJDk = t6EuJDk + 1;
        };
    }
    {
        ZuzSpUVarXjl = 249 - 249;
        while (FmdviZL > ZuzSpUVarXjl) {
            p3[ZuzSpUVarXjl] = (int *) malloc (y2 * sizeof (int));
            ZuzSpUVarXjl = ZuzSpUVarXjl +1;
        };
    }
    {
        ZuzSpUVarXjl = 0;
        while (FmdviZL > ZuzSpUVarXjl) {
            {
                t6EuJDk = 0;
                while (y2 > t6EuJDk) {
                    p3[ZuzSpUVarXjl][t6EuJDk] = 0;
                    for (aYFxI4tlhW = 0; ryQchwDHJetb > aYFxI4tlhW; aYFxI4tlhW = aYFxI4tlhW + 1)
                        p3[ZuzSpUVarXjl][t6EuJDk] = p3[ZuzSpUVarXjl][t6EuJDk] + M1LGMqC[ZuzSpUVarXjl][aYFxI4tlhW] * Ildwos9m5qL[aYFxI4tlhW][t6EuJDk];
                    if (t6EuJDk == y2 - (955 - 954))
                        printf ("%d\n", p3[ZuzSpUVarXjl][t6EuJDk]);
                    else
                        printf ("%d ", p3[ZuzSpUVarXjl][t6EuJDk]);
                    t6EuJDk++;
                };
            }
            ZuzSpUVarXjl = ZuzSpUVarXjl +1;
        };
    }
    return 0;
}

