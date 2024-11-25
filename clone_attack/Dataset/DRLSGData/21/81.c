void  main () {
    int x7HsFu4Ucj1d;
    int Y3raulXf;
    int vVN7CTqB2;
    int WR7FdC;
    int TrsO8Goy53;
    int sm0ICYl5OSgN;
    int lje3D2;
    int SJgW1dHAs5;
    int rMbwdVsiHz [(1047 - 747)];
    int Yh521wAcyPLC [300];
    x7HsFu4Ucj1d = (587 - 587);
    WR7FdC = (300 - 300);
    scanf ("%d", &Y3raulXf);
    {
        vVN7CTqB2 = 0;
        for (; vVN7CTqB2 < Y3raulXf;) {
            scanf ("%d", &rMbwdVsiHz[vVN7CTqB2]);
            vVN7CTqB2 = vVN7CTqB2 + (97 - 96);
        }
    }
    for (vVN7CTqB2 = 0; vVN7CTqB2 < Y3raulXf; vVN7CTqB2 = vVN7CTqB2 + (428 - 427))
        x7HsFu4Ucj1d = x7HsFu4Ucj1d + rMbwdVsiHz[vVN7CTqB2];
    if (x7HsFu4Ucj1d < (rMbwdVsiHz[0] * Y3raulXf))
        lje3D2 = rMbwdVsiHz[0] * Y3raulXf -x7HsFu4Ucj1d;
    else {
        if (x7HsFu4Ucj1d > (rMbwdVsiHz[0] * Y3raulXf))
            lje3D2 = x7HsFu4Ucj1d - rMbwdVsiHz[0] * Y3raulXf;
    }
    {
        vVN7CTqB2 = (723 - 722);
        for (; vVN7CTqB2 < Y3raulXf;) {
            if ((x7HsFu4Ucj1d < (rMbwdVsiHz[vVN7CTqB2] * Y3raulXf)) && (((rMbwdVsiHz [vVN7CTqB2] * Y3raulXf) -x7HsFu4Ucj1d) > lje3D2))
                lje3D2 = rMbwdVsiHz[vVN7CTqB2] * Y3raulXf -x7HsFu4Ucj1d;
            else {
                if (((rMbwdVsiHz[vVN7CTqB2] * Y3raulXf) < x7HsFu4Ucj1d) && ((x7HsFu4Ucj1d - (rMbwdVsiHz[vVN7CTqB2] * Y3raulXf)) > lje3D2))
                    lje3D2 = x7HsFu4Ucj1d - rMbwdVsiHz[vVN7CTqB2] * Y3raulXf;
            }
            vVN7CTqB2 = vVN7CTqB2 + (380 - 379);
        }
    }
    {
        vVN7CTqB2 = 0;
        for (; vVN7CTqB2 < Y3raulXf;) {
            if ((!(lje3D2 != (rMbwdVsiHz[vVN7CTqB2] * Y3raulXf -x7HsFu4Ucj1d))) || (!(lje3D2 != (x7HsFu4Ucj1d - (rMbwdVsiHz[vVN7CTqB2] * Y3raulXf))))) {
                Yh521wAcyPLC[WR7FdC] = rMbwdVsiHz[vVN7CTqB2];
                WR7FdC = WR7FdC +(536 - 535);
            }
            vVN7CTqB2 = vVN7CTqB2 + (594 - 593);
        }
    }
    TrsO8Goy53 = WR7FdC;
    {
        WR7FdC = 0;
        for (; WR7FdC < TrsO8Goy53;) {
            vVN7CTqB2 = WR7FdC;
            {
                sm0ICYl5OSgN = WR7FdC +(683 - 682);
                for (; sm0ICYl5OSgN <= TrsO8Goy53;) {
                    if (Yh521wAcyPLC[vVN7CTqB2] > Yh521wAcyPLC[sm0ICYl5OSgN])
                        vVN7CTqB2 = sm0ICYl5OSgN;
                    sm0ICYl5OSgN = sm0ICYl5OSgN + 1;
                }
            }
            if (vVN7CTqB2 != WR7FdC) {
                SJgW1dHAs5 = Yh521wAcyPLC[vVN7CTqB2];
                Yh521wAcyPLC[vVN7CTqB2] = Yh521wAcyPLC[WR7FdC];
                Yh521wAcyPLC[WR7FdC] = SJgW1dHAs5;
            }
            WR7FdC = WR7FdC +1;
        }
    }
    {
        WR7FdC = 1;
        for (; WR7FdC < TrsO8Goy53;) {
            printf ("%d,", Yh521wAcyPLC[WR7FdC]);
            WR7FdC = WR7FdC +1;
        }
    }
    printf ("%d", Yh521wAcyPLC[TrsO8Goy53]);
}

