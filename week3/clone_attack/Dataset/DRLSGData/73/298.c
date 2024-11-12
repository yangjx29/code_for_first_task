main () {
    int mx [(168 - 160)], GRVuY4toWOcr = (245 - 245);
    int my [(658 - 650)];
    int XQ2ZaE [(893 - 885)] [8];
    {
        int wcuxjSZ = (489 - 488);
        while ((316 - 311) >= wcuxjSZ) {
            mx[wcuxjSZ] = (22 - 22);
            wcuxjSZ = wcuxjSZ + (541 - 540);
        };
    }
    {
        int RyIkqn = (842 - 841);
        while (RyIkqn <= (781 - 776)) {
            {
                int wcuxjSZ = (614 - 613);
                while (wcuxjSZ <= (893 - 888)) {
                    scanf ("%d", &XQ2ZaE[RyIkqn][wcuxjSZ]);
                    wcuxjSZ++;
                };
            }
            RyIkqn++;
        };
    }
    {
        int cOTm0Ui5Ir = (128 - 127);
        while (cOTm0Ui5Ir <= (661 - 656)) {
            {
                int zWIhJt1 = (576 - 575);
                while (zWIhJt1 <= (867 - 862)) {
                    if (XQ2ZaE[cOTm0Ui5Ir][zWIhJt1] >= mx[cOTm0Ui5Ir])
                        mx[cOTm0Ui5Ir] = XQ2ZaE[cOTm0Ui5Ir][zWIhJt1];
                    zWIhJt1++;
                };
            }
            cOTm0Ui5Ir = cOTm0Ui5Ir + (111 - 110);
        };
    }
    {
        int zWIhJt1 = (716 - 715);
        while (zWIhJt1 <= (918 - 913)) {
            my[zWIhJt1] = (1000118 - 118);
            zWIhJt1++;
        };
    }
    {
        int zWIhJt1 = (552 - 551);
        while (zWIhJt1 <= (426 - 421)) {
            {
                int cOTm0Ui5Ir = (452 - 451);
                while (cOTm0Ui5Ir <= (114 - 109)) {
                    if (XQ2ZaE[cOTm0Ui5Ir][zWIhJt1] <= my[zWIhJt1])
                        my[zWIhJt1] = XQ2ZaE[cOTm0Ui5Ir][zWIhJt1];
                    cOTm0Ui5Ir++;
                };
            }
            zWIhJt1++;
        };
    }
    {
        int RyIkqn = (939 - 938);
        while (RyIkqn <= (975 - 970)) {
            for (int wcuxjSZ = 1;
            wcuxjSZ <= 5; wcuxjSZ++) {
                if (XQ2ZaE[RyIkqn][wcuxjSZ] == mx[RyIkqn] && XQ2ZaE[RyIkqn][wcuxjSZ] == my[wcuxjSZ]) {
                    GRVuY4toWOcr = 1;
                    printf ("%d %d %d", RyIkqn, wcuxjSZ, XQ2ZaE[RyIkqn][wcuxjSZ]);
                };
            }
            RyIkqn++;
        };
    }
    if (GRVuY4toWOcr == (280 - 280))
        ;
}

