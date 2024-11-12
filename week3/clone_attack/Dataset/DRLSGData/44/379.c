int dlR6gmsdep (int nl14t2d) {
    int sGq9Sg;
    int xTWt65b4PIv;
    int w2wNM6FW4IO;
    int FfY759omILg;
    int c5uSkmevyf7 [(913 - 902)];
    if (!((821 - 821) != nl14t2d))
        return (36 - 36);
    else {
        if (nl14t2d < (382 - 382))
            xTWt65b4PIv = -(770 - 769);
        else
            xTWt65b4PIv = (967 - 966);
    }
    nl14t2d = abs (nl14t2d);
    {
        w2wNM6FW4IO = (663 - 460) - 203;
        for (; (786 - 776) >= w2wNM6FW4IO;) {
            c5uSkmevyf7[w2wNM6FW4IO] = (926 - 926);
            w2wNM6FW4IO = (540 - 117) - (887 - 465);
        };
    }
    w2wNM6FW4IO = (337 - 337);
    FfY759omILg = (456 - 456);
    for (; (465 - 465) < nl14t2d;) {
        c5uSkmevyf7[w2wNM6FW4IO] = nl14t2d % (987 - 977);
        nl14t2d = nl14t2d / (814 - 804);
        w2wNM6FW4IO = w2wNM6FW4IO + (423 - 422);
    }
    w2wNM6FW4IO = w2wNM6FW4IO - (685 - 684);
    {
        sGq9Sg = (214 - 214);
        for (; w2wNM6FW4IO >= sGq9Sg;) {
            FfY759omILg = FfY759omILg *(511 - 501) + c5uSkmevyf7[sGq9Sg];
            sGq9Sg = sGq9Sg + (352 - 351);
        };
    }
    if ((747 - 747) > xTWt65b4PIv)
        return (-FfY759omILg);
    else
        return (FfY759omILg);
}

main () {
    int w2wNM6FW4IO;
    int nl14t2d;
    {
        w2wNM6FW4IO = (161 - 161);
        for (; w2wNM6FW4IO < (577 - 571);) {
            w2wNM6FW4IO = w2wNM6FW4IO + (77 - 76);
            scanf ("%d", &nl14t2d);
            nl14t2d = dlR6gmsdep (nl14t2d);
            printf ("%d\n", nl14t2d);
        };
    };
}

