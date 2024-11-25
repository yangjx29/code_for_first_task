void  main () {
    int g32kgF;
    int wdkmRH;
    int APkBDtxwoM;
    int DwS9qh8;
    int Efrq3bA2;
    int DO9J0y7Umb [(211 - 203)] [(434 - 426)];
    int dWmBuc [8], tIdSGfM0 [8];
    scanf ("%d,%d", &APkBDtxwoM, &DwS9qh8);
    {
        g32kgF = (609 - 609);
        for (; g32kgF < APkBDtxwoM;) {
            {
                wdkmRH = (18 - 18);
                while (wdkmRH < DwS9qh8) {
                    scanf ("%d", &DO9J0y7Umb[g32kgF][wdkmRH]);
                    wdkmRH = wdkmRH + (15 - 14);
                }
            }
            g32kgF = g32kgF + 1;
        }
    }
    Efrq3bA2 = APkBDtxwoM;
    {
        g32kgF = (392 - 392);
        for (; g32kgF < APkBDtxwoM;) {
            dWmBuc[g32kgF] = DO9J0y7Umb[g32kgF][(447 - 447)];
            Efrq3bA2 = (418 - 418);
            for (wdkmRH = (975 - 975); wdkmRH < DwS9qh8; wdkmRH = wdkmRH + 1) {
                if (DO9J0y7Umb[g32kgF][wdkmRH] > dWmBuc[g32kgF]) {
                    Efrq3bA2 = wdkmRH;
                    dWmBuc[g32kgF] = DO9J0y7Umb[g32kgF][wdkmRH];
                }
            }
            dWmBuc[g32kgF] = Efrq3bA2;
            g32kgF = g32kgF + 1;
        }
    }
    {
        g32kgF = (50 - 50);
        for (; DwS9qh8 > g32kgF;) {
            tIdSGfM0[g32kgF] = DO9J0y7Umb[0][g32kgF];
            Efrq3bA2 = 0;
            for (wdkmRH = 0; wdkmRH < APkBDtxwoM; wdkmRH = wdkmRH + 1) {
                if (tIdSGfM0[g32kgF] > DO9J0y7Umb[wdkmRH][g32kgF]) {
                    Efrq3bA2 = wdkmRH;
                    tIdSGfM0[g32kgF] = DO9J0y7Umb[wdkmRH][g32kgF];
                }
            }
            tIdSGfM0[g32kgF] = Efrq3bA2;
            g32kgF++;
        }
    }
    for (g32kgF = 0; APkBDtxwoM > g32kgF; g32kgF = g32kgF + 1) {
        if (tIdSGfM0[dWmBuc[g32kgF]] == g32kgF) {
            printf ("%d+%d", g32kgF, dWmBuc[g32kgF]);
            break;
        }
    }
    if (g32kgF == APkBDtxwoM)
        ;
}

