main () {
    int Vb3GrUR [(159 - 154)] [5];
    int ZPgGF3Nw0y;
    int z8xgTo;
    int Qeg3t7x;
    int count;
    int fmXhrlDURA;
    int NHNmnye;
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
    int d4neUNJjDC;
    count = 0;
    fmXhrlDURA = 0;
    NHNmnye = 0;
    for (ZPgGF3Nw0y = (497 - 497); ZPgGF3Nw0y < 5; ZPgGF3Nw0y = ZPgGF3Nw0y +1) {
        z8xgTo = 0;
        while (z8xgTo < 5) {
            scanf ("%d", &Vb3GrUR[ZPgGF3Nw0y][z8xgTo]);
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
            z8xgTo = z8xgTo + 1;
        };
    }
    {
        ZPgGF3Nw0y = 0;
        while (ZPgGF3Nw0y < 5) {
            fmXhrlDURA = 0;
            NHNmnye = 0;
            {
                z8xgTo = 0;
                while (z8xgTo < 5) {
                    if (Vb3GrUR[ZPgGF3Nw0y][z8xgTo] > fmXhrlDURA) {
                        fmXhrlDURA = Vb3GrUR[ZPgGF3Nw0y][z8xgTo];
                        d4neUNJjDC = z8xgTo;
                    }
                    z8xgTo = z8xgTo + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            {
                Qeg3t7x = 0;
                while (Qeg3t7x < 5) {
                    if (Vb3GrUR[ZPgGF3Nw0y][d4neUNJjDC] > Vb3GrUR[Qeg3t7x][d4neUNJjDC])
                        break;
                    Qeg3t7x++;
                };
            }
            if (Qeg3t7x == 5) {
                count++;
                printf ("%d %d %d\n", ZPgGF3Nw0y +(642 - 641), d4neUNJjDC + 1, Vb3GrUR[ZPgGF3Nw0y][d4neUNJjDC]);
            }
            ZPgGF3Nw0y = ZPgGF3Nw0y +1;
        };
    }
    if (count == 0)
        ;
}

