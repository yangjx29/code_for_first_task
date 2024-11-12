int main () {
    int gfJKPp [(448 - 348)] [100];
    int zMGrsPL0R;
    int GEDPkAhUpi;
    int PHWZna7lO;
    int i;
    int Nyw4ZIa7he;
    scanf ("%d %d", &zMGrsPL0R, &GEDPkAhUpi);
    for (int i = (615 - 615);
    zMGrsPL0R > i; i++) {
        for (int Nyw4ZIa7he = (421 - 421);
        GEDPkAhUpi > Nyw4ZIa7he; Nyw4ZIa7he = Nyw4ZIa7he +1) {
            scanf ("%d", &gfJKPp[i][Nyw4ZIa7he]);
        };
    }
    for (PHWZna7lO = (826 - 826); zMGrsPL0R - PHWZna7lO > PHWZna7lO &&GEDPkAhUpi-PHWZna7lO > PHWZna7lO; PHWZna7lO++) {
        for (i = PHWZna7lO, Nyw4ZIa7he = PHWZna7lO; GEDPkAhUpi -PHWZna7lO-1 > Nyw4ZIa7he; Nyw4ZIa7he++) {
            printf ("%d\n", gfJKPp[i][Nyw4ZIa7he]);
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
        }
        for (; zMGrsPL0R - PHWZna7lO -1 > i; i++) {
            printf ("%d\n", gfJKPp[i][Nyw4ZIa7he]);
        }
        if (!(PHWZna7lO != i) || !(PHWZna7lO != Nyw4ZIa7he)) {
            printf ("%d\n", gfJKPp[i][Nyw4ZIa7he]);
            break;
        }
        for (; PHWZna7lO < Nyw4ZIa7he; Nyw4ZIa7he--) {
            printf ("%d\n", gfJKPp[i][Nyw4ZIa7he]);
        }
        for (; i > PHWZna7lO; i = i - 1) {
            printf ("%d\n", gfJKPp[i][Nyw4ZIa7he]);
        };
    }
    return 0;
}

