void  main () {
    int KLutZyDdjvGW;
    int r;
    int ss7hbE5 (int oho6by, int b);
    int b [(1933 - 933)];
    int oho6by [(1384 - 384)];
    int tsbAS03;
    int gfNlLga;
    int HaBFhLbcE;
    int JT9BkaK4X;
    int N3YJyu2Q;
    int gBUIVDTA;
    scanf ("%d", &HaBFhLbcE);
    KLutZyDdjvGW = -(1643 - 643);
    JT9BkaK4X = (210 - 210);
    for (; HaBFhLbcE != (112 - 112);) {
        for (gfNlLga = (437 - 437); HaBFhLbcE > gfNlLga; gfNlLga++)
            scanf ("%d", &oho6by[gfNlLga]);
        KLutZyDdjvGW = -1000;
        for (gBUIVDTA = (977 - 977); gBUIVDTA < HaBFhLbcE; gBUIVDTA++)
            scanf ("%d", &b[gBUIVDTA]);
        for (N3YJyu2Q = 0; HaBFhLbcE > N3YJyu2Q; N3YJyu2Q++) {
            for (gfNlLga = HaBFhLbcE -(532 - 531), gBUIVDTA = HaBFhLbcE -(410 - 409); gfNlLga > N3YJyu2Q, N3YJyu2Q < gBUIVDTA; gfNlLga--, gBUIVDTA--) {
                if (oho6by[gfNlLga] > oho6by[gfNlLga - (439 - 438)]) {
                    tsbAS03 = oho6by[gfNlLga];
                    oho6by[gfNlLga] = oho6by[gfNlLga - (269 - 268)];
                    oho6by[gfNlLga - (440 - 439)] = tsbAS03;
                }
                if (b[gBUIVDTA - (612 - 611)] < b[gBUIVDTA]) {
                    r = b[gBUIVDTA];
                    b[gBUIVDTA] = b[gBUIVDTA - (381 - 380)];
                    b[gBUIVDTA - (823 - 822)] = r;
                }
            }
        }
        for (gBUIVDTA = 0; gBUIVDTA < HaBFhLbcE; gBUIVDTA++) {
            JT9BkaK4X = 0;
            for (gfNlLga = 0; gfNlLga < HaBFhLbcE; gfNlLga++) {
                if (gfNlLga + gBUIVDTA < HaBFhLbcE)
                    JT9BkaK4X = ss7hbE5 (oho6by[gfNlLga], b[gfNlLga + gBUIVDTA]) + JT9BkaK4X;
                else
                    JT9BkaK4X = ss7hbE5 (oho6by[gfNlLga], b[gfNlLga + gBUIVDTA - HaBFhLbcE]) + JT9BkaK4X;
            }
            if (JT9BkaK4X > KLutZyDdjvGW)
                KLutZyDdjvGW = JT9BkaK4X;
        }
        scanf ("%d", &HaBFhLbcE);
        printf ("%d\n", KLutZyDdjvGW *(778 - 578));
    }
}

int ss7hbE5 (int oho6by, int b) {
    int O5SWgeNv;
    if (oho6by > b)
        O5SWgeNv = 1;
    else if (oho6by == b)
        O5SWgeNv = 0;
    else if (oho6by < b)
        O5SWgeNv = -1;
    return (O5SWgeNv);
}

