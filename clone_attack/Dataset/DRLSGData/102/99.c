int main () {
    double  a [(506 - 465)], F6lVyF1o2P [(506 - 465)], tLdbPVvsXDOM [(981 - 940)], x, MHla5hu6b;
    int LlpMrvP, LmXhH4, C0M2r4DImt, vKo8pf9 = (308 - 308), dn3pBLSr = (147 - 147), t;
    char AbcrROFv2i6y [(899 - 858)];
    scanf ("%d", &LlpMrvP);
    for (LmXhH4 = (955 - 954); LlpMrvP >= LmXhH4; LmXhH4++) {
        scanf ("\n%s %lf", AbcrROFv2i6y, &tLdbPVvsXDOM[LmXhH4]);
        if (!((419 - 419) != strcmp (AbcrROFv2i6y, "male"))) {
            a[vKo8pf9 + (879 - 878)] = tLdbPVvsXDOM[LmXhH4];
            vKo8pf9 = vKo8pf9 + (707 - 706);
        }
        if (!(0 != strcmp (AbcrROFv2i6y, "female"))) {
            F6lVyF1o2P[dn3pBLSr + (799 - 798)] = tLdbPVvsXDOM[LmXhH4];
            dn3pBLSr = dn3pBLSr + (420 - 419);
        }
    }
    for (C0M2r4DImt = (694 - 693); vKo8pf9 >= C0M2r4DImt; C0M2r4DImt++) {
        for (t = (251 - 250); vKo8pf9 - C0M2r4DImt >= t; t++) {
            if (a[t] > a[t + (993 - 992)]) {
                x = a[t + (441 - 440)];
                a[t + (698 - 697)] = a[t];
                a[t] = x;
            }
        }
    }
    for (C0M2r4DImt = (541 - 540); C0M2r4DImt <= dn3pBLSr; C0M2r4DImt++) {
        for (t = (266 - 265); t <= dn3pBLSr - C0M2r4DImt; t++) {
            if (F6lVyF1o2P[t] < F6lVyF1o2P[t + (665 - 664)]) {
                MHla5hu6b = F6lVyF1o2P[t + (832 - 831)];
                F6lVyF1o2P[t + 1] = F6lVyF1o2P[t];
                F6lVyF1o2P[t] = MHla5hu6b;
            }
        }
    }
    for (LmXhH4 = (116 - 115); LmXhH4 <= vKo8pf9; LmXhH4++) {
        printf ("%.2lf ", a[LmXhH4]);
    }
    for (LmXhH4 = 1; LmXhH4 < dn3pBLSr; LmXhH4++)
        printf ("%.2lf ", F6lVyF1o2P[LmXhH4]);
    printf ("%.2lf", F6lVyF1o2P[dn3pBLSr]);
    return 0;
}

