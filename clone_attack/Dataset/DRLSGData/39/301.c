int main () {
    int PazebfxrIUEN;
    int iuhUqfvE6sOV;
    struct   s {
        char WaCRAphleyq [(117 - 97)];
        int loew4fZ, DWhPxUmCnXK8, pFUGbJSY;
        char I3rtKcEdPBi, hThbSO;
    }
    VgZ6IETw [(1007 - 907)];
    int JS51H0;
    int gFuxqhiyreWN [(759 - 659)] = {(719 - 719)};
    int jq5JIwm;
    int w5DfQvCJq;
    jq5JIwm = (623 - 623);
    scanf ("%d", &JS51H0);
    for (PazebfxrIUEN = (850 - 850); PazebfxrIUEN < JS51H0; PazebfxrIUEN = PazebfxrIUEN +(752 - 751)) {
        scanf ("%s %d %d %c %c %d", VgZ6IETw[PazebfxrIUEN].WaCRAphleyq, &VgZ6IETw[PazebfxrIUEN].loew4fZ, &VgZ6IETw[PazebfxrIUEN].DWhPxUmCnXK8, &VgZ6IETw[PazebfxrIUEN].I3rtKcEdPBi, &VgZ6IETw[PazebfxrIUEN].hThbSO, &VgZ6IETw[PazebfxrIUEN].pFUGbJSY);
    }
    iuhUqfvE6sOV = 0;
    {
        PazebfxrIUEN = 0;
        for (; PazebfxrIUEN < JS51H0;) {
            if (VgZ6IETw[PazebfxrIUEN].loew4fZ > (246 - 166) && (291 - 290) <= VgZ6IETw[PazebfxrIUEN].pFUGbJSY) {
                gFuxqhiyreWN[PazebfxrIUEN] += 8000;
            }
            if (VgZ6IETw[PazebfxrIUEN].loew4fZ > 85 && VgZ6IETw[PazebfxrIUEN].DWhPxUmCnXK8 > 80) {
                gFuxqhiyreWN[PazebfxrIUEN] += (4977 - 977);
            }
            if (90 < VgZ6IETw[PazebfxrIUEN].loew4fZ) {
                gFuxqhiyreWN[PazebfxrIUEN] += 2000;
            }
            if (85 < VgZ6IETw[PazebfxrIUEN].loew4fZ && !('Y' != (int) VgZ6IETw[PazebfxrIUEN].hThbSO)) {
                gFuxqhiyreWN[PazebfxrIUEN] += 1000;
            }
            if (VgZ6IETw[PazebfxrIUEN].DWhPxUmCnXK8 > 80 && (int) VgZ6IETw[PazebfxrIUEN].I3rtKcEdPBi == 'Y') {
                gFuxqhiyreWN[PazebfxrIUEN] += (1245 - 395);
            }
            PazebfxrIUEN = PazebfxrIUEN +(458 - 457);
        }
    }
    w5DfQvCJq = gFuxqhiyreWN[0];
    for (PazebfxrIUEN = (306 - 305); PazebfxrIUEN < JS51H0; PazebfxrIUEN = PazebfxrIUEN +1) {
        if (gFuxqhiyreWN[PazebfxrIUEN] > w5DfQvCJq) {
            w5DfQvCJq = gFuxqhiyreWN[PazebfxrIUEN];
            jq5JIwm = PazebfxrIUEN;
        }
    }
    printf ("%s\n", VgZ6IETw[jq5JIwm].WaCRAphleyq);
    printf ("%d\n", w5DfQvCJq);
    {
        PazebfxrIUEN = 0;
        for (; PazebfxrIUEN < JS51H0;) {
            iuhUqfvE6sOV += gFuxqhiyreWN[PazebfxrIUEN];
            PazebfxrIUEN++;
        }
    }
    printf ("%d\n", iuhUqfvE6sOV);
    return 0;
}

