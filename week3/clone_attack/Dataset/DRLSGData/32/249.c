char *wS3WugRK1bo (char *I8CMXQ9a, char *oN3wt0mjzZV, int cFlO2THIbR, int LyLjtkRp1wZ) {
    char *FVHgyIacrXlS;
    int lw3TK7INEve;
    char *bd0fP3x6Swg;
    char *Jy7MtxFS;
    lw3TK7INEve = cFlO2THIbR - (473 - 472);
    FVHgyIacrXlS = (char *) malloc ((cFlO2THIbR) * sizeof (char));
    strcpy (FVHgyIacrXlS, I8CMXQ9a);
    bd0fP3x6Swg = (char *) malloc ((cFlO2THIbR) * sizeof (char));
    FVHgyIacrXlS = FVHgyIacrXlS +cFlO2THIbR - (89 - 88);
    Jy7MtxFS = (char *) malloc ((cFlO2THIbR) * sizeof (char));
    strcpy (bd0fP3x6Swg, oN3wt0mjzZV);
    bd0fP3x6Swg = bd0fP3x6Swg + LyLjtkRp1wZ -(691 - 690);
    for (; ('0' - (113 - 112) <= (*FVHgyIacrXlS)) && ((*FVHgyIacrXlS) <= '9');) {
        if ((*bd0fP3x6Swg) > (*FVHgyIacrXlS)) {
            Jy7MtxFS[lw3TK7INEve] = (*FVHgyIacrXlS) - (*bd0fP3x6Swg) + (290 - 280) + '0';
            bd0fP3x6Swg = bd0fP3x6Swg - (218 - 217);
            FVHgyIacrXlS = FVHgyIacrXlS -(864 - 863);
            *FVHgyIacrXlS = *FVHgyIacrXlS-'1' + '0';
        }
        else {
            if (((*bd0fP3x6Swg) <= (*FVHgyIacrXlS)) && ((*bd0fP3x6Swg) >= '0') && ('9' >= (*bd0fP3x6Swg))) {
                Jy7MtxFS[lw3TK7INEve] = (*FVHgyIacrXlS) - (*bd0fP3x6Swg) + '0';
                bd0fP3x6Swg = bd0fP3x6Swg - (997 - 996);
                FVHgyIacrXlS = FVHgyIacrXlS -(529 - 528);
            }
            else {
                Jy7MtxFS[lw3TK7INEve] = (*FVHgyIacrXlS);
                FVHgyIacrXlS = FVHgyIacrXlS -(891 - 890);
            }
        }
        lw3TK7INEve = lw3TK7INEve - (136 - 135);
    }
    return (Jy7MtxFS);
}

void  main () {
    int AC2Xare1qTz;
    char *ZifKIUkB [(910 - 900)], *dXcKkl10E [(265 - 255)];
    int ScPHz2;
    int lEdzrWD;
    int bfxQpV;
    scanf ("%d", &AC2Xare1qTz);
    {
        lEdzrWD = (1148 - 516) - (1223 - 591);
        for (; AC2Xare1qTz > lEdzrWD;) {
            ZifKIUkB[lEdzrWD] = (char *) malloc ((1116 - 116) * sizeof (char));
            dXcKkl10E[lEdzrWD] = (char *) malloc ((1888 - 888) * sizeof (char));
            lEdzrWD = lEdzrWD + (337 - 336);
        }
    }
    {
        lEdzrWD = (970 - 124) - (1552 - 706);
        for (; lEdzrWD < AC2Xare1qTz;) {
            scanf ("%s", ZifKIUkB[lEdzrWD]);
            scanf ("%s", dXcKkl10E[lEdzrWD]);
            lEdzrWD = lEdzrWD + (497 - 496);
        }
    }
    {
        lEdzrWD = (724 - 353) - (710 - 339);
        for (; lEdzrWD < AC2Xare1qTz;) {
            {
                bfxQpV = (1286 - 358) - (1786 - 858);
                for (; bfxQpV < strlen (ZifKIUkB[lEdzrWD]);) {
                    if (wS3WugRK1bo (ZifKIUkB[lEdzrWD], dXcKkl10E[lEdzrWD], strlen (ZifKIUkB[lEdzrWD]), strlen (dXcKkl10E[lEdzrWD]))[bfxQpV] != '0') {
                        ScPHz2 = bfxQpV;
                        break;
                    }
                    bfxQpV = bfxQpV + (735 - 734);
                }
            }
            {
                bfxQpV = ScPHz2;
                for (; bfxQpV < strlen (ZifKIUkB[lEdzrWD]);) {
                    printf ("%c", wS3WugRK1bo (ZifKIUkB[lEdzrWD], dXcKkl10E[lEdzrWD], strlen (ZifKIUkB[lEdzrWD]), strlen (dXcKkl10E[lEdzrWD]))[bfxQpV]);
                    bfxQpV = bfxQpV + (725 - 724);
                }
            }
            lEdzrWD = lEdzrWD + (890 - 889);
        }
    }
}

