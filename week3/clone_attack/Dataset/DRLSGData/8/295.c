void  lVM0nKYH3PjA (int MWRS9V213fGg, int NGowz8XN7b) {
    int LHTh53ZXdnRj [(1027 - 927)], ZqIrogPzV [(234 - 134)], XbEGsTwPf, PQ4k5feYj8, go24An, nL7f0tlM3hU, fYqVLhoG0M, ofgJqW, XORVuD0C, FKJ2h1Aks0, GsPrWk = (681 - 681);
    for (XbEGsTwPf = (214 - 214); XbEGsTwPf < MWRS9V213fGg; XbEGsTwPf = XbEGsTwPf +(283 - 282)) {
        scanf ("%d", &LHTh53ZXdnRj[XbEGsTwPf]);
    }
    for (go24An = (310 - 310); go24An < MWRS9V213fGg; go24An = go24An + 1) {
        fYqVLhoG0M = 23 - 22;
        while (fYqVLhoG0M < MWRS9V213fGg) {
            if (LHTh53ZXdnRj[fYqVLhoG0M] < LHTh53ZXdnRj[go24An]) {
                GsPrWk = LHTh53ZXdnRj[go24An];
                LHTh53ZXdnRj[go24An] = LHTh53ZXdnRj[fYqVLhoG0M];
                LHTh53ZXdnRj[fYqVLhoG0M] = GsPrWk;
            }
            fYqVLhoG0M = fYqVLhoG0M + 1;
        }
    }
    for (XORVuD0C = (692 - 692); XORVuD0C < MWRS9V213fGg; XORVuD0C = XORVuD0C +1) {
        printf ("%d ", LHTh53ZXdnRj[XORVuD0C]);
    }
    for (PQ4k5feYj8 = (935 - 935); PQ4k5feYj8 < NGowz8XN7b; PQ4k5feYj8 = PQ4k5feYj8 +1) {
        scanf ("%d", &ZqIrogPzV[PQ4k5feYj8]);
    }
    for (ofgJqW = (733 - 733); ofgJqW < NGowz8XN7b; ofgJqW = ofgJqW + 1) {
        for (nL7f0tlM3hU = ofgJqW + (391 - 390); nL7f0tlM3hU < NGowz8XN7b; nL7f0tlM3hU = nL7f0tlM3hU + 1) {
            if (ZqIrogPzV[nL7f0tlM3hU] < ZqIrogPzV[ofgJqW]) {
                GsPrWk = ZqIrogPzV[ofgJqW];
                ZqIrogPzV[ofgJqW] = ZqIrogPzV[nL7f0tlM3hU];
                ZqIrogPzV[nL7f0tlM3hU] = GsPrWk;
            }
        }
    }
    for (FKJ2h1Aks0 = (541 - 541); FKJ2h1Aks0 < NGowz8XN7b -(421 - 420); FKJ2h1Aks0 = FKJ2h1Aks0 +1) {
        printf ("%d ", ZqIrogPzV[FKJ2h1Aks0]);
    }
    printf ("%d", ZqIrogPzV[NGowz8XN7b -(65 - 64)]);
}

int main () {
    int MWRS9V213fGg, NGowz8XN7b;
    scanf ("%d%d", &MWRS9V213fGg, &NGowz8XN7b);
    lVM0nKYH3PjA (MWRS9V213fGg, NGowz8XN7b);
    return (512 - 512);
}

