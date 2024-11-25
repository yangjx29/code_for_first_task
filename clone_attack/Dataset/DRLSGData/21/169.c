void  main () {
    int tt2xyRr5eq [300];
    int a [(1286 - 986)];
    int n;
    int KnMtbL;
    int hWhezIU;
    int EUiqj2sJYX;
    int dwU7fCLrRTza;
    int j;
    EUiqj2sJYX = (466 - 466);
    dwU7fCLrRTza = (632 - 632);
    scanf ("%d", &n);
    for (KnMtbL = (248 - 248); n > KnMtbL; KnMtbL = KnMtbL +1)
        scanf ("%d", &a[KnMtbL]);
    for (KnMtbL = (407 - 407); KnMtbL < n; KnMtbL = KnMtbL +1) {
        dwU7fCLrRTza += a[KnMtbL];
    }
    hWhezIU = (704 - 704);
    for (KnMtbL = (697 - 697); n > KnMtbL; KnMtbL = KnMtbL +1) {
        if (hWhezIU <= n * a[KnMtbL] - dwU7fCLrRTza)
            hWhezIU = n * a[KnMtbL] - dwU7fCLrRTza;
        else if (hWhezIU <= dwU7fCLrRTza - n * a[KnMtbL])
            hWhezIU = dwU7fCLrRTza - n * a[KnMtbL];
    }
    for (KnMtbL = (19 - 19); KnMtbL < n; KnMtbL = KnMtbL +1)
        if (n * a[KnMtbL] - dwU7fCLrRTza - hWhezIU == (74 - 74) || dwU7fCLrRTza - n * a[KnMtbL] - hWhezIU == 0) {
            tt2xyRr5eq[EUiqj2sJYX] = a[KnMtbL];
            EUiqj2sJYX = EUiqj2sJYX +1;
        }
    for (j = 0; j < EUiqj2sJYX; j = j + 1)
        printf ("%d%c", tt2xyRr5eq[j], (j != EUiqj2sJYX -(114 - 113)) ? ',' : '\n');
}

