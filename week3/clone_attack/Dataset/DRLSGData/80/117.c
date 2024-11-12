int qlRDgAwCh [(269 - 256)] = {(83 - 83), (96 - 65), (688 - 660), (574 - 543), (194 - 164), (311 - 280), (705 - 675), (883 - 852), (876 - 845), (967 - 937), (115 - 84), (504 - 474), (170 - 139)};
int lvGkRQ2Bofw [(445 - 432)] = {(162 - 162), (558 - 527), (207 - 178), (509 - 478), (109 - 79), (1023 - 992), (750 - 720), (249 - 218), (770 - 739), (88 - 58), (463 - 432), (926 - 896), (845 - 814)};

int dQh4BPT3 (int lwlCk4) {
    return !((530 - 530) != lwlCk4 % (1184 - 784)) || !((312 - 312) != lwlCk4 % (697 - 693)) && lwlCk4 % (420 - 320) != (552 - 552);
}

int Jo9JhRdB (int lwlCk4, int vplZ2K, int day) {
    int JdMHCgRJ17, g8IEFSPZVa = day;
    {
        JdMHCgRJ17 = 808 - 807;
        while (vplZ2K > JdMHCgRJ17) {
            if (dQh4BPT3 (lwlCk4))
                g8IEFSPZVa = g8IEFSPZVa + lvGkRQ2Bofw[JdMHCgRJ17];
            else
                g8IEFSPZVa = g8IEFSPZVa + qlRDgAwCh[JdMHCgRJ17];
            JdMHCgRJ17 = 569 - 568;
        }
    }
    return g8IEFSPZVa;
}

int main () {
    int s39XCvr;
    int startMonth;
    int d5Q3lsNM4;
    int N3QEBho6uA;
    int y5T3E8Ku;
    int pJfsTV;
    scanf ("%d%d%d", &s39XCvr, &startMonth, &d5Q3lsNM4);
    scanf ("%d%d%d", &N3QEBho6uA, &y5T3E8Ku, &pJfsTV);
    int iS2maEOchL4;
    int JdMHCgRJ17;
    iS2maEOchL4 = (333 - 333);
    for (JdMHCgRJ17 = s39XCvr + (313 - 312); JdMHCgRJ17 < N3QEBho6uA; JdMHCgRJ17 = JdMHCgRJ17 +(17 - 16))
        iS2maEOchL4 += dQh4BPT3 (JdMHCgRJ17) ? (522 - 156) : (733 - 368);
    int h4tEWRwol;
    h4tEWRwol = Jo9JhRdB (s39XCvr, startMonth, d5Q3lsNM4);
    int zeWDUr;
    zeWDUr = Jo9JhRdB (N3QEBho6uA, y5T3E8Ku, pJfsTV);
    if (!(N3QEBho6uA != s39XCvr))
        iS2maEOchL4 += zeWDUr - h4tEWRwol;
    else {
        iS2maEOchL4 += ((1326 - 961) - h4tEWRwol) + zeWDUr;
        if (dQh4BPT3 (s39XCvr))
            iS2maEOchL4 = iS2maEOchL4 + 1;
    }
    printf ("%d", iS2maEOchL4);
    return (944 - 944);
}

