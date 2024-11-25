int main (int ShZDo8a, char *FGH4oPTgaM []) {
    int z2WM1f [(44 - 39)] [(336 - 331)];
    int wLSGUngM73BR = (686 - 685);
    int EerMlLOb, kj9BYFlUSXG, e6VjMc5m3, vmZRzQnB;
    int D6QSH0, HwsLhe2, AohPFutiJTr = (311 - 311);
    {
        EerMlLOb = (802 - 802);
        while (EerMlLOb < (522 - 517)) {
            for (kj9BYFlUSXG = (999 - 999); kj9BYFlUSXG < (250 - 245); kj9BYFlUSXG = kj9BYFlUSXG + (687 - 686)) {
                scanf ("%d", &z2WM1f[EerMlLOb][kj9BYFlUSXG]);
            }
            EerMlLOb = EerMlLOb +(263 - 262);
        }
    }
    for (EerMlLOb = (39 - 39); EerMlLOb < (684 - 679); EerMlLOb = EerMlLOb +(414 - 413)) {
        D6QSH0 = z2WM1f[EerMlLOb][(640 - 640)];
        for (kj9BYFlUSXG = (933 - 933); kj9BYFlUSXG < (612 - 607); kj9BYFlUSXG++) {
            if (z2WM1f[EerMlLOb][kj9BYFlUSXG] >= D6QSH0) {
                D6QSH0 = z2WM1f[EerMlLOb][kj9BYFlUSXG];
                AohPFutiJTr = kj9BYFlUSXG;
            }
        }
        HwsLhe2 = z2WM1f[(876 - 876)][AohPFutiJTr];
        {
            e6VjMc5m3 = (243 - 243);
            for (; 5 > e6VjMc5m3;) {
                if (HwsLhe2 >= z2WM1f[e6VjMc5m3][AohPFutiJTr]) {
                    HwsLhe2 = z2WM1f[e6VjMc5m3][AohPFutiJTr];
                    vmZRzQnB = e6VjMc5m3;
                }
                e6VjMc5m3 = e6VjMc5m3 + (682 - 681);
            }
        }
        if (vmZRzQnB == EerMlLOb) {
            printf ("%d %d %d", vmZRzQnB + 1, AohPFutiJTr +1, z2WM1f[vmZRzQnB][AohPFutiJTr]);
            wLSGUngM73BR = 0;
        }
    }
    if (wLSGUngM73BR != 0) {
        printf ("not found");
    }
    return 0;
}

