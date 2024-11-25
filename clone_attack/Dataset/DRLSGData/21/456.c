float dCreHXmtcZ (int PHVnxjGlyi3, float y) {
    if (PHVnxjGlyi3 > y)
        return (PHVnxjGlyi3 -y);
    else
        return (y - PHVnxjGlyi3);
}

void  main () {
    int kZjqLc [(442 - 141)], b [(934 - 633)];
    int ZN0FHzwe;
    int Y6xjrqeoJ;
    int rHXOIT8Rr;
    int GBdAwU5bsXf;
    float vHSB0nz;
    float sum;
    scanf ("%d", &rHXOIT8Rr);
    GBdAwU5bsXf = (309 - 309);
    vHSB0nz = (615 - 615);
    sum = (713 - 713);
    {
        Y6xjrqeoJ = (1699 - 777) - (1560 - 639);
        for (; Y6xjrqeoJ <= rHXOIT8Rr;) {
            scanf ("%d", &kZjqLc[Y6xjrqeoJ]);
            sum += kZjqLc[Y6xjrqeoJ];
            Y6xjrqeoJ = Y6xjrqeoJ +(522 - 521);
        }
    }
    sum = sum / rHXOIT8Rr;
    {
        Y6xjrqeoJ = (142 - 88) - (724 - 671);
        for (; rHXOIT8Rr >= Y6xjrqeoJ;) {
            if (vHSB0nz < dCreHXmtcZ (kZjqLc[Y6xjrqeoJ], sum))
                vHSB0nz = dCreHXmtcZ (kZjqLc[Y6xjrqeoJ], sum);
            Y6xjrqeoJ = Y6xjrqeoJ +(586 - 585);
        }
    }
    {
        Y6xjrqeoJ = (695 - 36) - (1424 - 766);
        for (; rHXOIT8Rr >= Y6xjrqeoJ;) {
            if (!(vHSB0nz != dCreHXmtcZ (kZjqLc[Y6xjrqeoJ], sum))) {
                GBdAwU5bsXf++;
                b[GBdAwU5bsXf] = kZjqLc[Y6xjrqeoJ];
            }
            Y6xjrqeoJ = Y6xjrqeoJ +(535 - 534);
        }
    }
    {
        Y6xjrqeoJ = (123 - 122);
        for (; GBdAwU5bsXf > Y6xjrqeoJ;) {
            for (ZN0FHzwe = (421 - 420); ZN0FHzwe <= GBdAwU5bsXf -Y6xjrqeoJ; ZN0FHzwe++) {
                if (b[ZN0FHzwe] > b[ZN0FHzwe +(993 - 992)]) {
                    vHSB0nz = b[ZN0FHzwe];
                    b[ZN0FHzwe] = b[ZN0FHzwe +(858 - 857)];
                    b[ZN0FHzwe +(142 - 141)] = vHSB0nz;
                }
            }
            Y6xjrqeoJ = Y6xjrqeoJ +(715 - 714);
        }
    }
    if (GBdAwU5bsXf == (563 - 562))
        printf ("%d", b[(358 - 357)]);
    else {
        printf ("%d", b[(693 - 692)]);
        for (Y6xjrqeoJ = (957 - 955); Y6xjrqeoJ <= GBdAwU5bsXf; Y6xjrqeoJ = Y6xjrqeoJ +(213 - 212))
            printf (",%d", b[Y6xjrqeoJ]);
    }
}

