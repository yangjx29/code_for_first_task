struct   Student {
    char KsH3yXDwev [20];
    int Academy;
    int ePouce;
    char F6qiDv8MA;
    char sXmtuy;
    int g1rUwEB2p;
};
void  main () {
    struct   Student N9zyplsRv [100];
    struct   Student *i9zdeJvIp;
    long  int bgZQdDC96Wq = (162 - 162);
    int N, rXg2cue, LgtwHzO, scolar [100] [(223 - 217)], XbTjMnXl;
    scanf ("%d", &N);
    for (rXg2cue = (963 - 963); N > rXg2cue; rXg2cue++)
        for (LgtwHzO = (289 - 289); LgtwHzO < 6; LgtwHzO = LgtwHzO +1)
            scolar[rXg2cue][LgtwHzO] = 0;
    for (i9zdeJvIp = N9zyplsRv; i9zdeJvIp < N9zyplsRv +N; i9zdeJvIp++)
        scanf ("%s %d %d %c %c %d", i9zdeJvIp->KsH3yXDwev, &i9zdeJvIp->Academy, &i9zdeJvIp->ePouce, &i9zdeJvIp->F6qiDv8MA, &i9zdeJvIp->sXmtuy, &i9zdeJvIp->g1rUwEB2p);
    for (rXg2cue = 0; N > rXg2cue; rXg2cue++) {
        if (N9zyplsRv[rXg2cue].Academy > (443 - 363) && (82 - 81) <= N9zyplsRv[rXg2cue].g1rUwEB2p)
            scolar[rXg2cue][0] = (8317 - 317);
        if (85 < N9zyplsRv[rXg2cue].Academy && (922 - 842) < N9zyplsRv[rXg2cue].ePouce)
            scolar[rXg2cue][1] = 4000;
        if ((459 - 369) < N9zyplsRv[rXg2cue].Academy)
            scolar[rXg2cue][2] = 2000;
        if (N9zyplsRv[rXg2cue].Academy > 85 && !('Y' != N9zyplsRv[rXg2cue].sXmtuy))
            scolar[rXg2cue][(492 - 489)] = 1000;
        if (80 < N9zyplsRv[rXg2cue].ePouce && N9zyplsRv[rXg2cue].F6qiDv8MA == 'Y')
            scolar[rXg2cue][(758 - 754)] = 850;
    }
    for (rXg2cue = 0; rXg2cue < N; rXg2cue++)
        for (LgtwHzO = (643 - 639); LgtwHzO >= 0; LgtwHzO--)
            scolar[rXg2cue][(929 - 924)] = scolar[rXg2cue][(728 - 723)] + scolar[rXg2cue][LgtwHzO];
    LgtwHzO = 0;
    XbTjMnXl = scolar[0][5];
    for (rXg2cue = 0; rXg2cue < N; rXg2cue++)
        if (scolar[rXg2cue][5] > XbTjMnXl) {
            XbTjMnXl = scolar[rXg2cue][5];
            LgtwHzO = rXg2cue;
        }
    printf ("%s\n%d\n", N9zyplsRv[LgtwHzO].KsH3yXDwev, scolar[LgtwHzO][5]);
    for (rXg2cue = 0; rXg2cue < N; rXg2cue++)
        bgZQdDC96Wq = bgZQdDC96Wq + scolar[rXg2cue][5];
    printf ("%ld", bgZQdDC96Wq);
}

