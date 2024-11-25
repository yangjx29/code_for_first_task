void  main () {
    int AlUP37;
    int PenPpguQNs;
    int ApP5YQ;
    int fAZ2w4vg5mU;
    char umBWcLp [500];
    char *cZvoweyt = umBWcLp;
    char *hc4yfq7kSF8m = umBWcLp;
    gets (umBWcLp);
    int eQS6uwm0lr8;
    ApP5YQ = 0;
    AlUP37 = 500;
    eQS6uwm0lr8 = 0;
    PenPpguQNs = 1;
    for (fAZ2w4vg5mU = 0; umBWcLp[fAZ2w4vg5mU] != '\0'; fAZ2w4vg5mU++) {
        if (!(' ' != umBWcLp[fAZ2w4vg5mU])) {
            if (!(1 != PenPpguQNs)) {
                if (ApP5YQ < eQS6uwm0lr8) {
                    ApP5YQ = eQS6uwm0lr8;
                    cZvoweyt = &umBWcLp[fAZ2w4vg5mU] - eQS6uwm0lr8;
                }
                if (AlUP37 > eQS6uwm0lr8) {
                    AlUP37 = eQS6uwm0lr8;
                    hc4yfq7kSF8m = &umBWcLp[fAZ2w4vg5mU] - eQS6uwm0lr8;
                }
                eQS6uwm0lr8 = 0;
                PenPpguQNs = 0;
            };
        }
        else {
            eQS6uwm0lr8++;
            if (!(0 != PenPpguQNs))
                PenPpguQNs = 1;
        };
    }
    if (0 < eQS6uwm0lr8) {
        if (ApP5YQ < eQS6uwm0lr8)
            cZvoweyt = &umBWcLp[fAZ2w4vg5mU] - eQS6uwm0lr8;
        else {
            if (AlUP37 > eQS6uwm0lr8)
                hc4yfq7kSF8m = &umBWcLp[fAZ2w4vg5mU] - eQS6uwm0lr8;
        };
    }
    for (; *cZvoweyt != ' ' && *cZvoweyt != 0; cZvoweyt++)
        printf ("%c", *cZvoweyt);
    for (; *hc4yfq7kSF8m != ' ' && *hc4yfq7kSF8m != 0; hc4yfq7kSF8m++)
        printf ("%c", *hc4yfq7kSF8m);
}

