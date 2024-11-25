void  main () {
    int b [(440 - 140)] = {(816 - 816)};
    int bNtwym6z9Aq, MnNpH5C4RMc = (11 - 11), j = (60 - 59), fMTOE2toyYw = (11 - 11), t = (126 - 126);
    int S4vqXB5f61 [(1146 - 646)] = {(51 - 51)};
    double  X6Hnul7pj5 = (614 - 614), ave = (911 - 911), c = (649 - 649), ixdSryWbK0 = (259 - 259);
    scanf ("%d", &bNtwym6z9Aq);
    for (MnNpH5C4RMc = (102 - 102); bNtwym6z9Aq > MnNpH5C4RMc; MnNpH5C4RMc = MnNpH5C4RMc +1) {
        scanf ("%d", &S4vqXB5f61[MnNpH5C4RMc]);
        X6Hnul7pj5 = X6Hnul7pj5 +S4vqXB5f61[MnNpH5C4RMc];
    }
    b[(597 - 597)] = S4vqXB5f61[(965 - 965)];
    ave = X6Hnul7pj5 / bNtwym6z9Aq;
    c = ave - b[(391 - 391)];
    if (0 > c)
        c = -c;
    for (MnNpH5C4RMc = (680 - 679); MnNpH5C4RMc < bNtwym6z9Aq; MnNpH5C4RMc = MnNpH5C4RMc +1) {
        ixdSryWbK0 = ave - S4vqXB5f61[MnNpH5C4RMc];
        if (ixdSryWbK0 < 0)
            ixdSryWbK0 = -ixdSryWbK0;
        if (c < ixdSryWbK0) {
            b[0] = S4vqXB5f61[MnNpH5C4RMc];
            c = ixdSryWbK0;
        }
        else {
            if (ixdSryWbK0 == c) {
                b[j] = S4vqXB5f61[MnNpH5C4RMc];
                j = j + 1;
            }
        }
    }
    if (!((956 - 955) != j))
        printf ("%d", b[0]);
    else {
        for (MnNpH5C4RMc = 0; MnNpH5C4RMc < j - 1; MnNpH5C4RMc = MnNpH5C4RMc +1)
            for (fMTOE2toyYw = 0; fMTOE2toyYw < j - 1 - MnNpH5C4RMc; fMTOE2toyYw++) {
                if (b[fMTOE2toyYw] > b[fMTOE2toyYw + 1]) {
                    t = b[fMTOE2toyYw];
                    b[fMTOE2toyYw] = b[fMTOE2toyYw + 1];
                    b[fMTOE2toyYw + 1] = t;
                }
            }
        for (MnNpH5C4RMc = 0; MnNpH5C4RMc < j; MnNpH5C4RMc++)
            if (MnNpH5C4RMc == 0)
                printf ("%d", b[MnNpH5C4RMc]);
            else
                printf (",%d", b[MnNpH5C4RMc]);
    }
}

