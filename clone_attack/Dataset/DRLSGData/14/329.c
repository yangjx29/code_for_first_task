struct   WFnyW8LcBpQ9 {
    int sbVDYG8O4s;
    int UYC3ozhD7;
    int D0MAnE6BRTDf;
}
WFnyW8LcBpQ9 [(100260 - 260)];

void  main () {
    int g0IxFZ2lH6Po;
    int KMRNsC50LqJ;
    int NH9hlDEFzuy;
    int lFcJiq;
    int Sw6RU2;
    int KSPDURf;
    int yLmNOwkAjo [(100546 - 546)] = {(984 - 984)};
    g0IxFZ2lH6Po = (629 - 629);
    KMRNsC50LqJ = (23 - 23);
    NH9hlDEFzuy = (136 - 136);
    scanf ("%d", &lFcJiq);
    {
        Sw6RU2 = (699 - 699);
        for (; Sw6RU2 < lFcJiq;) {
            scanf ("%d%d%d", &WFnyW8LcBpQ9[Sw6RU2].sbVDYG8O4s, &WFnyW8LcBpQ9[Sw6RU2].UYC3ozhD7, &WFnyW8LcBpQ9[Sw6RU2].D0MAnE6BRTDf);
            Sw6RU2++;
        }
    }
    int un6fqSsMBmVX = (776 - 776);
    int HraRbCL8 = 0;
    int h1srzUSn9;
    h1srzUSn9 = 0;
    {
        KSPDURf = 0;
        for (; KSPDURf < lFcJiq;) {
            if (WFnyW8LcBpQ9[KSPDURf].UYC3ozhD7 + WFnyW8LcBpQ9[KSPDURf].D0MAnE6BRTDf > un6fqSsMBmVX) {
                h1srzUSn9 = HraRbCL8;
                NH9hlDEFzuy = KMRNsC50LqJ;
                HraRbCL8 = un6fqSsMBmVX;
                KMRNsC50LqJ = g0IxFZ2lH6Po;
                un6fqSsMBmVX = WFnyW8LcBpQ9[KSPDURf].UYC3ozhD7 + WFnyW8LcBpQ9[KSPDURf].D0MAnE6BRTDf;
                g0IxFZ2lH6Po = WFnyW8LcBpQ9[KSPDURf].sbVDYG8O4s;
            }
            else if ((WFnyW8LcBpQ9[KSPDURf].UYC3ozhD7 + WFnyW8LcBpQ9[KSPDURf].D0MAnE6BRTDf < un6fqSsMBmVX) && (WFnyW8LcBpQ9[KSPDURf].UYC3ozhD7 + WFnyW8LcBpQ9[KSPDURf].D0MAnE6BRTDf > HraRbCL8)) {
                h1srzUSn9 = HraRbCL8;
                NH9hlDEFzuy = KMRNsC50LqJ;
                HraRbCL8 = WFnyW8LcBpQ9[KSPDURf].UYC3ozhD7 + WFnyW8LcBpQ9[KSPDURf].D0MAnE6BRTDf;
                KMRNsC50LqJ = WFnyW8LcBpQ9[KSPDURf].sbVDYG8O4s;
            }
            else if ((WFnyW8LcBpQ9[KSPDURf].UYC3ozhD7 + WFnyW8LcBpQ9[KSPDURf].D0MAnE6BRTDf < HraRbCL8) && (h1srzUSn9 < WFnyW8LcBpQ9[KSPDURf].UYC3ozhD7 + WFnyW8LcBpQ9[KSPDURf].D0MAnE6BRTDf)) {
                h1srzUSn9 = WFnyW8LcBpQ9[KSPDURf].UYC3ozhD7 + WFnyW8LcBpQ9[KSPDURf].D0MAnE6BRTDf;
                NH9hlDEFzuy = WFnyW8LcBpQ9[KSPDURf].sbVDYG8O4s;
            }
            else if ((!(WFnyW8LcBpQ9[KSPDURf].UYC3ozhD7 + WFnyW8LcBpQ9[KSPDURf].D0MAnE6BRTDf != un6fqSsMBmVX)) && (WFnyW8LcBpQ9[KSPDURf].UYC3ozhD7 + WFnyW8LcBpQ9[KSPDURf].D0MAnE6BRTDf > HraRbCL8)) {
                h1srzUSn9 = HraRbCL8;
                NH9hlDEFzuy = KMRNsC50LqJ;
                HraRbCL8 = WFnyW8LcBpQ9[KSPDURf].UYC3ozhD7 + WFnyW8LcBpQ9[KSPDURf].D0MAnE6BRTDf;
                KMRNsC50LqJ = WFnyW8LcBpQ9[KSPDURf].sbVDYG8O4s;
            }
            else if ((HraRbCL8 == WFnyW8LcBpQ9[KSPDURf].UYC3ozhD7 + WFnyW8LcBpQ9[KSPDURf].D0MAnE6BRTDf) && (h1srzUSn9 < WFnyW8LcBpQ9[KSPDURf].UYC3ozhD7 + WFnyW8LcBpQ9[KSPDURf].D0MAnE6BRTDf)) {
                h1srzUSn9 = WFnyW8LcBpQ9[KSPDURf].UYC3ozhD7 + WFnyW8LcBpQ9[KSPDURf].D0MAnE6BRTDf;
                NH9hlDEFzuy = WFnyW8LcBpQ9[KSPDURf].sbVDYG8O4s;
            }
            KSPDURf = KSPDURf +(127 - 126);
        }
    }
    printf ("%d %d\n%d %d\n%d %d", g0IxFZ2lH6Po, un6fqSsMBmVX, KMRNsC50LqJ, HraRbCL8, NH9hlDEFzuy, h1srzUSn9);
}

