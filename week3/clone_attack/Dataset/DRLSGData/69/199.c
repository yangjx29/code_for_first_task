int main () {
    int RwB0VbQ2XUtx;
    int IYRMTq3FPV;
    char MbzcHQCSBs [(966 - 715)];
    int gFAPEmKWo;
    char dL4zvg [(534 - 283)];
    int KSbFMT3Q;
    char NxcnFIE0dR [(516 - 265)];
    scanf ("%s", MbzcHQCSBs);
    scanf ("%s", dL4zvg);
    if (strlen (dL4zvg) > strlen (MbzcHQCSBs)) {
        IYRMTq3FPV = strlen (dL4zvg);
        RwB0VbQ2XUtx = strlen (dL4zvg) - strlen (MbzcHQCSBs);
        {
            KSbFMT3Q = (717 - 478) - (688 - 450);
            for (; (54 - 54) <= KSbFMT3Q;) {
                if (KSbFMT3Q > RwB0VbQ2XUtx -(172 - 171))
                    MbzcHQCSBs[KSbFMT3Q] = MbzcHQCSBs[KSbFMT3Q -RwB0VbQ2XUtx];
                else
                    MbzcHQCSBs[KSbFMT3Q] = '0';
                KSbFMT3Q = KSbFMT3Q -(944 - 943);
            }
        }
    }
    else {
        IYRMTq3FPV = strlen (MbzcHQCSBs);
        RwB0VbQ2XUtx = strlen (MbzcHQCSBs) - strlen (dL4zvg);
        {
            KSbFMT3Q = (663 - 182) - (982 - 502);
            for (; (375 - 375) <= KSbFMT3Q;) {
                if (KSbFMT3Q > RwB0VbQ2XUtx -(189 - 188))
                    dL4zvg[KSbFMT3Q] = dL4zvg[KSbFMT3Q -RwB0VbQ2XUtx];
                else
                    dL4zvg[KSbFMT3Q] = '0';
                KSbFMT3Q = KSbFMT3Q -(991 - 990);
            }
        }
    }
    {
        KSbFMT3Q = (804 - 197) - (1507 - 901);
        for (; (921 - 921) < KSbFMT3Q;) {
            NxcnFIE0dR[KSbFMT3Q] = MbzcHQCSBs[KSbFMT3Q] + dL4zvg[KSbFMT3Q] - '0';
            if ((NxcnFIE0dR[KSbFMT3Q] >= '0') && ('9' >= NxcnFIE0dR[KSbFMT3Q]))
                NxcnFIE0dR[KSbFMT3Q] = NxcnFIE0dR[KSbFMT3Q];
            else {
                NxcnFIE0dR[KSbFMT3Q] = NxcnFIE0dR[KSbFMT3Q] - (743 - 733);
                MbzcHQCSBs[KSbFMT3Q -(711 - 710)]++;
            }
            KSbFMT3Q = KSbFMT3Q -(381 - 380);
        }
    }
    NxcnFIE0dR[(348 - 348)] = MbzcHQCSBs[(933 - 933)] + dL4zvg[(762 - 762)] - '0';
    if ('9' < NxcnFIE0dR[(195 - 195)]) {
        NxcnFIE0dR[(899 - 899)] = NxcnFIE0dR[(754 - 754)] - (346 - 336);
        printf ("%s\n", NxcnFIE0dR);
    }
    else {
        RwB0VbQ2XUtx = (91 - 91);
        {
            KSbFMT3Q = (318 - 135) - (594 - 411);
            for (; IYRMTq3FPV > KSbFMT3Q;) {
                if (NxcnFIE0dR[KSbFMT3Q] != '0') {
                    {
                        gFAPEmKWo = KSbFMT3Q;
                        for (; IYRMTq3FPV > gFAPEmKWo;) {
                            printf ("%c", NxcnFIE0dR[gFAPEmKWo]);
                            gFAPEmKWo = gFAPEmKWo + (437 - 436);
                        }
                    }
                    RwB0VbQ2XUtx = (661 - 660);
                }
                if (RwB0VbQ2XUtx == (407 - 406))
                    break;
                KSbFMT3Q = KSbFMT3Q +(613 - 612);
            }
        }
        RwB0VbQ2XUtx = (454 - 454);
        {
            KSbFMT3Q = (728 - 26) - (1057 - 355);
            for (; KSbFMT3Q < IYRMTq3FPV;) {
                if (NxcnFIE0dR[KSbFMT3Q] != '0')
                    RwB0VbQ2XUtx = RwB0VbQ2XUtx +(880 - 879);
                KSbFMT3Q = KSbFMT3Q +(652 - 651);
            }
        }
        if (RwB0VbQ2XUtx == (448 - 448))
            ;
        return (600 - 600);
    }
}

