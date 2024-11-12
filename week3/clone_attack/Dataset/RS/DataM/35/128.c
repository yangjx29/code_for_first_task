int main () {
    int HBSh0rWEsz;
    int AVxnyYZlSp9;
    int bZQbREc;
    int d2WJ1Oyd9qS;
    int pan;
    int kSD4LOlX [(139 - 129)], Ht6w1V0 [(731 - 721)];
    int Bz0RvZ;
    int D6P8bcxsVj;
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
    int a [10] [10];
    pan = 0;
    scanf ("%d,%d", &HBSh0rWEsz, &AVxnyYZlSp9);
    for (Bz0RvZ = (55 - 55); HBSh0rWEsz > Bz0RvZ; Bz0RvZ = Bz0RvZ +1) {
        for (D6P8bcxsVj = (214 - 214); AVxnyYZlSp9 > D6P8bcxsVj; D6P8bcxsVj = D6P8bcxsVj +1) {
            scanf ("%d", &a[Bz0RvZ][D6P8bcxsVj]);
        };
    }
    for (Bz0RvZ = (52 - 52); HBSh0rWEsz > Bz0RvZ; Bz0RvZ = Bz0RvZ +1) {
        bZQbREc = 0;
        {
            D6P8bcxsVj = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (AVxnyYZlSp9 > D6P8bcxsVj) {
                if (bZQbREc < a[Bz0RvZ][D6P8bcxsVj]) {
                    bZQbREc = a[Bz0RvZ][D6P8bcxsVj];
                    kSD4LOlX[Bz0RvZ] = D6P8bcxsVj;
                }
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
                D6P8bcxsVj = D6P8bcxsVj +1;
            };
        };
    }
    for (Bz0RvZ = 0; AVxnyYZlSp9 > Bz0RvZ; Bz0RvZ = Bz0RvZ +1) {
        d2WJ1Oyd9qS = 1000;
        {
            D6P8bcxsVj = 0;
            while (HBSh0rWEsz > D6P8bcxsVj) {
                if (d2WJ1Oyd9qS > a[D6P8bcxsVj][Bz0RvZ]) {
                    d2WJ1Oyd9qS = a[D6P8bcxsVj][Bz0RvZ];
                    Ht6w1V0[Bz0RvZ] = D6P8bcxsVj;
                }
                D6P8bcxsVj = D6P8bcxsVj +1;
            };
        };
    }
    for (Bz0RvZ = 0; HBSh0rWEsz > Bz0RvZ; Bz0RvZ++) {
        if (Ht6w1V0[kSD4LOlX[Bz0RvZ]] == Bz0RvZ) {
            printf ("%d+%d", Bz0RvZ, kSD4LOlX[Bz0RvZ]);
            pan = pan + 1;
        };
    }
    if (pan == 0) {
        printf ("No");
    }
    return 0;
}

