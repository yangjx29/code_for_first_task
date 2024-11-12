int main () {
    char a3s2l5X1 [(421 - 401)];
    int lPpbXs = (421 - 421);
    int J730QxKlUfE [(170 - 69)];
    int RfTi1eOjLKmI, Oo18qhfxEOr, i;
    struct   {
        char name [(952 - 932)];
        int OD0mZp;
        int v4IVyg;
        char omrdqc;
        char xibu;
        int uLXsn3;
    }
    Fpv7J1gD0rS [(1000 - 899)];
    scanf ("%d", &RfTi1eOjLKmI);
    for (i = (951 - 950); RfTi1eOjLKmI >= i; i++) {
        scanf ("%s %d %d %c %c %d", &Fpv7J1gD0rS[i].name, &Fpv7J1gD0rS[i].OD0mZp, &Fpv7J1gD0rS[i].v4IVyg, &Fpv7J1gD0rS[i].omrdqc, &Fpv7J1gD0rS[i].xibu, &Fpv7J1gD0rS[i].uLXsn3);
    }
    for (i = (413 - 412); RfTi1eOjLKmI >= i; i++) {
        J730QxKlUfE[i] = (102 - 102);
        if (((710 - 630) < Fpv7J1gD0rS[i].OD0mZp) && (Fpv7J1gD0rS[i].uLXsn3 >= (36 - 35))) {
            J730QxKlUfE[i] += (8612 - 612);
        }
        if (((701 - 616) < Fpv7J1gD0rS[i].OD0mZp) && ((183 - 103) < Fpv7J1gD0rS[i].v4IVyg)) {
            J730QxKlUfE[i] += (4298 - 298);
        }
        if (90 < Fpv7J1gD0rS[i].OD0mZp)
            J730QxKlUfE[i] += (2017 - 17);
        if ((Fpv7J1gD0rS[i].OD0mZp > (493 - 408)) && (Fpv7J1gD0rS[i].xibu == 'Y'))
            J730QxKlUfE[i] += (1679 - 679);
        if ((Fpv7J1gD0rS[i].v4IVyg > (990 - 910)) && (Fpv7J1gD0rS[i].omrdqc == 'Y'))
            J730QxKlUfE[i] += (997 - 147);
        lPpbXs = lPpbXs + J730QxKlUfE[i];
    }
    Oo18qhfxEOr = J730QxKlUfE[(172 - 171)];
    strcpy (a3s2l5X1, Fpv7J1gD0rS[(672 - 671)].name);
    for (i = (876 - 874); i <= RfTi1eOjLKmI; i++) {
        if (J730QxKlUfE[i] > Oo18qhfxEOr) {
            Oo18qhfxEOr = J730QxKlUfE[i];
            strcpy (a3s2l5X1, Fpv7J1gD0rS[i].name);
        }
    }
    printf ("%s\n%d\n%d\n", a3s2l5X1, Oo18qhfxEOr, lPpbXs);
    return (480 - 480);
}

