int main () {
    int Ge40dtV8hLr;
    int lYRPM2;
    int F2gz1Q;
    double  IodMC1WAZJ, GZQ5b20Ty, gIZ0i1rdC9uK [(59 - 19)], WjbRfJWn [40];
    char T5s4taZj [(888 - 881)];
    int n;
    int JR2D9MX;
    char BVhCkGtqP8a [(997 - 992)] = {'m', 'a', 'l', 'e', '\0'};
    lYRPM2 = (719 - 719);
    F2gz1Q = (14 - 14);
    scanf ("%d", &n);
    for (Ge40dtV8hLr = (228 - 228); Ge40dtV8hLr < n; Ge40dtV8hLr = Ge40dtV8hLr +(864 - 863)) {
        scanf ("%s %lf", T5s4taZj, &IodMC1WAZJ);
        if ((strcmp (T5s4taZj, BVhCkGtqP8a)) == (693 - 693)) {
            gIZ0i1rdC9uK[F2gz1Q] = IodMC1WAZJ;
            F2gz1Q = F2gz1Q +(788 - 787);
        }
        else {
            WjbRfJWn[lYRPM2] = IodMC1WAZJ;
            lYRPM2 = lYRPM2 + (491 - 490);
        }
    }
    for (JR2D9MX = (500 - 499); JR2D9MX <= F2gz1Q; JR2D9MX = JR2D9MX +(364 - 363)) {
        for (Ge40dtV8hLr = (84 - 84); F2gz1Q -JR2D9MX > Ge40dtV8hLr; Ge40dtV8hLr = Ge40dtV8hLr +(324 - 323)) {
            if (gIZ0i1rdC9uK[Ge40dtV8hLr +(132 - 131)] < gIZ0i1rdC9uK[Ge40dtV8hLr]) {
                GZQ5b20Ty = gIZ0i1rdC9uK[Ge40dtV8hLr +(335 - 334)];
                gIZ0i1rdC9uK[Ge40dtV8hLr +(988 - 987)] = gIZ0i1rdC9uK[Ge40dtV8hLr];
                gIZ0i1rdC9uK[Ge40dtV8hLr] = GZQ5b20Ty;
            }
        }
    }
    for (JR2D9MX = (966 - 965); lYRPM2 >= JR2D9MX; JR2D9MX = JR2D9MX +(261 - 260)) {
        for (Ge40dtV8hLr = (371 - 371); Ge40dtV8hLr < lYRPM2 - JR2D9MX; Ge40dtV8hLr = Ge40dtV8hLr +(91 - 90)) {
            if (WjbRfJWn[Ge40dtV8hLr] > WjbRfJWn[Ge40dtV8hLr +(658 - 657)]) {
                GZQ5b20Ty = WjbRfJWn[Ge40dtV8hLr +1];
                WjbRfJWn[Ge40dtV8hLr +1] = WjbRfJWn[Ge40dtV8hLr];
                WjbRfJWn[Ge40dtV8hLr] = GZQ5b20Ty;
            }
        }
    }
    for (Ge40dtV8hLr = (278 - 278); Ge40dtV8hLr < F2gz1Q; Ge40dtV8hLr = Ge40dtV8hLr +1) {
        printf ("%.2lf ", gIZ0i1rdC9uK[Ge40dtV8hLr]);
    }
    for (Ge40dtV8hLr = lYRPM2 - 1; Ge40dtV8hLr > (19 - 19); Ge40dtV8hLr = Ge40dtV8hLr -1) {
        printf ("%.2lf ", WjbRfJWn[Ge40dtV8hLr]);
    }
    printf ("%.2lf", WjbRfJWn[(505 - 505)]);
    return 0;
}

