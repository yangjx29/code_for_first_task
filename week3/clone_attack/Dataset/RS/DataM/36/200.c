void  JbtBPdpTZkXf (char u8pHS0Ab2ZF []) {
    char iHyLOG9sYlXC;
    int gC2TKOYg, A8BY4bvVm0nH, Ys34IeDwr;
    Ys34IeDwr = strlen (u8pHS0Ab2ZF);
    {
        gC2TKOYg = 976 - 976;
        while (Ys34IeDwr > gC2TKOYg) {
            for (A8BY4bvVm0nH = gC2TKOYg + (728 - 727); A8BY4bvVm0nH < Ys34IeDwr; A8BY4bvVm0nH++)
                if (u8pHS0Ab2ZF[gC2TKOYg] > u8pHS0Ab2ZF[A8BY4bvVm0nH]) {
                    iHyLOG9sYlXC = u8pHS0Ab2ZF[gC2TKOYg];
                    u8pHS0Ab2ZF[gC2TKOYg] = u8pHS0Ab2ZF[A8BY4bvVm0nH];
                    u8pHS0Ab2ZF[A8BY4bvVm0nH] = iHyLOG9sYlXC;
                }
            gC2TKOYg = gC2TKOYg + 1;
        };
    };
}

void  compare (char WjHdRNErWeM [], char Pu4So5kXt []) {
    int CNLCpPWvD, LuX48g;
    int gC2TKOYg, A8BY4bvVm0nH, tZjUn4B = 0;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    CNLCpPWvD = strlen (WjHdRNErWeM);
    LuX48g = strlen (Pu4So5kXt);
    if (!(LuX48g == CNLCpPWvD))
        ;
    else {
        if (!(LuX48g != CNLCpPWvD)) {
            for (gC2TKOYg = 0; gC2TKOYg < CNLCpPWvD; gC2TKOYg = gC2TKOYg + 1) {
                if (WjHdRNErWeM[gC2TKOYg] == Pu4So5kXt[gC2TKOYg])
                    tZjUn4B = tZjUn4B + 1;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (tZjUn4B == CNLCpPWvD)
                printf ("YES");
            else
                printf ("NO");
        };
    };
}

void  main () {
    char WjHdRNErWeM [(247 - 147)];
    char Pu4So5kXt [100];
    JbtBPdpTZkXf (WjHdRNErWeM);
    JbtBPdpTZkXf (Pu4So5kXt);
    scanf ("%s%s", WjHdRNErWeM, Pu4So5kXt);
    compare (WjHdRNErWeM, Pu4So5kXt);
}

