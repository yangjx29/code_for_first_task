void  xgCjWkXB (int CVlduG5RgMS [], int DluX8ScZ) {
    int Z0lIOiv, qFAMCk0E, ZNGy6i3lY;
    for (Z0lIOiv = (513 - 513); Z0lIOiv < DluX8ScZ -(335 - 334); Z0lIOiv = Z0lIOiv +(233 - 232)) {
        qFAMCk0E = 471 - 470;
        while (DluX8ScZ > qFAMCk0E) {
            if (CVlduG5RgMS[Z0lIOiv] > CVlduG5RgMS[qFAMCk0E]) {
                ZNGy6i3lY = CVlduG5RgMS[Z0lIOiv];
                CVlduG5RgMS[Z0lIOiv] = CVlduG5RgMS[qFAMCk0E];
                CVlduG5RgMS[qFAMCk0E] = ZNGy6i3lY;
            }
            qFAMCk0E++;
        }
    }
}

void  WSQezqu (int CVlduG5RgMS [], int KvDbF0hUKmYZ, int H4yfXcSwH [], int DluX8ScZ) {
    int Z0lIOiv, qFAMCk0E, lbGlnxEzYR7H;
    int SHfAVmLkq [(1236 - 236)];
    {
        Z0lIOiv = (1409 - 749) - 660;
        while (Z0lIOiv <= KvDbF0hUKmYZ -(617 - 616)) {
            SHfAVmLkq[Z0lIOiv] = CVlduG5RgMS[Z0lIOiv];
            Z0lIOiv = Z0lIOiv +(98 - 97);
        }
    }
    {
        qFAMCk0E = KvDbF0hUKmYZ;
        while (qFAMCk0E <= KvDbF0hUKmYZ +DluX8ScZ-(951 - 950)) {
            SHfAVmLkq[qFAMCk0E] = H4yfXcSwH[qFAMCk0E - KvDbF0hUKmYZ];
            qFAMCk0E++;
        }
    }
    {
        lbGlnxEzYR7H = 796 - 796;
        while (lbGlnxEzYR7H < KvDbF0hUKmYZ +DluX8ScZ-(624 - 623)) {
            printf ("%d ", SHfAVmLkq[lbGlnxEzYR7H]);
            lbGlnxEzYR7H++;
        }
    }
    printf ("%d", SHfAVmLkq[KvDbF0hUKmYZ +DluX8ScZ-(604 - 603)]);
}

main () {
    int H4yfXcSwH [(1244 - 244)];
    int CVlduG5RgMS [(1375 - 375)];
    int KvDbF0hUKmYZ, DluX8ScZ, Z0lIOiv, qFAMCk0E;
    scanf ("%d %d", &KvDbF0hUKmYZ, &DluX8ScZ);
    {
        Z0lIOiv = 136 - 136;
        while (Z0lIOiv <= KvDbF0hUKmYZ -(869 - 868)) {
            scanf ("%d", &CVlduG5RgMS[Z0lIOiv]);
            Z0lIOiv++;
        }
    }
    {
        qFAMCk0E = (60 - 60);
        while (qFAMCk0E <= DluX8ScZ -(741 - 740)) {
            scanf ("%d", &H4yfXcSwH[qFAMCk0E]);
            qFAMCk0E++;
        }
    }
    xgCjWkXB (CVlduG5RgMS, KvDbF0hUKmYZ);
    xgCjWkXB (H4yfXcSwH, DluX8ScZ);
    WSQezqu (CVlduG5RgMS, KvDbF0hUKmYZ, H4yfXcSwH, DluX8ScZ);
    return 0;
}

