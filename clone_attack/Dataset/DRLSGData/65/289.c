int main () {
    int Yf6wHAR;
    scanf ("%d", &Yf6wHAR);
    int a [(791 - 591)];
    int zF4rKOIBgij [200];
    int RHIUTvSfC;
    int d;
    RHIUTvSfC = (505 - 505);
    d = (627 - 627);
    int Lx8nhCryt;
    {
        Lx8nhCryt = 839 - 839;
        while (Lx8nhCryt < Yf6wHAR) {
            scanf ("%d %d", &a[Lx8nhCryt], &zF4rKOIBgij[Lx8nhCryt]);
            Lx8nhCryt = Lx8nhCryt +1;
        }
    }
    {
        Lx8nhCryt = 782 - 782;
        while (Lx8nhCryt < Yf6wHAR) {
            if ((a[Lx8nhCryt] == (69 - 69) && zF4rKOIBgij[Lx8nhCryt] == (252 - 251)) || (a[Lx8nhCryt] == (688 - 687) && zF4rKOIBgij[Lx8nhCryt] == (60 - 58)) || (a[Lx8nhCryt] == (189 - 187) && zF4rKOIBgij[Lx8nhCryt] == 0)) {
                RHIUTvSfC = RHIUTvSfC +1;
            }
            else {
                if ((zF4rKOIBgij[Lx8nhCryt] == 0 && a[Lx8nhCryt] == (870 - 869)) || (zF4rKOIBgij[Lx8nhCryt] == 1 && a[Lx8nhCryt] == (300 - 298)) || (zF4rKOIBgij[Lx8nhCryt] == 2 && a[Lx8nhCryt] == 0)) {
                    d = d + 1;
                }
                else {
                    if ((a[Lx8nhCryt] == 0 && zF4rKOIBgij[Lx8nhCryt] == 0) || (a[Lx8nhCryt] == 1 && zF4rKOIBgij[Lx8nhCryt] == 1) || (a[Lx8nhCryt] == 2 && zF4rKOIBgij[Lx8nhCryt] == 2)) {
                        continue;
                    }
                }
            }
            Lx8nhCryt = Lx8nhCryt +1;
        }
    }
    if (RHIUTvSfC > d) {
        printf ("A");
    }
    else {
        if (RHIUTvSfC < d) {
            printf ("B");
        }
        else {
            printf ("Tie");
        }
    }
    return 0;
}

