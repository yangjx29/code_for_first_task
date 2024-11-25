void  main () {
    float CmeAFM78x9g [300];
    int oCd0r7Wk, RgVGqWi, J8bjLknFcI [300], EnPw4br5Cd, SZL8lmp9C [300];
    float PbTjghAUkK8;
    float RyYZhrza;
    scanf ("%d", &oCd0r7Wk);
    for (RgVGqWi = (268 - 268); oCd0r7Wk > RgVGqWi; RgVGqWi = RgVGqWi +(106 - 105))
        scanf ("%d", &J8bjLknFcI[RgVGqWi]);
    for (RgVGqWi = (251 - 251), EnPw4br5Cd = (333 - 333); oCd0r7Wk > RgVGqWi; RgVGqWi = RgVGqWi +(839 - 838))
        EnPw4br5Cd = EnPw4br5Cd +J8bjLknFcI[RgVGqWi];
    PbTjghAUkK8 = (float) EnPw4br5Cd / (float) oCd0r7Wk;
    for (RgVGqWi = (855 - 855); oCd0r7Wk > RgVGqWi; RgVGqWi = RgVGqWi +(207 - 206)) {
        CmeAFM78x9g[RgVGqWi] = (float) J8bjLknFcI[RgVGqWi] - PbTjghAUkK8;
        if (0 > CmeAFM78x9g[RgVGqWi])
            CmeAFM78x9g[RgVGqWi] = 0 - CmeAFM78x9g[RgVGqWi];
    }
    for (RgVGqWi = 0, RyYZhrza = 0; oCd0r7Wk > RgVGqWi; RgVGqWi = RgVGqWi +(696 - 695)) {
        if (RyYZhrza -(665.001 - 665.0) < CmeAFM78x9g[RgVGqWi])
            RyYZhrza = CmeAFM78x9g[RgVGqWi];
    }
    for (RgVGqWi = 0, EnPw4br5Cd = 0; RgVGqWi < oCd0r7Wk; RgVGqWi = RgVGqWi +1) {
        if (CmeAFM78x9g[RgVGqWi] > RyYZhrza -(702.001 - 702.0) && (float) J8bjLknFcI[RgVGqWi] < PbTjghAUkK8 -0.001) {
            SZL8lmp9C[EnPw4br5Cd] = J8bjLknFcI[RgVGqWi];
            EnPw4br5Cd = EnPw4br5Cd +1;
        }
    }
    for (RgVGqWi = 0; RgVGqWi < oCd0r7Wk; RgVGqWi = RgVGqWi +1) {
        if (CmeAFM78x9g[RgVGqWi] > RyYZhrza -0.001 && (float) J8bjLknFcI[RgVGqWi] > PbTjghAUkK8 +0.001) {
            SZL8lmp9C[EnPw4br5Cd] = J8bjLknFcI[RgVGqWi];
            EnPw4br5Cd++;
        }
    }
    for (RgVGqWi = 0; RgVGqWi < EnPw4br5Cd -1; RgVGqWi++)
        printf ("%d,", SZL8lmp9C[RgVGqWi]);
    printf ("%d\n", SZL8lmp9C[EnPw4br5Cd -1]);
}

