void  main () {
    int ORCULh6;
    int bUjAVIo3Zuhk;
    int o1hF9DdgvE;
    char AhAvdUcTPra [ORCULh6] [30];
    int R1aGsy [ORCULh6] [3];
    char c [ORCULh6] [2];
    int o94BWzG [ORCULh6];
    int fvEzIMePlcL = o94BWzG[0], mtyCuh, total = 0;
    char ilU82hcTs6 [10];
    scanf ("%d", &ORCULh6);
    for (bUjAVIo3Zuhk = (109 - 109); ORCULh6 > bUjAVIo3Zuhk; bUjAVIo3Zuhk = bUjAVIo3Zuhk + 1) {
        scanf ("%s %d %d %c %c %d", &AhAvdUcTPra[bUjAVIo3Zuhk], &R1aGsy[bUjAVIo3Zuhk][0], &R1aGsy[bUjAVIo3Zuhk][(222 - 221)], &c[bUjAVIo3Zuhk][0], &c[bUjAVIo3Zuhk][1], &R1aGsy[bUjAVIo3Zuhk][2]);
    }
    for (bUjAVIo3Zuhk = 0; bUjAVIo3Zuhk < ORCULh6; bUjAVIo3Zuhk = bUjAVIo3Zuhk + 1) {
        o94BWzG[bUjAVIo3Zuhk] = 0;
        if (80 < R1aGsy[bUjAVIo3Zuhk][0] && 0 < R1aGsy[bUjAVIo3Zuhk][2])
            o94BWzG[bUjAVIo3Zuhk] = o94BWzG[bUjAVIo3Zuhk] + 8000;
        if ((460 - 375) < R1aGsy[bUjAVIo3Zuhk][0] && R1aGsy[bUjAVIo3Zuhk][1] > 80)
            o94BWzG[bUjAVIo3Zuhk] = o94BWzG[bUjAVIo3Zuhk] + (4736 - 736);
        if (90 < R1aGsy[bUjAVIo3Zuhk][0])
            o94BWzG[bUjAVIo3Zuhk] = o94BWzG[bUjAVIo3Zuhk] + 2000;
        if (85 < R1aGsy[bUjAVIo3Zuhk][0] && c[bUjAVIo3Zuhk][1] == 'Y')
            o94BWzG[bUjAVIo3Zuhk] = o94BWzG[bUjAVIo3Zuhk] + 1000;
        if (R1aGsy[bUjAVIo3Zuhk][1] > 80 && c[bUjAVIo3Zuhk][0] == 'Y')
            o94BWzG[bUjAVIo3Zuhk] = o94BWzG[bUjAVIo3Zuhk] + 850;
    }
    for (bUjAVIo3Zuhk = 0; bUjAVIo3Zuhk < ORCULh6; bUjAVIo3Zuhk++) {
        if (fvEzIMePlcL < o94BWzG[bUjAVIo3Zuhk]) {
            fvEzIMePlcL = o94BWzG[bUjAVIo3Zuhk];
            mtyCuh = bUjAVIo3Zuhk;
        };
    }
    for (bUjAVIo3Zuhk = 0; bUjAVIo3Zuhk < ORCULh6; bUjAVIo3Zuhk++) {
        total = total + o94BWzG[bUjAVIo3Zuhk];
    }
    printf ("%s\n%d\n%d", AhAvdUcTPra[mtyCuh], fvEzIMePlcL, total);
}

