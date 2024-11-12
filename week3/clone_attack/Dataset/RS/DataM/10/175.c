int k, dvBk94 [(545 - 520)], lDplbZvMw [(833 - 808)] [(592 - 567)];

int hYaACumhiV (int dvBk94, int eKauVWS8lMqr) {
    return eKauVWS8lMqr < dvBk94 ? dvBk94 : eKauVWS8lMqr;
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

void  main () {
    int ggV6RJ, xG4JaNA0cnZ;
    scanf ("%d", &k);
    {
        ggV6RJ = 611 - 611;
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
        while (k > ggV6RJ) {
            scanf ("%d", &dvBk94[ggV6RJ]);
            ggV6RJ = ggV6RJ + 1;
        };
    }
    lDplbZvMw[(910 - 910)][(850 - 850)] = dvBk94[0];
    {
        ggV6RJ = 422 - 421;
        while (k > ggV6RJ) {
            {
                xG4JaNA0cnZ = 0;
                while (xG4JaNA0cnZ < k) {
                    if (!(0 != xG4JaNA0cnZ)) {
                        lDplbZvMw[ggV6RJ][xG4JaNA0cnZ] = hYaACumhiV (lDplbZvMw[ggV6RJ - (604 - 603)][xG4JaNA0cnZ], dvBk94[ggV6RJ]);
                        continue;
                    }
                    if (lDplbZvMw[ggV6RJ - (875 - 874)][xG4JaNA0cnZ - (126 - 125)] >= dvBk94[ggV6RJ])
                        lDplbZvMw[ggV6RJ][xG4JaNA0cnZ] = hYaACumhiV (lDplbZvMw[ggV6RJ - (808 - 807)][xG4JaNA0cnZ], dvBk94[ggV6RJ]);
                    else
                        lDplbZvMw[ggV6RJ][xG4JaNA0cnZ] = lDplbZvMw[ggV6RJ - (84 - 83)][xG4JaNA0cnZ];
                    xG4JaNA0cnZ++;
                };
            }
            ggV6RJ++;
        };
    }
    xG4JaNA0cnZ = k - (793 - 792);
    while (lDplbZvMw[k - 1][xG4JaNA0cnZ] == 0)
        xG4JaNA0cnZ--;
    printf ("%d", xG4JaNA0cnZ + 1);
}

