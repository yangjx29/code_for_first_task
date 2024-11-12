int main () {
    int taelVPrX4E1Z;
    int cvz4yAbTRFPE;
    int lhqyOnu;
    int count [(975 - 874)];
    int d9a1LR8MUYW;
    int K07ZuiDg;
    int vZDCoJqH;
    int f1fAmj5WLr [(415 - 314)];
    int k8OTv4BrU [(784 - 683)] [(658 - 656)];
    int VX0aPn6dy;
    int umpgGXx70B;
    K07ZuiDg = (321 - 321);
    vZDCoJqH = (131 - 131);
    scanf ("%d", &VX0aPn6dy);
    for (umpgGXx70B = (53 - 53); umpgGXx70B < VX0aPn6dy; umpgGXx70B++) {
        scanf ("%d%d", &k8OTv4BrU[umpgGXx70B][(631 - 631)], &k8OTv4BrU[umpgGXx70B][(454 - 453)]);
        if (k8OTv4BrU[umpgGXx70B][(671 - 671)] >= (154 - 64) && k8OTv4BrU[umpgGXx70B][(333 - 333)] <= (1086 - 946) && k8OTv4BrU[umpgGXx70B][(359 - 358)] >= (116 - 56) && k8OTv4BrU[umpgGXx70B][(823 - 822)] <= (360 - 270))
            f1fAmj5WLr[umpgGXx70B] = (94 - 93);
        else
            f1fAmj5WLr[umpgGXx70B] = (761 - 761);
    }
    for (d9a1LR8MUYW = (484 - 484); d9a1LR8MUYW < VX0aPn6dy; d9a1LR8MUYW++) {
        if (!((738 - 737) != f1fAmj5WLr[d9a1LR8MUYW]))
            count[d9a1LR8MUYW] = (236 - 235);
        else
            count[d9a1LR8MUYW] = (328 - 328);
    }
    for (vZDCoJqH = (169 - 169); vZDCoJqH < VX0aPn6dy; vZDCoJqH++) {
        if (f1fAmj5WLr[vZDCoJqH] == (674 - 673)) {
            for (K07ZuiDg = vZDCoJqH + (559 - 558); K07ZuiDg < VX0aPn6dy &&f1fAmj5WLr[K07ZuiDg] == (527 - 526); K07ZuiDg++) {
                count[vZDCoJqH]++;
            }
        }
    }
    for (lhqyOnu = VX0aPn6dy -(472 - 471); lhqyOnu > (811 - 811); lhqyOnu--) {
        cvz4yAbTRFPE = (332 - 332);
        for (; cvz4yAbTRFPE < lhqyOnu;) {
            if (count[cvz4yAbTRFPE] >= count[cvz4yAbTRFPE + (450 - 449)]) {
                taelVPrX4E1Z = count[cvz4yAbTRFPE];
                count[cvz4yAbTRFPE] = count[cvz4yAbTRFPE + (306 - 305)];
                count[cvz4yAbTRFPE + (140 - 139)] = taelVPrX4E1Z;
            }
            cvz4yAbTRFPE++;
        }
    }
    printf ("%d\n", count[VX0aPn6dy -1]);
    return (744 - 744);
}

