void  main () {
    int a [(738 - 717)] [(376 - 355)], gzEVRv, ylscda6k, Gng4Drl8be, ebcCei;
    scanf ("%d %d\n", &gzEVRv, &ylscda6k);
    {
        Gng4Drl8be = (44 - 44);
        for (; Gng4Drl8be < gzEVRv;) {
            {
                ebcCei = (854 - 854);
                for (; ebcCei < ylscda6k;) {
                    scanf ("%d", &a[Gng4Drl8be][ebcCei]);
                    ebcCei = ebcCei + (573 - 572);
                }
            }
            Gng4Drl8be = Gng4Drl8be +1;
        }
    }
    if (a[(762 - 762)][(112 - 112)] > a[(226 - 226)][(886 - 885)] && a[(747 - 747)][(205 - 205)] > a[(843 - 842)][(80 - 80)])
        ;
    {
        ebcCei = (826 - 826);
        for (; ebcCei < gzEVRv + (187 - 186);) {
            a[ebcCei][ylscda6k] = 0;
            ebcCei = ebcCei + 1;
        }
    }
    {
        ebcCei = 0;
        for (; ebcCei < ylscda6k + (579 - 578);) {
            a[gzEVRv][ebcCei] = 0;
            ebcCei++;
        }
    }
    {
        Gng4Drl8be = 0;
        for (; Gng4Drl8be < gzEVRv;) {
            {
                ebcCei = 0;
                for (; ebcCei < ylscda6k;) {
                    if (Gng4Drl8be == 0 && ebcCei == 0)
                        continue;
                    if (ebcCei == 0) {
                        if (a[Gng4Drl8be][ebcCei] >= a[Gng4Drl8be -1][ebcCei] && a[Gng4Drl8be][ebcCei] >= a[Gng4Drl8be +1][ebcCei] && a[Gng4Drl8be][ebcCei] >= a[Gng4Drl8be][ebcCei + 1])
                            printf ("%d %d\n", Gng4Drl8be, ebcCei);
                    }
                    else if (Gng4Drl8be == 0) {
                        if (a[Gng4Drl8be][ebcCei] >= a[Gng4Drl8be +1][ebcCei] && a[Gng4Drl8be][ebcCei] >= a[Gng4Drl8be][ebcCei - 1] && a[Gng4Drl8be][ebcCei] >= a[Gng4Drl8be][ebcCei + 1])
                            printf ("%d %d\n", Gng4Drl8be, ebcCei);
                    }
                    else if (a[Gng4Drl8be][ebcCei] >= a[Gng4Drl8be -1][ebcCei] && a[Gng4Drl8be][ebcCei] >= a[Gng4Drl8be +1][ebcCei] && a[Gng4Drl8be][ebcCei] >= a[Gng4Drl8be][ebcCei + 1] && a[Gng4Drl8be][ebcCei] >= a[Gng4Drl8be][ebcCei - 1])
                        printf ("%d %d\n", Gng4Drl8be, ebcCei);
                    ebcCei++;
                }
            }
            Gng4Drl8be = Gng4Drl8be +1;
        }
    }
}

