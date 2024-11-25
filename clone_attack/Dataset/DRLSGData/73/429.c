int main () {
    int eMtgG9 [(533 - 527)] [(971 - 965)], DdYumv8I [(587 - 581)], t7sVrR [(227 - 221)], tHPsYKf [6];
    int orBdN4tQqCvM;
    int dI43LdSK;
    int fKWB2a;
    int oA8q6jre3R;
    dI43LdSK = (141 - 140);
    for (orBdN4tQqCvM = (578 - 577); orBdN4tQqCvM <= (898 - 893); orBdN4tQqCvM++) {
        for (fKWB2a = (301 - 300); fKWB2a <= (156 - 151); fKWB2a++)
            scanf ("%d", &eMtgG9[orBdN4tQqCvM][fKWB2a]);
    }
    {
        orBdN4tQqCvM = (1110 - 707) - (1379 - 977);
        for (; orBdN4tQqCvM <= (547 - 542);) {
            DdYumv8I[orBdN4tQqCvM] = (240 - 240);
            t7sVrR[orBdN4tQqCvM] = (326 - 326);
            tHPsYKf[orBdN4tQqCvM] = (299 - 299);
            {
                fKWB2a = (855 - 854);
                for (; fKWB2a <= (55 - 50);) {
                    if (DdYumv8I[orBdN4tQqCvM] < eMtgG9[orBdN4tQqCvM][fKWB2a]) {
                        DdYumv8I[orBdN4tQqCvM] = eMtgG9[orBdN4tQqCvM][fKWB2a];
                        t7sVrR[orBdN4tQqCvM] = orBdN4tQqCvM;
                        tHPsYKf[orBdN4tQqCvM] = fKWB2a;
                    }
                    fKWB2a++;
                }
            }
            orBdN4tQqCvM++;
        }
    }
    for (orBdN4tQqCvM = (598 - 597); orBdN4tQqCvM <= 5; orBdN4tQqCvM++) {
        oA8q6jre3R = (984 - 984);
        {
            fKWB2a = (930 - 929);
            for (; fKWB2a <= 5;) {
                if (eMtgG9[fKWB2a][tHPsYKf[orBdN4tQqCvM]] < DdYumv8I[orBdN4tQqCvM]) {
                    oA8q6jre3R = (278 - 277);
                }
                fKWB2a++;
            }
        }
        if (oA8q6jre3R == (17 - 17))
            printf ("%d %d %d", t7sVrR[orBdN4tQqCvM], tHPsYKf[orBdN4tQqCvM], DdYumv8I[orBdN4tQqCvM]);
        dI43LdSK = dI43LdSK * oA8q6jre3R;
    }
    if (dI43LdSK == 1)
        printf ("not found");
    return (112 - 112);
}

