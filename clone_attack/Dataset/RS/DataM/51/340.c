int main () {
    char o29URBSQd [511];
    char O56gMCiqc2WT [511] [511];
    char Qfsu3IhJMOXc [511];
    int gLHemYGa, VkCwM1LQzYbs, i, WTrUMq = 0, j, nPG5xvc, wkuwZAW [511] = {0}, ddGt0iyu3o1 = 0, Wn8rOUfJki = 0, s = 0, o2yOSnYkRv, sC3NX7xaL8PT, C5F8ql;
    gets (o29URBSQd);
    VkCwM1LQzYbs = strlen (o29URBSQd);
    scanf ("%d", &gLHemYGa);
    getchar ();
    for (i = 0; VkCwM1LQzYbs -gLHemYGa >= i; i++) {
        WTrUMq = 0;
        for (j = 0; j < gLHemYGa;) {
            O56gMCiqc2WT[ddGt0iyu3o1][j] = o29URBSQd[i + WTrUMq];
            j += 1;
            WTrUMq += 1;
        }
        O56gMCiqc2WT[ddGt0iyu3o1][j] = '\0';
        ddGt0iyu3o1 = ddGt0iyu3o1 + 1;
    }
    {
        Wn8rOUfJki = 0;
        while (VkCwM1LQzYbs -gLHemYGa >= Wn8rOUfJki) {
            {
                s = Wn8rOUfJki;
                while (s <= VkCwM1LQzYbs -gLHemYGa) {
                    if (strcmp (O56gMCiqc2WT[Wn8rOUfJki], O56gMCiqc2WT[s]) == 0) {
                        wkuwZAW[Wn8rOUfJki] = wkuwZAW[Wn8rOUfJki] + 1;
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
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    s++;
                };
            }
            Wn8rOUfJki++;
        };
    }
    sC3NX7xaL8PT = wkuwZAW[0];
    {
        o2yOSnYkRv = 0;
        while (o2yOSnYkRv <= VkCwM1LQzYbs -gLHemYGa) {
            if (wkuwZAW[o2yOSnYkRv] > sC3NX7xaL8PT)
                sC3NX7xaL8PT = wkuwZAW[o2yOSnYkRv];
            o2yOSnYkRv++;
        };
    }
    if (sC3NX7xaL8PT > 1) {
        printf ("%d\n", sC3NX7xaL8PT);
        {
            o2yOSnYkRv = 0;
            while (o2yOSnYkRv <= VkCwM1LQzYbs -gLHemYGa) {
                if (wkuwZAW[o2yOSnYkRv] == sC3NX7xaL8PT) {
                    printf ("%s\n", O56gMCiqc2WT[o2yOSnYkRv]);
                }
                o2yOSnYkRv++;
            };
        };
    }
    else
        printf ("NO");
    return 0;
}

