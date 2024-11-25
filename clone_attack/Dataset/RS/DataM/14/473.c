struct   student {
    long  HaYpDP0Zg;
    int mbXLEm70wZ2;
    int maBFkiO6vAT;
    int add;
};
struct   student E9xvRS [100000];

void  main () {
    int aEvQs3djVSJ7;
    int w98xEoWV;
    int f9qZdgl3U1N;
    int oy14FDrk;
    int bwioJfgCE0;
    scanf ("%d", &f9qZdgl3U1N);
    {
        oy14FDrk = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (oy14FDrk < f9qZdgl3U1N) {
            scanf ("%ld %d %d", &E9xvRS[oy14FDrk].HaYpDP0Zg, &E9xvRS[oy14FDrk].mbXLEm70wZ2, &E9xvRS[oy14FDrk].maBFkiO6vAT);
            E9xvRS[oy14FDrk].add = E9xvRS[oy14FDrk].mbXLEm70wZ2 + E9xvRS[oy14FDrk].maBFkiO6vAT;
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
            oy14FDrk = oy14FDrk + 1;
        };
    }
    {
        bwioJfgCE0 = 0;
        while (bwioJfgCE0 < 3) {
            bwioJfgCE0 = bwioJfgCE0 + 1;
            {
                oy14FDrk = 919 - 918;
                while (0 < oy14FDrk) {
                    if (E9xvRS[oy14FDrk].add > E9xvRS[oy14FDrk - 1].add) {
                        w98xEoWV = E9xvRS[oy14FDrk].add;
                        E9xvRS[oy14FDrk].add = E9xvRS[oy14FDrk - 1].add;
                        E9xvRS[oy14FDrk - 1].add = w98xEoWV;
                        aEvQs3djVSJ7 = E9xvRS[oy14FDrk].HaYpDP0Zg;
                        E9xvRS[oy14FDrk].HaYpDP0Zg = E9xvRS[oy14FDrk - 1].HaYpDP0Zg;
                        E9xvRS[oy14FDrk - 1].HaYpDP0Zg = aEvQs3djVSJ7;
                    }
                    oy14FDrk = oy14FDrk - 1;
                };
            };
        };
    }
    {
        oy14FDrk = 0;
        while (oy14FDrk < 3) {
            printf ("%ld %d\n", E9xvRS[oy14FDrk].HaYpDP0Zg, E9xvRS[oy14FDrk].add);
            oy14FDrk = oy14FDrk + 1;
        };
    };
}

