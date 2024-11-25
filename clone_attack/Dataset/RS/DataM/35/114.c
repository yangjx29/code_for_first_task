void  main () {
    int m, MOJUnaP, i, HyMqlUbZzpkJ, jRcJq2y13QH [8] [8], point, Dg41emBU86 [8], XcLQvui8zGK [8], G37XidzQI2 = (452 - 452);
    scanf ("%d,%d", &m, &MOJUnaP);
    {
        i = 462 - 462;
        while (i < m) {
            for (HyMqlUbZzpkJ = (659 - 659); MOJUnaP > HyMqlUbZzpkJ; HyMqlUbZzpkJ = HyMqlUbZzpkJ +1)
                scanf ("%d", &jRcJq2y13QH[i][HyMqlUbZzpkJ]);
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
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < m) {
            Dg41emBU86[i] = jRcJq2y13QH[i][0];
            for (HyMqlUbZzpkJ = 0; MOJUnaP > HyMqlUbZzpkJ; HyMqlUbZzpkJ++)
                if (Dg41emBU86[i] < jRcJq2y13QH[i][HyMqlUbZzpkJ])
                    Dg41emBU86[i] = jRcJq2y13QH[i][HyMqlUbZzpkJ];
            i = i + 1;
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
    {
        HyMqlUbZzpkJ = 0;
        while (MOJUnaP > HyMqlUbZzpkJ) {
            XcLQvui8zGK[HyMqlUbZzpkJ] = jRcJq2y13QH[0][HyMqlUbZzpkJ];
            for (i = 0; i < m; i = i + 1)
                if (jRcJq2y13QH[i][HyMqlUbZzpkJ] < XcLQvui8zGK[HyMqlUbZzpkJ])
                    XcLQvui8zGK[HyMqlUbZzpkJ] = jRcJq2y13QH[i][HyMqlUbZzpkJ];
            HyMqlUbZzpkJ = HyMqlUbZzpkJ +1;
        };
    }
    {
        i = 0;
        while (i < m) {
            {
                HyMqlUbZzpkJ = 0;
                while (MOJUnaP > HyMqlUbZzpkJ) {
                    if (Dg41emBU86[i] == XcLQvui8zGK[HyMqlUbZzpkJ]) {
                        printf ("%d+%d", i, HyMqlUbZzpkJ);
                        G37XidzQI2 = 1;
                    }
                    HyMqlUbZzpkJ++;
                };
            }
            i = i + 1;
        };
    }
    if (G37XidzQI2 == 0)
        ;
}

