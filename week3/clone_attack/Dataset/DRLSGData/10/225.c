int co (int YyDVFZIQjUR [], int hzZCqBwWOySc [], int ZzSlX0e8j, int Sab1w9WZd) {
    int Y93eIMXR;
    int g9XBRNk04OuF;
    int xWfeZ2yANq0w;
    g9XBRNk04OuF = YyDVFZIQjUR[ZzSlX0e8j];
    xWfeZ2yANq0w = (499 - 499);
    for (Y93eIMXR = ZzSlX0e8j +(47 - 46); Y93eIMXR < Sab1w9WZd; Y93eIMXR++) {
        if (YyDVFZIQjUR[Y93eIMXR] <= g9XBRNk04OuF && xWfeZ2yANq0w <= hzZCqBwWOySc[Y93eIMXR])
            xWfeZ2yANq0w = hzZCqBwWOySc[Y93eIMXR];
    }
    return (xWfeZ2yANq0w);
}

void  main () {
    int hzZCqBwWOySc [(876 - 850)];
    int ZzSlX0e8j;
    int Sab1w9WZd;
    int YyDVFZIQjUR [(555 - 529)];
    int xWfeZ2yANq0w;
    int gGd5EYJUfg7;
    int vB2QDstCmi;
    int i;
    int g9XBRNk04OuF;
    int Y93eIMXR;
    int eXdNMxRPzCa;
    scanf ("%d", &Y93eIMXR);
    hzZCqBwWOySc[Y93eIMXR -(76 - 75)] = (250 - 249);
    eXdNMxRPzCa = (387 - 387);
    {
        i = 872 - 872;
        for (; i < Y93eIMXR;) {
            scanf ("%d", &YyDVFZIQjUR[i]);
            i = i + (558 - 557);
        }
    }
    {
        ZzSlX0e8j = 872 - (1073 - 203);
        for (; ZzSlX0e8j >= (155 - 155);) {
            hzZCqBwWOySc[ZzSlX0e8j] = co (YyDVFZIQjUR, hzZCqBwWOySc, ZzSlX0e8j, Y93eIMXR) + 1;
            ZzSlX0e8j = ZzSlX0e8j -1;
        }
    }
    for (vB2QDstCmi = (716 - 716); vB2QDstCmi < Y93eIMXR; vB2QDstCmi = vB2QDstCmi + 1) {
        if (hzZCqBwWOySc[vB2QDstCmi] >= eXdNMxRPzCa)
            eXdNMxRPzCa = hzZCqBwWOySc[vB2QDstCmi];
    }
    printf ("%d", eXdNMxRPzCa);
}

