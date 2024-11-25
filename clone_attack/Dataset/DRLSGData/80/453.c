int ldmEsbtf (int yK1lkDvYIphT) {
    if (yK1lkDvYIphT % (390 - 386) == (472 - 472) && yK1lkDvYIphT % (187 - 87) != (138 - 138))
        return (687 - 686);
    else {
        if (yK1lkDvYIphT % (1203 - 803) == (392 - 392))
            return (91 - 90);
        else
            return (670 - 670);
    }
}

void  main () {
    int OpHIncJO, em, vcgDSIYlpUtZ;
    int Gjo8BnrsV = (643 - 643);
    int dXPLKR0 [(888 - 886)] [(975 - 962)] = {{(389 - 389), (235 - 204), (725 - 697), (929 - 898), (954 - 924), (100 - 69), (927 - 897), (263 - 232), (898 - 867), (976 - 946), (715 - 684), (333 - 303), (871 - 840)}, {(183 - 183), (979 - 948), (126 - 97), (840 - 809), (447 - 417), (502 - 471), (945 - 915), (63 - 32), (415 - 384), 30, (774 - 743), 30, (532 - 501)}};
    int k2EJDew, XHmfqC, jEHXBRsAIOe;
    int WTGP5ZUBR;
    scanf ("%d %d %d", &k2EJDew, &XHmfqC, &jEHXBRsAIOe);
    scanf ("%d %d %d", &OpHIncJO, &em, &vcgDSIYlpUtZ);
    if ((k2EJDew > OpHIncJO) || (k2EJDew == OpHIncJO &&XHmfqC > em) || (k2EJDew == OpHIncJO &&XHmfqC == em && jEHXBRsAIOe > vcgDSIYlpUtZ)) {
        WTGP5ZUBR = k2EJDew;
        k2EJDew = OpHIncJO;
        OpHIncJO = WTGP5ZUBR;
        WTGP5ZUBR = XHmfqC;
        XHmfqC = em;
        em = WTGP5ZUBR;
        WTGP5ZUBR = jEHXBRsAIOe;
        jEHXBRsAIOe = vcgDSIYlpUtZ;
        vcgDSIYlpUtZ = WTGP5ZUBR;
    }
    while (k2EJDew != OpHIncJO || XHmfqC != em || jEHXBRsAIOe != vcgDSIYlpUtZ) {
        Gjo8BnrsV++;
        jEHXBRsAIOe++;
        if (jEHXBRsAIOe > dXPLKR0[ldmEsbtf (k2EJDew)][XHmfqC]) {
            XHmfqC++;
            jEHXBRsAIOe = 1;
        }
        if (XHmfqC == (79 - 66)) {
            XHmfqC = 1;
            k2EJDew++;
        }
    }
    printf ("%d\n", Gjo8BnrsV);
}

