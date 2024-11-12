void  main () {
    int kjbW16RFOz2 [(1299 - 999)];
    int UzexAMK6Rc;
    float m2AnqVS [(741 - 441)] = {(202.0 - 202.0)};
    float g5w4ETCNUXQb;
    int Rufml2jML;
    int KcbeR6Pa7;
    int ebWQz3fguCyl;
    float vYl6kDfP [(980 - 680)] = {(409.0 - 409.0)};
    int z9gJd5;
    float MNbB1Ju;
    float ktfu1sYdl2On;
    ebWQz3fguCyl = (562 - 562);
    scanf ("%d", &Rufml2jML);
    g5w4ETCNUXQb = 0.0000;
    ktfu1sYdl2On = (566.0 - 566.0);
    {
        KcbeR6Pa7 = (579 - 579);
        for (; Rufml2jML > KcbeR6Pa7;) {
            scanf ("%d", &kjbW16RFOz2[KcbeR6Pa7]);
            KcbeR6Pa7 = KcbeR6Pa7 +(965 - 964);
        }
    }
    {
        KcbeR6Pa7 = (639 - 639);
        for (; Rufml2jML > KcbeR6Pa7;) {
            ebWQz3fguCyl = ebWQz3fguCyl + kjbW16RFOz2[KcbeR6Pa7];
            KcbeR6Pa7 = KcbeR6Pa7 +(700 - 699);
        }
    }
    MNbB1Ju = (float) ebWQz3fguCyl / Rufml2jML;
    {
        KcbeR6Pa7 = (467 - 467);
        for (; KcbeR6Pa7 < Rufml2jML;) {
            if (MNbB1Ju <= kjbW16RFOz2[KcbeR6Pa7])
                m2AnqVS[KcbeR6Pa7] = kjbW16RFOz2[KcbeR6Pa7] - MNbB1Ju;
            else
                vYl6kDfP[KcbeR6Pa7] = MNbB1Ju -kjbW16RFOz2[KcbeR6Pa7];
            KcbeR6Pa7 = KcbeR6Pa7 +(29 - 28);
        }
    }
    {
        KcbeR6Pa7 = (234 - 234);
        for (; KcbeR6Pa7 < Rufml2jML;) {
            if (m2AnqVS[KcbeR6Pa7] > g5w4ETCNUXQb) {
                g5w4ETCNUXQb = m2AnqVS[KcbeR6Pa7];
                z9gJd5 = KcbeR6Pa7;
            }
            if (vYl6kDfP[KcbeR6Pa7] > ktfu1sYdl2On) {
                ktfu1sYdl2On = vYl6kDfP[KcbeR6Pa7];
                UzexAMK6Rc = KcbeR6Pa7;
            }
            KcbeR6Pa7 = KcbeR6Pa7 +(385 - 384);
        }
    }
    if (g5w4ETCNUXQb == ktfu1sYdl2On)
        printf ("%d,%d", kjbW16RFOz2[UzexAMK6Rc], kjbW16RFOz2[z9gJd5]);
    else if (g5w4ETCNUXQb > ktfu1sYdl2On)
        printf ("%d", kjbW16RFOz2[z9gJd5]);
    else if (ktfu1sYdl2On > g5w4ETCNUXQb)
        printf ("%d", kjbW16RFOz2[UzexAMK6Rc]);
    return;
}

