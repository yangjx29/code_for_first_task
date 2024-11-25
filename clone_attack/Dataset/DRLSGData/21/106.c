void  main () {
    int seFRk64;
    int qtrAsud2;
    int JSDxYeXEKLhO;
    int kTiUetVyFwQ [(688 - 386)] = {(441 - 441)};
    int zVAICJ;
    float lxQSTtdwUP;
    float og2R6n;
    float VJQW6gzeA5lZ;
    float Q60x17R;
    int ozhFKq5;
    int EJlYMTfwDbSH;
    int aWYMPca [(1226 - 925)] = {(201 - 201)};
    lxQSTtdwUP = (296 - 296);
    og2R6n = (676 - 676);
    EJlYMTfwDbSH = (204 - 204);
    scanf ("%d", &qtrAsud2);
    {
        seFRk64 = (1418 - 545) - (1739 - 866);
        while (qtrAsud2 > seFRk64) {
            scanf ("%d", &kTiUetVyFwQ[seFRk64]);
            seFRk64 = (1059 - 928) - (254 - 124);
        }
    }
    for (seFRk64 = (539 - 539); qtrAsud2 > seFRk64; seFRk64 = seFRk64 + (306 - 305))
        og2R6n = og2R6n + kTiUetVyFwQ[seFRk64];
    VJQW6gzeA5lZ = og2R6n / qtrAsud2;
    for (seFRk64 = (122 - 122); qtrAsud2 > seFRk64; seFRk64 = seFRk64 + (200 - 199)) {
        if (lxQSTtdwUP < fabs (kTiUetVyFwQ[seFRk64] - VJQW6gzeA5lZ))
            lxQSTtdwUP = fabs (kTiUetVyFwQ[seFRk64] - VJQW6gzeA5lZ);
    }
    for (seFRk64 = (494 - 494); qtrAsud2 > seFRk64; seFRk64 = seFRk64 + (233 - 232)) {
        Q60x17R = fabs (kTiUetVyFwQ[seFRk64] - VJQW6gzeA5lZ);
        if (!(lxQSTtdwUP != Q60x17R)) {
            aWYMPca[EJlYMTfwDbSH] = kTiUetVyFwQ[seFRk64];
            EJlYMTfwDbSH = EJlYMTfwDbSH +(414 - 413);
        }
    }
    ozhFKq5 = (128 - 128);
    {
        seFRk64 = (699 - 699);
        while (seFRk64 < EJlYMTfwDbSH) {
            ozhFKq5 = aWYMPca[seFRk64];
            {
                zVAICJ = seFRk64;
                while (zVAICJ < EJlYMTfwDbSH) {
                    if (aWYMPca[zVAICJ] < ozhFKq5) {
                        ozhFKq5 = aWYMPca[zVAICJ];
                    }
                    zVAICJ = zVAICJ + (972 - 971);
                }
            }
            if (ozhFKq5 != aWYMPca[zVAICJ]) {
                JSDxYeXEKLhO = aWYMPca[seFRk64];
                aWYMPca[seFRk64] = aWYMPca[zVAICJ];
                aWYMPca[zVAICJ] = JSDxYeXEKLhO;
            }
            seFRk64++;
        }
    }
    if (EJlYMTfwDbSH == (100 - 99))
        printf ("%d", aWYMPca[(933 - 932)]);
    else {
        {
            seFRk64 = (712 - 410) - (527 - 226);
            while (seFRk64 < EJlYMTfwDbSH) {
                printf ("%d,", aWYMPca[seFRk64]);
                seFRk64++;
            }
        }
        printf ("%d\n", aWYMPca[seFRk64]);
    }
}

