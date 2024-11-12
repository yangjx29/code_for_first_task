int main () {
    int Nuf9dKxmpAzZ, HGvyC3K10, zX9W8qkKVZv, rXgdSJ0CI, F7cort, OMJRna1W, AXByvOH;
    int TesFBEvSCWhk [(50689 - 689)];
    int eN3ARC [50000];
    scanf ("%d", &Nuf9dKxmpAzZ);
    AXByvOH = Nuf9dKxmpAzZ -1;
    {
        HGvyC3K10 = 0;
        while (HGvyC3K10 < Nuf9dKxmpAzZ) {
            scanf ("%d %d", &TesFBEvSCWhk[HGvyC3K10], &eN3ARC[HGvyC3K10]);
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
            HGvyC3K10 = HGvyC3K10 +1;
        };
    }
    {
        HGvyC3K10 = 0;
        while (HGvyC3K10 < Nuf9dKxmpAzZ) {
            for (zX9W8qkKVZv = Nuf9dKxmpAzZ -1; zX9W8qkKVZv >= HGvyC3K10; zX9W8qkKVZv = zX9W8qkKVZv - 1) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                if (TesFBEvSCWhk[zX9W8qkKVZv] < TesFBEvSCWhk[AXByvOH]) {
                    AXByvOH = zX9W8qkKVZv;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                };
            }
            F7cort = TesFBEvSCWhk[HGvyC3K10];
            TesFBEvSCWhk[HGvyC3K10] = TesFBEvSCWhk[AXByvOH];
            OMJRna1W = eN3ARC[HGvyC3K10];
            TesFBEvSCWhk[AXByvOH] = F7cort;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            eN3ARC[HGvyC3K10] = eN3ARC[AXByvOH];
            HGvyC3K10++;
            eN3ARC[AXByvOH] = OMJRna1W;
            AXByvOH = Nuf9dKxmpAzZ -1;
        };
    }
    for (rXgdSJ0CI = 1; rXgdSJ0CI < Nuf9dKxmpAzZ; rXgdSJ0CI = rXgdSJ0CI + 1) {
        if (TesFBEvSCWhk[rXgdSJ0CI] <= eN3ARC[rXgdSJ0CI - 1]) {
            if (eN3ARC[rXgdSJ0CI] < eN3ARC[rXgdSJ0CI - 1]) {
                eN3ARC[rXgdSJ0CI] = eN3ARC[rXgdSJ0CI - 1];
            };
        }
        else {
            OMJRna1W = 1;
            break;
        };
    }
    if (OMJRna1W != 1)
        printf ("%d %d\n", TesFBEvSCWhk[0], eN3ARC[Nuf9dKxmpAzZ -1]);
    return 0;
}

