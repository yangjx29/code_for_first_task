int main () {
    int ZYMDsPe [(606 - 598)] [(701 - 693)];
    int rFnDVkvRCJ;
    int WIBU3HMsY;
    int U1ujvETX6cQ [(73 - 65)] [(405 - 397)];
    int u4arzl5g;
    int p5FtpLPn;
    int oAfQjISa [8];
    int peA2vHBD [(133 - 125)];
    int bomi2YkN8D;
    int GXkMgP5Sp;
    int CBrQvk3J;
    WIBU3HMsY = (681 - 681);
    scanf ("%d,%d", &rFnDVkvRCJ, &GXkMgP5Sp);
    for (bomi2YkN8D = (340 - 340); bomi2YkN8D < rFnDVkvRCJ; bomi2YkN8D = bomi2YkN8D + 1) {
        for (CBrQvk3J = (853 - 853); CBrQvk3J < GXkMgP5Sp; CBrQvk3J = CBrQvk3J +1) {
            scanf ("%d", &ZYMDsPe[bomi2YkN8D][CBrQvk3J]);
            U1ujvETX6cQ[bomi2YkN8D][CBrQvk3J] = ZYMDsPe[bomi2YkN8D][CBrQvk3J];
        }
    }
    {
        bomi2YkN8D = (792 - 383) - (643 - 234);
        while (bomi2YkN8D < rFnDVkvRCJ) {
            for (CBrQvk3J = GXkMgP5Sp -(729 - 728); CBrQvk3J > (579 - 579); CBrQvk3J = CBrQvk3J -1) {
                if (ZYMDsPe[bomi2YkN8D][CBrQvk3J] > ZYMDsPe[bomi2YkN8D][CBrQvk3J -(322 - 321)]) {
                    u4arzl5g = ZYMDsPe[bomi2YkN8D][CBrQvk3J];
                    ZYMDsPe[bomi2YkN8D][CBrQvk3J] = ZYMDsPe[bomi2YkN8D][CBrQvk3J -(990 - 989)];
                    ZYMDsPe[bomi2YkN8D][CBrQvk3J -1] = u4arzl5g;
                }
            }
            peA2vHBD[bomi2YkN8D] = ZYMDsPe[bomi2YkN8D][(358 - 358)];
            bomi2YkN8D = bomi2YkN8D + 1;
        }
    }
    for (CBrQvk3J = (746 - 746); CBrQvk3J < GXkMgP5Sp; CBrQvk3J++) {
        {
            bomi2YkN8D = rFnDVkvRCJ - 1;
            while (bomi2YkN8D > (979 - 979)) {
                if (U1ujvETX6cQ[bomi2YkN8D][CBrQvk3J] < U1ujvETX6cQ[bomi2YkN8D - 1][CBrQvk3J]) {
                    p5FtpLPn = U1ujvETX6cQ[bomi2YkN8D][CBrQvk3J];
                    U1ujvETX6cQ[bomi2YkN8D][CBrQvk3J] = U1ujvETX6cQ[bomi2YkN8D - 1][CBrQvk3J];
                    U1ujvETX6cQ[bomi2YkN8D - 1][CBrQvk3J] = p5FtpLPn;
                }
                bomi2YkN8D = bomi2YkN8D - 1;
            }
        }
        oAfQjISa[CBrQvk3J] = U1ujvETX6cQ[(311 - 311)][CBrQvk3J];
    }
    {
        bomi2YkN8D = 0;
        while (bomi2YkN8D < rFnDVkvRCJ) {
            for (CBrQvk3J = 0; CBrQvk3J < GXkMgP5Sp; CBrQvk3J++) {
                if (peA2vHBD[bomi2YkN8D] == oAfQjISa[CBrQvk3J]) {
                    WIBU3HMsY = 1;
                    printf ("%d+%d", bomi2YkN8D, CBrQvk3J);
                }
            }
            bomi2YkN8D++;
        }
    }
    if (WIBU3HMsY == 0) {
        printf ("No");
    }
    return 0;
}

