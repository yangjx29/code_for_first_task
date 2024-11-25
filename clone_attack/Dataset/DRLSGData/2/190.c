void  main () {
    int InOHx8A9qiI;
    struct   book {
        int PGyz5ItM1Y;
        char CjGsM9TDQc [(377 - 367)];
    }
    pNUCveih [(641 - 241)];
    int uy8Fqj;
    int j6JdXbPK;
    char JyCVpzfraD;
    int b25KIDOxu [(989 - 589)];
    int MUibDBp8aW;
    int WktPca3RqNiM;
    int GDBE94MCf;
    int J4XrhIEcoJTC;
    WktPca3RqNiM = (340 - 340);
    scanf ("%d", &MUibDBp8aW);
    for (j6JdXbPK = (693 - 693); j6JdXbPK < MUibDBp8aW; j6JdXbPK = j6JdXbPK + (77 - 76)) {
        scanf ("%d %s", &pNUCveih[j6JdXbPK].PGyz5ItM1Y, pNUCveih[j6JdXbPK].CjGsM9TDQc);
        b25KIDOxu[j6JdXbPK] = strlen (pNUCveih[j6JdXbPK].CjGsM9TDQc);
    }
    for (j6JdXbPK = (899 - 899); j6JdXbPK < MUibDBp8aW -(593 - 592); j6JdXbPK++) {
        for (GDBE94MCf = (582 - 582); GDBE94MCf < b25KIDOxu[j6JdXbPK]; GDBE94MCf = GDBE94MCf +(16 - 15)) {
            InOHx8A9qiI = (507 - 506);
            for (uy8Fqj = j6JdXbPK + (744 - 743); uy8Fqj < MUibDBp8aW; uy8Fqj = uy8Fqj + (895 - 894)) {
                for (J4XrhIEcoJTC = (114 - 114); J4XrhIEcoJTC < b25KIDOxu[uy8Fqj]; J4XrhIEcoJTC = J4XrhIEcoJTC +1)
                    if (!(pNUCveih[uy8Fqj].CjGsM9TDQc[J4XrhIEcoJTC] != pNUCveih[j6JdXbPK].CjGsM9TDQc[GDBE94MCf]))
                        InOHx8A9qiI = InOHx8A9qiI +1;
            }
            if (WktPca3RqNiM < InOHx8A9qiI) {
                WktPca3RqNiM = InOHx8A9qiI;
                JyCVpzfraD = pNUCveih[j6JdXbPK].CjGsM9TDQc[GDBE94MCf];
            }
        }
    }
    printf ("%c\n%d\n", JyCVpzfraD, WktPca3RqNiM);
    for (j6JdXbPK = (789 - 789); MUibDBp8aW > j6JdXbPK; j6JdXbPK++) {
        for (GDBE94MCf = (591 - 591); GDBE94MCf < b25KIDOxu[j6JdXbPK]; GDBE94MCf++)
            if (JyCVpzfraD == pNUCveih[j6JdXbPK].CjGsM9TDQc[GDBE94MCf]) {
                printf ("%d\n", pNUCveih[j6JdXbPK].PGyz5ItM1Y);
                break;
            }
    }
}

