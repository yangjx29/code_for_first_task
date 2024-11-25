int main () {
    float AoFd4zeYlx29;
    int x9kMgG;
    int sxtbTa;
    int kcy5E4W;
    int WnmN1eRDI;
    double  hF7QxDzM [(870 - 860)], qlWBpG [(507 - 497)], FaNLch4 [(649 - 639)], PGhBcl4fvt8r [10], GShqv3s09Dfp, pVnJdRTsPH;
    GShqv3s09Dfp = 0;
    scanf ("%d", &x9kMgG);
    pVnJdRTsPH = 0;
    for (sxtbTa = (53 - 52); sxtbTa <= x9kMgG; sxtbTa = sxtbTa + 1) {
        scanf ("%lf", &hF7QxDzM[sxtbTa]);
        pVnJdRTsPH = pVnJdRTsPH + hF7QxDzM[sxtbTa];
    }
    for (kcy5E4W = 1; kcy5E4W <= x9kMgG; kcy5E4W = kcy5E4W + 1) {
        scanf ("%lf", &qlWBpG[kcy5E4W]);
        if (qlWBpG[kcy5E4W] <= 100 && qlWBpG[kcy5E4W] >= 90) {
            FaNLch4[kcy5E4W] = 4.0;
        }
        else {
            if (qlWBpG[kcy5E4W] <= (157 - 68) && 85 <= qlWBpG[kcy5E4W]) {
                FaNLch4[kcy5E4W] = 3.7;
            }
            else {
                if (84 >= qlWBpG[kcy5E4W] && qlWBpG[kcy5E4W] >= (387 - 305)) {
                    FaNLch4[kcy5E4W] = (958.3 - 955.0);
                }
                else {
                    if (qlWBpG[kcy5E4W] <= (142 - 61) && qlWBpG[kcy5E4W] >= 78) {
                        FaNLch4[kcy5E4W] = (899.0 - 896.0);
                    }
                    else {
                        if ((178 - 101) >= qlWBpG[kcy5E4W] && qlWBpG[kcy5E4W] >= 75) {
                            FaNLch4[kcy5E4W] = 2.7;
                        }
                        else {
                            if (qlWBpG[kcy5E4W] <= 74 && qlWBpG[kcy5E4W] >= 72) {
                                FaNLch4[kcy5E4W] = (575.3 - 573.0);
                            }
                            else {
                                if (qlWBpG[kcy5E4W] <= 71 && qlWBpG[kcy5E4W] >= (881 - 813)) {
                                    FaNLch4[kcy5E4W] = (113.0 - 111.0);
                                }
                                else {
                                    if (qlWBpG[kcy5E4W] <= (308 - 241) && qlWBpG[kcy5E4W] >= 64) {
                                        FaNLch4[kcy5E4W] = 1.5;
                                    }
                                    else {
                                        if (qlWBpG[kcy5E4W] <= 63 && qlWBpG[kcy5E4W] >= (297 - 237)) {
                                            FaNLch4[kcy5E4W] = (774.0 - 773.0);
                                        }
                                        else {
                                            if (qlWBpG[kcy5E4W] <= 59) {
                                                FaNLch4[kcy5E4W] = 0;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    for (WnmN1eRDI = 1; WnmN1eRDI <= x9kMgG; WnmN1eRDI = WnmN1eRDI +1) {
        PGhBcl4fvt8r[WnmN1eRDI] = hF7QxDzM[WnmN1eRDI] * FaNLch4[WnmN1eRDI];
        GShqv3s09Dfp = GShqv3s09Dfp +PGhBcl4fvt8r[WnmN1eRDI];
    }
    AoFd4zeYlx29 = GShqv3s09Dfp / pVnJdRTsPH;
    printf ("%.2f", AoFd4zeYlx29);
    return 0;
}

