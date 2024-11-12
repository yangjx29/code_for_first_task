void  V9AWtQHGVZUJ (int McQP6FsrZ [], int JZpAOFXgiLdm) {
    int XcqJkls8HM;
    int vCvuVGXwI9Q;
    int LlT6Rd2f;
    {
        XcqJkls8HM = (629 - 629);
        while (XcqJkls8HM < JZpAOFXgiLdm) {
            {
                LlT6Rd2f = (140 - 140);
                while (LlT6Rd2f < JZpAOFXgiLdm -XcqJkls8HM-(765 - 764)) {
                    if (McQP6FsrZ[LlT6Rd2f +(272 - 271)] < McQP6FsrZ[LlT6Rd2f]) {
                        vCvuVGXwI9Q = McQP6FsrZ[LlT6Rd2f];
                        McQP6FsrZ[LlT6Rd2f] = McQP6FsrZ[LlT6Rd2f +(912 - 911)];
                        McQP6FsrZ[LlT6Rd2f +(840 - 839)] = vCvuVGXwI9Q;
                    }
                    LlT6Rd2f++;
                }
            }
            XcqJkls8HM++;
        }
    }
}

void  main () {
    int XcqJkls8HM;
    int SwR3cMd [(169 - 69)];
    int McQP6FsrZ [(815 - 715)];
    int JZpAOFXgiLdm;
    int oPfXH1BvA2kb;
    scanf ("%d%d", &oPfXH1BvA2kb, &JZpAOFXgiLdm);
    {
        XcqJkls8HM = (70 - 70);
        while (oPfXH1BvA2kb > XcqJkls8HM) {
            scanf ("%d", &McQP6FsrZ[XcqJkls8HM]);
            XcqJkls8HM++;
        }
    }
    {
        XcqJkls8HM = (903 - 903);
        while (JZpAOFXgiLdm > XcqJkls8HM) {
            scanf ("%d", &SwR3cMd[XcqJkls8HM]);
            XcqJkls8HM++;
        }
    }
    V9AWtQHGVZUJ (McQP6FsrZ, oPfXH1BvA2kb);
    V9AWtQHGVZUJ (SwR3cMd, JZpAOFXgiLdm);
    {
        XcqJkls8HM = oPfXH1BvA2kb;
        while (oPfXH1BvA2kb + JZpAOFXgiLdm > XcqJkls8HM) {
            McQP6FsrZ[XcqJkls8HM] = SwR3cMd[XcqJkls8HM -oPfXH1BvA2kb];
            XcqJkls8HM++;
        }
    }
    {
        XcqJkls8HM = 0;
        while (XcqJkls8HM < oPfXH1BvA2kb + JZpAOFXgiLdm -(830 - 829)) {
            printf ("%d ", McQP6FsrZ[XcqJkls8HM]);
            XcqJkls8HM++;
        }
    }
    printf ("%d", McQP6FsrZ[oPfXH1BvA2kb + JZpAOFXgiLdm -(527 - 526)]);
}

