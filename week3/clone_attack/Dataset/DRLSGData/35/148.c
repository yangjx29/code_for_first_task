int main () {
    int HbYL6r;
    int Ca0wis7mLxcl;
    int E3xb8qP;
    int Xr7qOglZQEtA;
    int vMeXIn;
    int HvV5e6;
    int PgY98IdPNM05;
    HbYL6r = (13 - 12);
    char E07U3P;
    int cgX9m3n [(842 - 834)] [(789 - 781)], ivWtHfs [8], zE25i9KC [8];
    scanf ("%d%c%d", &Ca0wis7mLxcl, &E07U3P, &E3xb8qP);
    {
        Xr7qOglZQEtA = (955 - 955);
        while (Ca0wis7mLxcl > Xr7qOglZQEtA) {
            {
                vMeXIn = (843 - 843);
                while (E3xb8qP > vMeXIn) {
                    scanf ("%d", &cgX9m3n[Xr7qOglZQEtA][vMeXIn]);
                    vMeXIn = vMeXIn + (500 - 499);
                }
            }
            Xr7qOglZQEtA = Xr7qOglZQEtA +(609 - 608);
        }
    }
    {
        Xr7qOglZQEtA = (464 - 464);
        while (Xr7qOglZQEtA < Ca0wis7mLxcl) {
            HvV5e6 = cgX9m3n[Xr7qOglZQEtA][(516 - 516)];
            ivWtHfs[Xr7qOglZQEtA] = (160 - 160);
            {
                vMeXIn = (732 - 732);
                while (E3xb8qP > vMeXIn) {
                    if (HvV5e6 < cgX9m3n[Xr7qOglZQEtA][vMeXIn]) {
                        HvV5e6 = cgX9m3n[Xr7qOglZQEtA][vMeXIn];
                        ivWtHfs[Xr7qOglZQEtA] = vMeXIn;
                    }
                    vMeXIn = vMeXIn + (610 - 609);
                }
            }
            Xr7qOglZQEtA = Xr7qOglZQEtA +1;
        }
    }
    {
        vMeXIn = (728 - 728);
        while (vMeXIn < E3xb8qP) {
            PgY98IdPNM05 = cgX9m3n[(600 - 600)][vMeXIn];
            zE25i9KC[vMeXIn] = 0;
            {
                Xr7qOglZQEtA = 0;
                while (Xr7qOglZQEtA < Ca0wis7mLxcl) {
                    if (cgX9m3n[Xr7qOglZQEtA][vMeXIn] < PgY98IdPNM05) {
                        PgY98IdPNM05 = cgX9m3n[Xr7qOglZQEtA][vMeXIn];
                        zE25i9KC[vMeXIn] = Xr7qOglZQEtA;
                    }
                    Xr7qOglZQEtA = Xr7qOglZQEtA +1;
                }
            }
            vMeXIn = vMeXIn + 1;
        }
    }
    {
        Xr7qOglZQEtA = 0;
        while (Xr7qOglZQEtA < Ca0wis7mLxcl) {
            {
                vMeXIn = 0;
                while (vMeXIn < E3xb8qP) {
                    if (ivWtHfs[Xr7qOglZQEtA] == vMeXIn && zE25i9KC[vMeXIn] == Xr7qOglZQEtA) {
                        printf ("%d+%d\n", Xr7qOglZQEtA, vMeXIn);
                        HbYL6r = 0;
                    }
                    vMeXIn++;
                }
            }
            Xr7qOglZQEtA = Xr7qOglZQEtA +1;
        }
    }
    if (HbYL6r)
        ;
    return 0;
}

