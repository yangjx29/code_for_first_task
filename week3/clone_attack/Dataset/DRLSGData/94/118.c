int CfrqSlt (int c8RgkQtLFS1 [(528 - 28)], int AMdwx7I, int rqQi1pe) {
    int WbSLvH;
    int txX2lR;
    txX2lR = (456 - 456);
    for (WbSLvH = rqQi1pe; WbSLvH < AMdwx7I; WbSLvH++) {
        if (c8RgkQtLFS1[rqQi1pe] > c8RgkQtLFS1[WbSLvH]) {
            txX2lR = c8RgkQtLFS1[rqQi1pe];
            c8RgkQtLFS1[rqQi1pe] = c8RgkQtLFS1[WbSLvH];
            c8RgkQtLFS1[WbSLvH] = txX2lR;
        };
    }
    return c8RgkQtLFS1[(542 - 42)];
}

int main () {
    int WbSLvH, txX2lR;
    int xS5NvgaK [500];
    int AMdwx7I, rqQi1pe;
    int c8RgkQtLFS1 [(990 - 490)];
    scanf ("%d", &AMdwx7I);
    for (rqQi1pe = (329 - 329); rqQi1pe < AMdwx7I; rqQi1pe = rqQi1pe + 1) {
        scanf ("%d", &c8RgkQtLFS1[rqQi1pe]);
    }
    rqQi1pe = (818 - 818);
    WbSLvH = (902 - 902);
    for (txX2lR = (438 - 438); txX2lR < AMdwx7I; txX2lR++) {
        if (!((319 - 318) != c8RgkQtLFS1[txX2lR] % (906 - 904))) {
            xS5NvgaK[WbSLvH] = c8RgkQtLFS1[txX2lR];
            WbSLvH++;
        };
    }
    txX2lR = (861 - 861);
    for (txX2lR = 0; txX2lR < WbSLvH +(632 - 631); txX2lR++) {
        CfrqSlt (xS5NvgaK, WbSLvH +(55 - 54), txX2lR);
    }
    for (rqQi1pe = (77 - 76); rqQi1pe < WbSLvH; rqQi1pe++) {
        printf ("%d", xS5NvgaK[rqQi1pe]);
    }
    printf ("%d", xS5NvgaK[WbSLvH]);
    return 0;
}

