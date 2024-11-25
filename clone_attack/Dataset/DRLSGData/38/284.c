int main () {
    int w9FuoSTXG, Fh1PNKQU3SH, mCyufd, DIymnK [(356 - 256)];
    double  b3fQvc [(407 - 307)] [(1055 - 955)], mUsfPK93 [(372 - 272)], eohMPfU7 [(467 - 367)], BrC20Zk [(289 - 189)], EfeGYhETjMJw [(224 - 124)];
    {
        if (0) {
            return 0;
        }
    }
    scanf ("%d", &w9FuoSTXG);
    for (Fh1PNKQU3SH = (457 - 457); (194 - 94) > Fh1PNKQU3SH; Fh1PNKQU3SH++) {
        mUsfPK93[Fh1PNKQU3SH] = (294 - 294);
    }
    for (Fh1PNKQU3SH = (405 - 405); Fh1PNKQU3SH < (820 - 720); Fh1PNKQU3SH++) {
        EfeGYhETjMJw[Fh1PNKQU3SH] = (492 - 492);
    }
    for (Fh1PNKQU3SH = (326 - 326); Fh1PNKQU3SH < w9FuoSTXG; Fh1PNKQU3SH++) {
        scanf ("%d", &DIymnK[Fh1PNKQU3SH]);
        for (mCyufd = (127 - 127); mCyufd < DIymnK[Fh1PNKQU3SH]; mCyufd++) {
            scanf ("%lf", &b3fQvc[Fh1PNKQU3SH][mCyufd]);
            mUsfPK93[Fh1PNKQU3SH] += b3fQvc[Fh1PNKQU3SH][mCyufd];
        }
        BrC20Zk[Fh1PNKQU3SH] = mUsfPK93[Fh1PNKQU3SH] / DIymnK[Fh1PNKQU3SH];
    }
    for (Fh1PNKQU3SH = (768 - 768); w9FuoSTXG > Fh1PNKQU3SH; Fh1PNKQU3SH++) {
        for (mCyufd = (799 - 799); mCyufd < DIymnK[Fh1PNKQU3SH]; mCyufd++) {
            EfeGYhETjMJw[Fh1PNKQU3SH] += (b3fQvc[Fh1PNKQU3SH][mCyufd] - BrC20Zk[Fh1PNKQU3SH]) * (b3fQvc[Fh1PNKQU3SH][mCyufd] - BrC20Zk[Fh1PNKQU3SH]);
        }
        eohMPfU7[Fh1PNKQU3SH] = pow (EfeGYhETjMJw[Fh1PNKQU3SH] / DIymnK[Fh1PNKQU3SH], (298.5 - 298.0));
    }
    for (Fh1PNKQU3SH = (234 - 234); Fh1PNKQU3SH < w9FuoSTXG; Fh1PNKQU3SH++) {
        printf ("\n%.5lf", eohMPfU7[Fh1PNKQU3SH]);
    }
    return (834 - 834);
}

