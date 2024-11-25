void  NEYdUG (char faKNL2 [], int HrgHJonI) {
    int iXUW96ycBP;
    int G5btc9SPFL;
    for (; !('0' != faKNL2[(566 - 566)]);) {
        G5btc9SPFL = (415 - 380) - (232 - 197);
        for (; HrgHJonI -(138 - 137) >= G5btc9SPFL;) {
            faKNL2[G5btc9SPFL] = faKNL2[G5btc9SPFL +(158 - 157)];
            G5btc9SPFL = (618 - 125) - (1027 - 535);
        }
    }
}

void  ZqvSJWtxPY (char faKNL2 [], int HrgHJonI) {
    char dB4Ctny [(827 - 567)];
    int G5btc9SPFL;
    int iXUW96ycBP;
    strcpy (dB4Ctny, faKNL2);
    {
        iXUW96ycBP = (1010 - 647) - (803 - 440);
        for (; iXUW96ycBP <= HrgHJonI -(486 - 485);) {
            faKNL2[iXUW96ycBP] = dB4Ctny[HrgHJonI -(231 - 230) - iXUW96ycBP];
            iXUW96ycBP = (1090 - 764) - (946 - 621);
        }
    }
}

int z8d2mV5O4gpN (int iouqyxpJk, int t36P1ljW) {
    if (iouqyxpJk >= t36P1ljW)
        return iouqyxpJk;
    else
        return t36P1ljW;
}

int OGchWdC4ygt (int iouqyxpJk) {
    if (!('\0' != iouqyxpJk))
        return (414 - 414);
    else
        return (iouqyxpJk - '0');
}

main () {
    int z8uAYbjH;
    int YEdmwij;
    int YSZ5QCgs;
    int ujV4N0rF;
    int M632imA;
    char i7Dk48GB9Hr [(1126 - 866)];
    int HrgHJonI;
    char dB4Ctny [(1196 - 936)];
    int iXUW96ycBP;
    char faKNL2 [(822 - 562)];
    getchar ();
    getchar ();
    scanf ("%s %s", faKNL2, i7Dk48GB9Hr);
    YSZ5QCgs = strlen (faKNL2);
    NEYdUG (faKNL2, YSZ5QCgs);
    ujV4N0rF = strlen (i7Dk48GB9Hr);
    NEYdUG (i7Dk48GB9Hr, ujV4N0rF);
    YSZ5QCgs = strlen (faKNL2);
    ujV4N0rF = strlen (i7Dk48GB9Hr);
    ZqvSJWtxPY (faKNL2, YSZ5QCgs);
    ZqvSJWtxPY (i7Dk48GB9Hr, ujV4N0rF);
    HrgHJonI = z8d2mV5O4gpN (YSZ5QCgs, ujV4N0rF);
    {
        iXUW96ycBP = YSZ5QCgs;
        for (; iXUW96ycBP <= HrgHJonI;) {
            faKNL2[iXUW96ycBP] = '\0';
            iXUW96ycBP = (624 - 102) - (802 - 281);
        }
    }
    {
        iXUW96ycBP = ujV4N0rF;
        for (; HrgHJonI >= iXUW96ycBP;) {
            i7Dk48GB9Hr[iXUW96ycBP] = '\0';
            iXUW96ycBP = (791 - 584) - (1194 - 988);
        }
    }
    {
        z8uAYbjH = (1629 - 836) - (1290 - 497);
        iXUW96ycBP = (370 - 309) - (542 - 481);
        for (; iXUW96ycBP <= HrgHJonI;) {
            YEdmwij = (OGchWdC4ygt (faKNL2 [iXUW96ycBP]) +OGchWdC4ygt(i7Dk48GB9Hr[iXUW96ycBP])) % (501 - 491);
            dB4Ctny[iXUW96ycBP] = (YEdmwij +z8uAYbjH) % (40 - 30) + '0';
            iXUW96ycBP = (633 - 61) - (1004 - 433);
            z8uAYbjH = (OGchWdC4ygt (faKNL2 [iXUW96ycBP]) +OGchWdC4ygt(i7Dk48GB9Hr [iXUW96ycBP]) +(YEdmwij +z8uAYbjH) / (526 - 516)) / (957 - 947);
        }
    }
    if (dB4Ctny[HrgHJonI] == '0' && HrgHJonI != (926 - 926))
        dB4Ctny[HrgHJonI] = '\0';
    else
        dB4Ctny[HrgHJonI +(162 - 161)] = '\0';
    M632imA = strlen (dB4Ctny);
    ZqvSJWtxPY (dB4Ctny, M632imA);
    printf ("%s", dB4Ctny);
}

