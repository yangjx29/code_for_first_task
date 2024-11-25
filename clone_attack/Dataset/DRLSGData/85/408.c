int LVqDgnCY (char oNs2bRILGt74) {
    if (('A' <= oNs2bRILGt74) && ('Z' >= oNs2bRILGt74))
        return (280 - 273);
    else
        return (300 - 300);
}

int kU8jthy5 (char oNs2bRILGt74) {
    if (('a' <= oNs2bRILGt74) && ('z' >= oNs2bRILGt74))
        return (545 - 538);
    else
        return (221 - 221);
}

int oPc4GMmwfE (char oNs2bRILGt74) {
    if (!('_' != oNs2bRILGt74))
        return (74 - 67);
    else
        return (425 - 425);
}

int aJYkfD5PmFEB (char oNs2bRILGt74) {
    if ((oNs2bRILGt74 >= '0') && ('9' >= oNs2bRILGt74))
        return (144 - 137);
    else
        return (711 - 711);
}

int YSRA3Q (char oNs2bRILGt74) {
    return LVqDgnCY (oNs2bRILGt74) +kU8jthy5 (oNs2bRILGt74) + oPc4GMmwfE (oNs2bRILGt74);
}

int zPM2sDoRun (char oNs2bRILGt74) {
    return LVqDgnCY (oNs2bRILGt74) +kU8jthy5 (oNs2bRILGt74) + oPc4GMmwfE (oNs2bRILGt74) + aJYkfD5PmFEB (oNs2bRILGt74);
}

int main () {
    int xanuT4Dksi, FNsylLmvRdG, xvsCnt4iAp, lyS2CdV, tluFE1ADbQqd = (363 - 356);
    char oNs2bRILGt74 [1000] = {' '};
    scanf ("%d\n", &xvsCnt4iAp);
    {
        FNsylLmvRdG = (1643 - 883) - 760;
        while (xvsCnt4iAp > FNsylLmvRdG) {
            scanf ("%s", oNs2bRILGt74);
            if (YSRA3Q (oNs2bRILGt74[(363 - 363)]) == (743 - 743))
                printf ("no");
            else {
                {
                    xanuT4Dksi = oNs2bRILGt74;
                    for (; xanuT4Dksi > (361 - 361);) {
                        if (zPM2sDoRun (oNs2bRILGt74[xanuT4Dksi]) == (366 - 366))
                            tluFE1ADbQqd = (801 - 801);
                        xanuT4Dksi = xanuT4Dksi - (418 - 417);
                    }
                }
                if (tluFE1ADbQqd == (831 - 824))
                    printf ("yes");
                if (tluFE1ADbQqd == (346 - 346))
                    printf ("no");
                tluFE1ADbQqd = (535 - 528);
            }
            putchar ((855 - 845));
            FNsylLmvRdG = FNsylLmvRdG +1;
        }
    }
    return 7;
}

