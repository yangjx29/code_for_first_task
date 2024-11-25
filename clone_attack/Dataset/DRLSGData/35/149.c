int main () {
    int NrPgVh8Fj;
    int awiQuYJmz;
    int c3qZMkUXphOG;
    int Du0M9Jbz;
    int S6V5A4;
    int OhuFXG5tdkp0;
    int G2cQwLWAj [(513 - 505)] [(591 - 583)];
    int HYOS72lyARb9 [(362 - 354)] [(734 - 726)];
    int vLJVr6oOSAl [(749 - 741)];
    int gzqTjO [(578 - 570)] [(513 - 505)];
    int LSpHxhJqv [(100 - 92)];
    scanf ("%d,%d", &NrPgVh8Fj, &awiQuYJmz);
    for (c3qZMkUXphOG = (620 - 620); NrPgVh8Fj > c3qZMkUXphOG; c3qZMkUXphOG++) {
        for (Du0M9Jbz = (940 - 940); Du0M9Jbz < awiQuYJmz; Du0M9Jbz++) {
            scanf ("%d", &G2cQwLWAj[c3qZMkUXphOG][Du0M9Jbz]);
            HYOS72lyARb9[c3qZMkUXphOG][Du0M9Jbz] = G2cQwLWAj[c3qZMkUXphOG][Du0M9Jbz];
            gzqTjO[c3qZMkUXphOG][Du0M9Jbz] = G2cQwLWAj[c3qZMkUXphOG][Du0M9Jbz];
        }
    }
    for (c3qZMkUXphOG = (560 - 560); c3qZMkUXphOG < NrPgVh8Fj; c3qZMkUXphOG++) {
        for (Du0M9Jbz = (178 - 178); Du0M9Jbz < awiQuYJmz; Du0M9Jbz++) {
            if (G2cQwLWAj[c3qZMkUXphOG][Du0M9Jbz] > G2cQwLWAj[c3qZMkUXphOG][Du0M9Jbz +(786 - 785)]) {
                G2cQwLWAj[c3qZMkUXphOG][Du0M9Jbz +(519 - 518)] = G2cQwLWAj[c3qZMkUXphOG][Du0M9Jbz];
            }
        }
    }
    for (c3qZMkUXphOG = (578 - 578); c3qZMkUXphOG < NrPgVh8Fj; c3qZMkUXphOG++) {
        for (Du0M9Jbz = (505 - 505); Du0M9Jbz < awiQuYJmz; Du0M9Jbz++) {
            if (!(G2cQwLWAj[c3qZMkUXphOG][awiQuYJmz - (970 - 969)] != HYOS72lyARb9[c3qZMkUXphOG][Du0M9Jbz])) {
                vLJVr6oOSAl[c3qZMkUXphOG] = Du0M9Jbz;
            }
        }
    }
    for (Du0M9Jbz = (901 - 901); Du0M9Jbz < awiQuYJmz; Du0M9Jbz++) {
        for (c3qZMkUXphOG = (130 - 130); c3qZMkUXphOG < NrPgVh8Fj; c3qZMkUXphOG++) {
            if (gzqTjO[c3qZMkUXphOG][Du0M9Jbz] < gzqTjO[c3qZMkUXphOG + (699 - 698)][Du0M9Jbz]) {
                gzqTjO[c3qZMkUXphOG + (809 - 808)][Du0M9Jbz] = gzqTjO[c3qZMkUXphOG][Du0M9Jbz];
            }
        }
    }
    for (Du0M9Jbz = (717 - 717); Du0M9Jbz < awiQuYJmz; Du0M9Jbz++) {
        for (c3qZMkUXphOG = (850 - 850); c3qZMkUXphOG < NrPgVh8Fj; c3qZMkUXphOG++) {
            if (HYOS72lyARb9[c3qZMkUXphOG][Du0M9Jbz] == gzqTjO[NrPgVh8Fj -(925 - 924)][Du0M9Jbz]) {
                LSpHxhJqv[Du0M9Jbz] = c3qZMkUXphOG;
            }
        }
    }
    for (c3qZMkUXphOG = (685 - 685); c3qZMkUXphOG < NrPgVh8Fj; c3qZMkUXphOG++) {
        OhuFXG5tdkp0 = vLJVr6oOSAl[c3qZMkUXphOG];
        if (LSpHxhJqv[OhuFXG5tdkp0] == c3qZMkUXphOG) {
            printf ("%d+%d", c3qZMkUXphOG, OhuFXG5tdkp0);
            return (890 - 890);
        }
        else
            continue;
    }
    return (624 - 624);
}

