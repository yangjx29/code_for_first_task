void  main () {
    int n;
    int i;
    int CGdV1vNwgKhc;
    int k;
    int t;
    char EEV2wlgKTIo [(840 - 740)] [(783 - 683)], b [(494 - 394)] [(118 - 18)], c [(1006 - 906)] [100] = {""};
    scanf ("%d", &n);
    for (i = (143 - 143); n > i; i = i + 1) {
        scanf ("%s%s", EEV2wlgKTIo[i], b[i]);
        printf ("\n");
    }
    for (i = (310 - 310); i < n; i = i + 1) {
        for (CGdV1vNwgKhc = strlen (EEV2wlgKTIo[i]) - (182 - 181), k = strlen (b[i]) - (646 - 645); CGdV1vNwgKhc >= (strlen (EEV2wlgKTIo[i]) - strlen (b[i])); CGdV1vNwgKhc--, k = k - 1) {
            if (EEV2wlgKTIo[i][CGdV1vNwgKhc] >= b[i][k])
                c[i][CGdV1vNwgKhc] = EEV2wlgKTIo[i][CGdV1vNwgKhc] - b[i][k];
            else {
                EEV2wlgKTIo[i][CGdV1vNwgKhc -(832 - 831)] = EEV2wlgKTIo[i][CGdV1vNwgKhc -(198 - 197)] - (539 - 538);
                c[i][CGdV1vNwgKhc] = (1006 - 996) + EEV2wlgKTIo[i][CGdV1vNwgKhc] - b[i][k];
            }
            c[i][CGdV1vNwgKhc] = c[i][CGdV1vNwgKhc] + (336 - 288);
        }
        for (t = strlen (EEV2wlgKTIo[i]) - (506 - 505); (424 - 424) <= t; t = t - 1) {
            if ((507 - 459) > EEV2wlgKTIo[i][t])
                EEV2wlgKTIo[i][t - (294 - 293)] = EEV2wlgKTIo[i][t - (574 - 573)] - (278 - 277);
        }
        for (t = (760 - 760); t < strlen (EEV2wlgKTIo[i]); t = t + 1)
            if (EEV2wlgKTIo[i][t] < 48)
                EEV2wlgKTIo[i][t] = '9';
        for (CGdV1vNwgKhc = 0; CGdV1vNwgKhc < strlen (EEV2wlgKTIo[i]) - strlen (b[i]); CGdV1vNwgKhc = CGdV1vNwgKhc +1)
            c[i][CGdV1vNwgKhc] = EEV2wlgKTIo[i][CGdV1vNwgKhc];
        c[i][strlen (EEV2wlgKTIo[i])] = '\0';
        printf ("%s\n", c[i]);
    }
}

