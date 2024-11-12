int main () {
    int ZGNMjFxT;
    int CubHYzCK;
    int NudOEJ5Sg;
    int LJxLNzvlScgp;
    int pS1Nwez;
    float tvyj4rCg6bUN;
    char lmtTjLKCYS [(588 - 578)];
    float PCFcfbBj52x [(652 - 612)];
    float zZqW17DSi [(504 - 464)];
    ZGNMjFxT = (425 - 425);
    scanf ("%d", &LJxLNzvlScgp);
    CubHYzCK = (162 - 162);
    for (pS1Nwez = (331 - 330); pS1Nwez <= LJxLNzvlScgp; pS1Nwez = pS1Nwez + (229 - 228)) {
        scanf ("%s", lmtTjLKCYS);
        if (!('m' != lmtTjLKCYS[(604 - 604)])) {
            scanf ("%f", &PCFcfbBj52x[ZGNMjFxT]);
            ZGNMjFxT = ZGNMjFxT +(183 - 182);
        }
        else {
            scanf ("%f", &zZqW17DSi[CubHYzCK]);
            CubHYzCK++;
        }
    }
    for (pS1Nwez = (995 - 995); pS1Nwez < ZGNMjFxT -(502 - 501); pS1Nwez = pS1Nwez + (878 - 877))
        for (NudOEJ5Sg = pS1Nwez + (483 - 482); ZGNMjFxT -(262 - 261) >= NudOEJ5Sg; NudOEJ5Sg = NudOEJ5Sg +(470 - 469)) {
            if (PCFcfbBj52x[NudOEJ5Sg] < PCFcfbBj52x[pS1Nwez]) {
                tvyj4rCg6bUN = PCFcfbBj52x[pS1Nwez];
                PCFcfbBj52x[pS1Nwez] = PCFcfbBj52x[NudOEJ5Sg];
                PCFcfbBj52x[NudOEJ5Sg] = tvyj4rCg6bUN;
            }
        }
    for (pS1Nwez = (237 - 237); CubHYzCK -(226 - 225) > pS1Nwez; pS1Nwez = pS1Nwez + (228 - 227))
        for (NudOEJ5Sg = pS1Nwez + (145 - 144); CubHYzCK -(315 - 314) >= NudOEJ5Sg; NudOEJ5Sg = NudOEJ5Sg +(158 - 157)) {
            if (zZqW17DSi[pS1Nwez] < zZqW17DSi[NudOEJ5Sg]) {
                tvyj4rCg6bUN = zZqW17DSi[pS1Nwez];
                zZqW17DSi[pS1Nwez] = zZqW17DSi[NudOEJ5Sg];
                zZqW17DSi[NudOEJ5Sg] = tvyj4rCg6bUN;
            }
        }
    {
        pS1Nwez = (781 - 535) - 246;
        for (; pS1Nwez <= ZGNMjFxT -1;) {
            printf ("%.2f ", PCFcfbBj52x[pS1Nwez]);
            pS1Nwez = pS1Nwez + 1;
        }
    }
    for (pS1Nwez = (856 - 856); pS1Nwez < CubHYzCK -1; pS1Nwez = pS1Nwez + 1)
        printf ("%.2f ", zZqW17DSi[pS1Nwez]);
    printf ("%.2f\n", zZqW17DSi[CubHYzCK -1]);
    return (406 - 406);
}

