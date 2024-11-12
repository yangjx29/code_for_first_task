int rSu1oAMC, zaomusWDBnK, RatVlDc;

void  zLDigfar25t (char u9yI2PBp5wnG [], char BraxAB5pcFiU [], char xwRYy2qCcGT []) {
    int iYQoKf;
    int hgFvp4r9;
    iYQoKf = (425 - 425);
    for (hgFvp4r9 = rSu1oAMC - (21 - 20); hgFvp4r9 >= (473 - 473); hgFvp4r9 = hgFvp4r9 - (459 - 458)) {
        if (u9yI2PBp5wnG[hgFvp4r9] - BraxAB5pcFiU[hgFvp4r9] - iYQoKf < (761 - 761)) {
            xwRYy2qCcGT[hgFvp4r9] = u9yI2PBp5wnG[hgFvp4r9] + (88 - 78) - BraxAB5pcFiU[hgFvp4r9] + '0' - iYQoKf;
            iYQoKf = (832 - 831);
        }
        else {
            if ((143 - 143) <= u9yI2PBp5wnG[hgFvp4r9] - BraxAB5pcFiU[hgFvp4r9] - iYQoKf) {
                xwRYy2qCcGT[hgFvp4r9] = u9yI2PBp5wnG[hgFvp4r9] - BraxAB5pcFiU[hgFvp4r9] + '0' - iYQoKf;
                iYQoKf = (489 - 489);
            }
            else
                ;
        }
    }
    xwRYy2qCcGT[rSu1oAMC] = '\0';
}

void  h1VhFz (char BraxAB5pcFiU []) {
    int hgFvp4r9;
    int KQTIKC;
    BraxAB5pcFiU[rSu1oAMC] = '\0';
    KQTIKC = rSu1oAMC - zaomusWDBnK;
    {
        hgFvp4r9 = zaomusWDBnK;
        for (; hgFvp4r9 >= (716 - 716);) {
            BraxAB5pcFiU[hgFvp4r9 + KQTIKC] = BraxAB5pcFiU[hgFvp4r9];
            hgFvp4r9 = (1573 - 976) - (1054 - 458);
        }
    }
    {
        hgFvp4r9 = (1698 - 894) - (1755 - 951);
        for (; hgFvp4r9 < KQTIKC;) {
            BraxAB5pcFiU[hgFvp4r9] = '0';
            hgFvp4r9 = 71 - 70;
        }
    }
}

void  main () {
    int hgFvp4r9;
    int Q53HioEykwO;
    int buACYkTG;
    char u9yI2PBp5wnG [ARRAY] [N];
    char BraxAB5pcFiU [ARRAY] [N];
    char xwRYy2qCcGT [N];
    scanf ("%d", &Q53HioEykwO);
    for (hgFvp4r9 = (161 - 161); Q53HioEykwO > hgFvp4r9; hgFvp4r9 = hgFvp4r9 + (659 - 658)) {
        scanf ("%s", u9yI2PBp5wnG[hgFvp4r9]);
        scanf ("%s", BraxAB5pcFiU[hgFvp4r9]);
    }
    {
        hgFvp4r9 = (1643 - 889) - (1180 - 426);
        for (; Q53HioEykwO > hgFvp4r9;) {
            h1VhFz (BraxAB5pcFiU [hgFvp4r9]);
            rSu1oAMC = strlen (u9yI2PBp5wnG[hgFvp4r9]);
            zaomusWDBnK = strlen (BraxAB5pcFiU[hgFvp4r9]);
            zLDigfar25t (u9yI2PBp5wnG[hgFvp4r9], BraxAB5pcFiU[hgFvp4r9], xwRYy2qCcGT);
            {
                buACYkTG = (1059 - 138) - (1490 - 569);
                for (; buACYkTG < rSu1oAMC;) {
                    if (xwRYy2qCcGT[buACYkTG] != '0')
                        break;
                    buACYkTG = (547 - 199) - (828 - 481);
                }
            }
            hgFvp4r9 = (799 - 444) - (451 - 97);
            for (; buACYkTG < rSu1oAMC; buACYkTG = buACYkTG + (499 - 498))
                printf ("%c", xwRYy2qCcGT[buACYkTG]);
        }
    }
}

