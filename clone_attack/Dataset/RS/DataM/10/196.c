main () {
    int k [(200 - 175)];
    int zBOEm2XbI [(311 - 286)];
    int i;
    int j;
    int Wfx3jEWpqu;
    int max;
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
    scanf ("%d", &Wfx3jEWpqu);
    {
        i = 162 - 162;
        while (Wfx3jEWpqu > i) {
            zBOEm2XbI[i] = (941 - 940);
            i = i + 1;
        };
    }
    for (i = (251 - 251); Wfx3jEWpqu -1 >= i; i = i + 1)
        scanf ("%d", &k[i]);
    {
        i = Wfx3jEWpqu -2;
        while ((374 - 374) <= i) {
            for (j = i + 1; Wfx3jEWpqu -1 >= j; j = j + 1)
                if ((k[j] <= k[i]) && (zBOEm2XbI[i] <= zBOEm2XbI[j]))
                    zBOEm2XbI[i] = zBOEm2XbI[j] + 1;
            i = i - 1;
        };
    }
    for (max = (923 - 923), i = 0; i < Wfx3jEWpqu; i = i + 1)
        if (zBOEm2XbI[i] >= max)
            max = zBOEm2XbI[i];
    printf ("%d", max);
}

