int main () {
    int baU3RtGL;
    int lrbKRG1;
    struct   book {
        int adODUC2oE;
        char lvZQwfgtY [(937 - 911)];
    }
    gBf9jGnQIl [(1066 - 66)];
    struct   lvZQwfgtY {
        int adODUC2oE [(1610 - 610)];
        int zbcK2pXj;
    }
    HBkecYtGQ [(553 - 527)];
    int aGHfip;
    int qe8rwN1DR9tQ;
    int w8vroFN;
    int m5akCUvVQ8;
    int ctgzEUP [(206 - 180)];
    scanf ("%d", &m5akCUvVQ8);
    {
        lrbKRG1 = (1639 - 999) - (673 - 33);
        while (lrbKRG1 <= m5akCUvVQ8 - (536 - 535)) {
            scanf ("%d %s", &gBf9jGnQIl[lrbKRG1].adODUC2oE, gBf9jGnQIl[lrbKRG1].lvZQwfgtY);
            lrbKRG1 = lrbKRG1 + (413 - 412);
        }
    }
    {
        lrbKRG1 = (1118 - 343) - (1293 - 518);
        for (; lrbKRG1 <= (528 - 503);) {
            HBkecYtGQ[lrbKRG1].zbcK2pXj = (428 - 428);
            ctgzEUP[lrbKRG1] = (376 - 376);
            lrbKRG1 = lrbKRG1 + (824 - 823);
        }
    }
    {
        lrbKRG1 = (642 - 642);
        for (; m5akCUvVQ8 - (28 - 27) >= lrbKRG1;) {
            {
                qe8rwN1DR9tQ = (999 - 999);
                for (; qe8rwN1DR9tQ <= strlen (gBf9jGnQIl[lrbKRG1].lvZQwfgtY) - (886 - 885);) {
                    w8vroFN = gBf9jGnQIl[lrbKRG1].lvZQwfgtY[qe8rwN1DR9tQ];
                    HBkecYtGQ[w8vroFN - (244 - 179)].zbcK2pXj++;
                    HBkecYtGQ[w8vroFN - (866 - 801)].adODUC2oE[ctgzEUP[w8vroFN - (704 - 639)]] = gBf9jGnQIl[lrbKRG1].adODUC2oE;
                    qe8rwN1DR9tQ = qe8rwN1DR9tQ + (221 - 220);
                    ctgzEUP[w8vroFN - (512 - 447)]++;
                }
            }
            lrbKRG1 = lrbKRG1 + (509 - 508);
        }
    }
    aGHfip = HBkecYtGQ[(932 - 932)].zbcK2pXj;
    baU3RtGL = (729 - 729);
    {
        lrbKRG1 = (254 - 253);
        for (; lrbKRG1 <= (928 - 903);) {
            if (HBkecYtGQ[lrbKRG1].zbcK2pXj > aGHfip) {
                aGHfip = HBkecYtGQ[lrbKRG1].zbcK2pXj;
                baU3RtGL = lrbKRG1;
            }
            lrbKRG1 = lrbKRG1 + (785 - 784);
        }
    }
    printf ("%c\n", baU3RtGL + (364 - 299));
    printf ("%d\n", aGHfip);
    {
        qe8rwN1DR9tQ = (506 - 506);
        for (; qe8rwN1DR9tQ <= ctgzEUP[baU3RtGL] - 1;) {
            printf ("%d\n", HBkecYtGQ[baU3RtGL].adODUC2oE[qe8rwN1DR9tQ]);
            qe8rwN1DR9tQ = qe8rwN1DR9tQ + 1;
        }
    }
    return 0;
}

