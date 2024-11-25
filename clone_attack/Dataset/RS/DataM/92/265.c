main () {
    int v;
    v = 0;
    int Hnuc5GQv9Z;
    int W5rS0Bj7E;
    int J4BfNj9ZKm;
    int j6qfYSC3tj;
    int Qm6wWXCneoJ0;
    int f08I1Lw;
    int pNnv3bza;
    int gvSDfW5kz;
    int SykdnMRriC;
    int er3YPIgUuBc;
    int vCzH8x;
    int kW4x6Z;
    int xk4sl1;
    int wT4LoXqCMG [1000];
    int Pt53aqL [1000];
    int lKghuxTWbMD [1000];
    do {
        scanf ("%d", &Hnuc5GQv9Z);
        {
            J4BfNj9ZKm = 0;
            while (J4BfNj9ZKm <= Hnuc5GQv9Z -1) {
                scanf ("%d", &wT4LoXqCMG[J4BfNj9ZKm]);
                J4BfNj9ZKm = J4BfNj9ZKm +1;
            };
        }
        {
            j6qfYSC3tj = 0;
            while (j6qfYSC3tj <= Hnuc5GQv9Z -1) {
                scanf ("%d", &Pt53aqL[j6qfYSC3tj]);
                j6qfYSC3tj = j6qfYSC3tj + 1;
            };
        }
        {
            Qm6wWXCneoJ0 = 0;
            while (Qm6wWXCneoJ0 <= Hnuc5GQv9Z -1) {
                {
                    f08I1Lw = 0;
                    while (f08I1Lw <= Hnuc5GQv9Z -2 - Qm6wWXCneoJ0) {
                        if (wT4LoXqCMG[f08I1Lw] < wT4LoXqCMG[f08I1Lw + 1]) {
                            vCzH8x = wT4LoXqCMG[f08I1Lw + 1];
                            wT4LoXqCMG[f08I1Lw + 1] = wT4LoXqCMG[f08I1Lw];
                            wT4LoXqCMG[f08I1Lw] = vCzH8x;
                        }
                        f08I1Lw = f08I1Lw + 1;
                    };
                }
                Qm6wWXCneoJ0 = Qm6wWXCneoJ0 +1;
            };
        }
        {
            SykdnMRriC = 0;
            while (SykdnMRriC <= Hnuc5GQv9Z -1) {
                {
                    er3YPIgUuBc = 0;
                    while (er3YPIgUuBc <= Hnuc5GQv9Z -2 - SykdnMRriC) {
                        if (Pt53aqL[er3YPIgUuBc] < Pt53aqL[er3YPIgUuBc + 1]) {
                            vCzH8x = Pt53aqL[er3YPIgUuBc + 1];
                            Pt53aqL[er3YPIgUuBc + 1] = Pt53aqL[er3YPIgUuBc];
                            Pt53aqL[er3YPIgUuBc] = vCzH8x;
                        }
                        er3YPIgUuBc = er3YPIgUuBc + 1;
                    };
                }
                SykdnMRriC++;
            };
        }
        {
            W5rS0Bj7E = 0;
            while (W5rS0Bj7E <= Hnuc5GQv9Z -1) {
                {
                    f08I1Lw = 0;
                    while (f08I1Lw <= Hnuc5GQv9Z -1 - W5rS0Bj7E) {
                        lKghuxTWbMD[W5rS0Bj7E +f08I1Lw] = wT4LoXqCMG[f08I1Lw];
                        f08I1Lw++;
                    };
                }
                for (gvSDfW5kz = 0; W5rS0Bj7E -1 >= gvSDfW5kz; gvSDfW5kz++)
                    lKghuxTWbMD[gvSDfW5kz] = wT4LoXqCMG[f08I1Lw + gvSDfW5kz];
                {
                    pNnv3bza = 0;
                    while (pNnv3bza <= Hnuc5GQv9Z -1) {
                        if (Pt53aqL[pNnv3bza] > lKghuxTWbMD[pNnv3bza])
                            v = v - 200;
                        else {
                            if (Pt53aqL[pNnv3bza] < lKghuxTWbMD[pNnv3bza])
                                v = v + 200;
                        }
                        pNnv3bza++;
                    };
                }
                if (W5rS0Bj7E != 0 && v > kW4x6Z)
                    kW4x6Z = v;
                else {
                    if (W5rS0Bj7E == 0)
                        kW4x6Z = v;
                    else {
                        if (W5rS0Bj7E == (Hnuc5GQv9Z -1) / 2 + 1)
                            break;
                    };
                }
                W5rS0Bj7E = W5rS0Bj7E +1;
                v = 0;
            };
        }
        v = 0;
        if (Hnuc5GQv9Z != 0)
            printf ("%d\n", kW4x6Z);
    }
    while (Hnuc5GQv9Z != 0);
}

