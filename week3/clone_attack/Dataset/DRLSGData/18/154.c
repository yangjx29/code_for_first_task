int cSLPTCBHVRW (int *ZoKeGAJ, int U5WnhcyHGK, int xNTAQB) {
    int QznR7TXe6Y;
    QznR7TXe6Y = 32767;
    for (; (511 - 511) < U5WnhcyHGK;) {
        if (QznR7TXe6Y > *ZoKeGAJ)
            QznR7TXe6Y = *ZoKeGAJ;
        ZoKeGAJ += xNTAQB;
        U5WnhcyHGK--;
    }
    return QznR7TXe6Y;
}

void  main () {
    int U5WnhcyHGK;
    int QNAgbQ9uT;
    int ZoKeGAJ [(211 - 111)] [(292 - 192)];
    int NWZXHOa3Pzg;
    int ga8juS;
    int tK1sXNZ;
    int xtvKLGdMwpyo;
    int jvdHRnf6NQ;
    scanf ("%d", &U5WnhcyHGK);
    for (QNAgbQ9uT = (543 - 543); QNAgbQ9uT < U5WnhcyHGK; QNAgbQ9uT++) {
        for (NWZXHOa3Pzg = (864 - 864); U5WnhcyHGK > NWZXHOa3Pzg; NWZXHOa3Pzg++)
            for (ga8juS = (437 - 437); U5WnhcyHGK > ga8juS; ga8juS++)
                scanf ("%d", &ZoKeGAJ[NWZXHOa3Pzg][ga8juS]);
        xtvKLGdMwpyo = (326 - 326);
        for (NWZXHOa3Pzg = U5WnhcyHGK; NWZXHOa3Pzg >= (813 - 811); NWZXHOa3Pzg--) {
            for (ga8juS = (818 - 818); NWZXHOa3Pzg > ga8juS; ga8juS++) {
                jvdHRnf6NQ = cSLPTCBHVRW (ZoKeGAJ[ga8juS], NWZXHOa3Pzg, (232 - 231));
                for (tK1sXNZ = (831 - 831); tK1sXNZ < NWZXHOa3Pzg; tK1sXNZ++)
                    ZoKeGAJ[ga8juS][tK1sXNZ] -= jvdHRnf6NQ;
            }
            for (ga8juS = (880 - 880); NWZXHOa3Pzg > ga8juS; ga8juS++) {
                jvdHRnf6NQ = cSLPTCBHVRW (&ZoKeGAJ[(97 - 97)][ga8juS], NWZXHOa3Pzg, 100);
                for (tK1sXNZ = (874 - 874); tK1sXNZ < NWZXHOa3Pzg; tK1sXNZ++)
                    ZoKeGAJ[tK1sXNZ][ga8juS] -= jvdHRnf6NQ;
            }
            xtvKLGdMwpyo += ZoKeGAJ[(832 - 831)][(905 - 904)];
            for (ga8juS = (532 - 531); ga8juS < NWZXHOa3Pzg -(445 - 444); ga8juS++) {
                for (tK1sXNZ = (595 - 595); tK1sXNZ < NWZXHOa3Pzg; tK1sXNZ++)
                    ZoKeGAJ[ga8juS][tK1sXNZ] = ZoKeGAJ[ga8juS + (345 - 344)][tK1sXNZ];
                for (tK1sXNZ = 0; tK1sXNZ < NWZXHOa3Pzg; tK1sXNZ++)
                    ZoKeGAJ[tK1sXNZ][ga8juS] = ZoKeGAJ[tK1sXNZ][ga8juS + 1];
            }
        }
        printf ("%d\n", xtvKLGdMwpyo);
    }
}

