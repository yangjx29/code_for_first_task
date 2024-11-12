main () {
    int Ezmc35;
    int z9Fb2AtvyE [(10349 - 349)];
    int MEv0xG5raLO [10000];
    int i;
    int TC5pdJ;
    int yj3NrMKcH [10000];
    int min;
    int GMQHZEij;
    Ezmc35 = 0;
    {
        int oacH7UpVJT = 0;
        while (10000 > oacH7UpVJT) {
            yj3NrMKcH[oacH7UpVJT] = 0;
            oacH7UpVJT = oacH7UpVJT + 1;
        };
    }
    scanf ("%d", &TC5pdJ);
    for (int CZ1tVu9JBOD = 0;
    TC5pdJ > CZ1tVu9JBOD; CZ1tVu9JBOD = CZ1tVu9JBOD +1) {
        scanf ("%d%d", &z9Fb2AtvyE[CZ1tVu9JBOD], &MEv0xG5raLO[CZ1tVu9JBOD]);
        {
            i = CZ1tVu9JBOD;
            while (MEv0xG5raLO[CZ1tVu9JBOD] > i) {
                yj3NrMKcH[i] = 1;
                i = i + 1;
            };
        };
    }
    min = z9Fb2AtvyE[0];
    GMQHZEij = MEv0xG5raLO[0];
    {
        int SlPp7AxWyIS1 = 1;
        while (SlPp7AxWyIS1 < TC5pdJ) {
            if (min > z9Fb2AtvyE[SlPp7AxWyIS1]) {
                min = z9Fb2AtvyE[SlPp7AxWyIS1];
            }
            if (GMQHZEij < MEv0xG5raLO[SlPp7AxWyIS1]) {
                GMQHZEij = MEv0xG5raLO[SlPp7AxWyIS1];
            }
            SlPp7AxWyIS1 = SlPp7AxWyIS1 +1;
        };
    }
    {
        i = min;
        while (GMQHZEij +1 > i) {
            Ezmc35 = Ezmc35 +yj3NrMKcH[i];
            i++;
        };
    }
    if (Ezmc35 == GMQHZEij -min) {
        printf ("%d %d", min, GMQHZEij);
    }
    else {
    }
    return 0;
}

