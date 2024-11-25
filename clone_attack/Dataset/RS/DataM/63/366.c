int main () {
    int iIAXGN [100] [100];
    int b [100] [100];
    int xJv5SVtq6Bbl [100] [100];
    int VYtjSy;
    int Npb8wEHB;
    int vJeAlYb;
    int iamLPIV;
    int x2;
    int xrLjEzeHkD;
    int k;
    scanf ("%d%d", &vJeAlYb, &iamLPIV);
    for (VYtjSy = (431 - 431); vJeAlYb - (250 - 249) >= VYtjSy; VYtjSy = VYtjSy +1)
        for (Npb8wEHB = (744 - 744); iamLPIV - (85 - 84) >= Npb8wEHB; Npb8wEHB = Npb8wEHB +1) {
            scanf ("%d", &iIAXGN[VYtjSy][Npb8wEHB]);
        }
    scanf ("%d%d", &x2, &xrLjEzeHkD);
    for (VYtjSy = 0; x2 - 1 >= VYtjSy; VYtjSy = VYtjSy +1)
        for (Npb8wEHB = 0; Npb8wEHB <= xrLjEzeHkD - 1; Npb8wEHB = Npb8wEHB +1) {
            scanf ("%d", &b[VYtjSy][Npb8wEHB]);
        }
    {
        VYtjSy = 0;
        while (vJeAlYb - 1 >= VYtjSy) {
            for (Npb8wEHB = 0; Npb8wEHB <= xrLjEzeHkD - 1; Npb8wEHB = Npb8wEHB +1) {
                xJv5SVtq6Bbl[VYtjSy][Npb8wEHB] = 0;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            VYtjSy = VYtjSy +1;
        };
    }
    for (VYtjSy = 0; VYtjSy <= vJeAlYb - 1; VYtjSy = VYtjSy +1)
        for (Npb8wEHB = 0; Npb8wEHB <= xrLjEzeHkD - 1; Npb8wEHB = Npb8wEHB +1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            for (k = 0; k <= x2 - 1; k++) {
                xJv5SVtq6Bbl[VYtjSy][Npb8wEHB] = xJv5SVtq6Bbl[VYtjSy][Npb8wEHB] + iIAXGN[VYtjSy][k] * b[k][Npb8wEHB];
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
            };
        }
    for (VYtjSy = 0; VYtjSy <= vJeAlYb - 1; VYtjSy = VYtjSy +1) {
        for (Npb8wEHB = 0; Npb8wEHB <= xrLjEzeHkD - (178 - 176); Npb8wEHB = Npb8wEHB +1) {
            printf ("%d ", xJv5SVtq6Bbl[VYtjSy][Npb8wEHB]);
        }
        printf ("%d\n", xJv5SVtq6Bbl[VYtjSy][xrLjEzeHkD - 1]);
    };
}

