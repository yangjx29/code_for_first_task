int dIgup4d (char towExI [], int zy4YvJ) {
    int AhZD1StvmpA0;
    int RYq9niNwT;
    RYq9niNwT = (80 - 80);
    {
        AhZD1StvmpA0 = (1568 - 806) - (859 - 97);
        for (; zy4YvJ > AhZD1StvmpA0;) {
            RYq9niNwT = RYq9niNwT *(750 - 740) + towExI[AhZD1StvmpA0] - '0';
            AhZD1StvmpA0 = AhZD1StvmpA0 +(761 - 760);
        }
    }
    return RYq9niNwT;
}

int OmodtRUjr3 (int towExI [], int zy4YvJ) {
    if (towExI[(321 - 321)] <= zy4YvJ && zy4YvJ < towExI[(501 - 500)])
        return (706 - 705);
    return (325 - 325);
}

void  main () {
    int eW9tNwI6K8;
    int AhZD1StvmpA0;
    int oKRiYSML0y;
    char jZXx7AmOP;
    int hTlUwo0xCJ;
    char HHurMyJ6Eb [(149 - 144)] = {'\0'};
    int q40bM5Nj9PR;
    int nTf1izxH8O67 [(1522 - 522)] [(965 - 963)] = {(827 - 827)};
    int RPg8oOIK;
    RPg8oOIK = (511 - 511);
    towExI = nTf1izxH8O67;
    oKRiYSML0y = (738 - 738);
    hTlUwo0xCJ = (465 - 465);
    AhZD1StvmpA0 = (889 - 889);
    {
        q40bM5Nj9PR = (1358 - 461) - (1402 - 505);
        for (; (959 - 958) >= q40bM5Nj9PR;) {
            for (; (jZXx7AmOP = getchar ()) != '\n';) {
                if (jZXx7AmOP != ',')
                    HHurMyJ6Eb[AhZD1StvmpA0++] = jZXx7AmOP;
                else {
                    HHurMyJ6Eb[AhZD1StvmpA0] = '\0';
                    nTf1izxH8O67[RPg8oOIK++][q40bM5Nj9PR] = dIgup4d (HHurMyJ6Eb, AhZD1StvmpA0);
                    AhZD1StvmpA0 = (635 - 635);
                }
            }
            HHurMyJ6Eb[AhZD1StvmpA0] = '\0';
            nTf1izxH8O67[RPg8oOIK++][q40bM5Nj9PR] = dIgup4d (HHurMyJ6Eb, AhZD1StvmpA0);
            eW9tNwI6K8 = RPg8oOIK;
            q40bM5Nj9PR = q40bM5Nj9PR + (27 - 26);
            AhZD1StvmpA0 = (144 - 144);
            RPg8oOIK = (469 - 469);
        }
    }
    {
        AhZD1StvmpA0 = (1769 - 842) - (1860 - 933);
        for (; AhZD1StvmpA0 < (1413 - 413);) {
            {
                RPg8oOIK = (1184 - 272) - (1534 - 622);
                for (; eW9tNwI6K8 > RPg8oOIK;) {
                    if (OmodtRUjr3 (towExI[RPg8oOIK], AhZD1StvmpA0))
                        oKRiYSML0y = oKRiYSML0y + (309 - 308);
                    RPg8oOIK = RPg8oOIK +(759 - 758);
                }
            }
            AhZD1StvmpA0 = AhZD1StvmpA0 +(416 - 415);
            if (oKRiYSML0y > hTlUwo0xCJ)
                hTlUwo0xCJ = oKRiYSML0y;
            oKRiYSML0y = (133 - 133);
        }
    }
    printf ("%d %d", eW9tNwI6K8, hTlUwo0xCJ);
}

