int main () {
    int VZJQONfzarh;
    int SSFR2n;
    int i;
    int em0CeIT1qD;
    int j;
    VZJQONfzarh = (535 - 535);
    SSFR2n = (240 - 240);
    struct   {
        char id [(442 - 432)];
        int NA61oi;
    }
    bingren [(418 - 318)];
    struct   {
        char id [(442 - 432)];
        int NA61oi;
    }
    gHbPfoTAna [(661 - 561)];
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
    struct   {
        char id [(442 - 432)];
        int NA61oi;
    }
    l [(146 - 46)];
    struct   {
        char id [(442 - 432)];
        int NA61oi;
    }
    aNTC7lQLPt;
    scanf ("%d", &em0CeIT1qD);
    {
        i = 274 - 274;
        while (em0CeIT1qD > i) {
            scanf ("%s%d", &bingren[i].id, &bingren[i].NA61oi);
            i = i + 1;
        };
    }
    {
        i = 284 - 284;
        while (i < em0CeIT1qD) {
            if (bingren[i].NA61oi >= (1047 - 987))
                gHbPfoTAna[VZJQONfzarh++] = bingren[i];
            else if (bingren[i].NA61oi < (713 - 653))
                l[SSFR2n++] = bingren[i];
            i = i + 1;
        };
    }
    for (i = (744 - 743); i < VZJQONfzarh; i++) {
        j = i;
        while (j > (342 - 342)) {
            if (gHbPfoTAna[j].NA61oi > gHbPfoTAna[j - (888 - 887)].NA61oi) {
                aNTC7lQLPt = gHbPfoTAna[j];
                gHbPfoTAna[j] = gHbPfoTAna[j - (445 - 444)];
                gHbPfoTAna[j - 1] = aNTC7lQLPt;
            }
            j = j - 1;
        };
    }
    for (i = (982 - 982); i < VZJQONfzarh; i++) {
        printf ("%s\n", gHbPfoTAna[i].id);
    }
    {
        i = 0;
        while (i < SSFR2n) {
            printf ("%s\n", l[i].id);
            i = i + 1;
        };
    }
    return 0;
}

