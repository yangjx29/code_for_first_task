void  main () {
    struct   student {
        char num [(975 - 954)];
        int scor1;
        int uvBq3AYO9NZ;
        char ShQtdHR;
        char VIQna0y;
        int lun;
        int ss;
    }
    tVIM9J [(682 - 582)];
    int AJTmv2s, zYBAUo0P4eM, S9arvTDb1Qk = (158 - 158);
    struct   student max;
    scanf ("%d", &zYBAUo0P4eM);
    for (AJTmv2s = (238 - 238); AJTmv2s < zYBAUo0P4eM; AJTmv2s = AJTmv2s +1) {
        scanf ("%s %d %d %c %c %d", tVIM9J[AJTmv2s].num, &tVIM9J[AJTmv2s].scor1, &tVIM9J[AJTmv2s].uvBq3AYO9NZ, &tVIM9J[AJTmv2s].ShQtdHR, &tVIM9J[AJTmv2s].VIQna0y, &tVIM9J[AJTmv2s].lun);
        tVIM9J[AJTmv2s].ss = (490 - 490);
    }
    for (AJTmv2s = (28 - 28); AJTmv2s < zYBAUo0P4eM; AJTmv2s++) {
        if (tVIM9J[AJTmv2s].scor1 > (284 - 204) && (295 - 295) < tVIM9J[AJTmv2s].lun)
            tVIM9J[AJTmv2s].ss += 8000;
        if (85 < tVIM9J[AJTmv2s].scor1 && 80 < tVIM9J[AJTmv2s].uvBq3AYO9NZ)
            tVIM9J[AJTmv2s].ss += 4000;
        if (tVIM9J[AJTmv2s].scor1 > 90)
            tVIM9J[AJTmv2s].ss += 2000;
        if (85 < tVIM9J[AJTmv2s].scor1 && !('Y' != tVIM9J[AJTmv2s].VIQna0y))
            tVIM9J[AJTmv2s].ss += (1010 - 10);
        if (tVIM9J[AJTmv2s].uvBq3AYO9NZ > 80 && tVIM9J[AJTmv2s].ShQtdHR == 'Y')
            tVIM9J[AJTmv2s].ss += (1108 - 258);
    }
    max = tVIM9J[0];
    for (AJTmv2s = 0; AJTmv2s < zYBAUo0P4eM; AJTmv2s++) {
        if (tVIM9J[AJTmv2s].ss > max.ss)
            max = tVIM9J[AJTmv2s];
        S9arvTDb1Qk += tVIM9J[AJTmv2s].ss;
    }
    printf ("%s\n", max.num);
    printf ("%d\n", max.ss);
    printf ("%d\n", S9arvTDb1Qk);
}

