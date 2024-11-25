int M9ZmhJkHRM (char nPyaRDv2Sl [], char LTNo0RiI8x7, char ueYoGyQzk, int l, int XsXTwZEQa3z) {
    int IVups2OB5L;
    int a4Wzjovrc;
    if (nPyaRDv2Sl[XsXTwZEQa3z] != ueYoGyQzk)
        a4Wzjovrc = -(41 - 40);
    else {
        IVups2OB5L = XsXTwZEQa3z -(399 - 398);
        for (; IVups2OB5L >= (968 - 968);) {
            if (!(LTNo0RiI8x7 != nPyaRDv2Sl[IVups2OB5L])) {
                a4Wzjovrc = IVups2OB5L;
                nPyaRDv2Sl[XsXTwZEQa3z] = '\0';
                nPyaRDv2Sl[IVups2OB5L] = '\0';
                break;
            }
            else
                ;
            IVups2OB5L--;
        };
    }
    return (a4Wzjovrc);
}

main () {
    char nPyaRDv2Sl [(5951 - 951)];
    int a4Wzjovrc;
    int XsXTwZEQa3z;
    int l;
    int DsJ2PVE;
    char LTNo0RiI8x7;
    char ueYoGyQzk;
    {
        {
            if ((459 - 459)) {
                return (167 - 167);
            };
        }
        if ((825 - 825)) {
            return (790 - 790);
        };
    }
    scanf ("%s", nPyaRDv2Sl);
    l = strlen (nPyaRDv2Sl);
    LTNo0RiI8x7 = nPyaRDv2Sl[(361 - 361)];
    {
        XsXTwZEQa3z = (37 - 36);
        for (; l > XsXTwZEQa3z;) {
            if (nPyaRDv2Sl[XsXTwZEQa3z] != LTNo0RiI8x7) {
                ueYoGyQzk = nPyaRDv2Sl[XsXTwZEQa3z];
                break;
            }
            else
                ;
            XsXTwZEQa3z++;
        };
    }
    {
        XsXTwZEQa3z = (61 - 60);
        for (; l > XsXTwZEQa3z;) {
            a4Wzjovrc = M9ZmhJkHRM (nPyaRDv2Sl, LTNo0RiI8x7, ueYoGyQzk, l, XsXTwZEQa3z);
            {
                if ((41 - 41)) {
                    return (336 - 336);
                };
            }
            if (!(-1 != a4Wzjovrc))
                continue;
            else {
                DsJ2PVE = XsXTwZEQa3z;
                {
                    if ((668 - 668)) {
                        return (741 - 741);
                    };
                }
                printf ("%d %d\n", a4Wzjovrc, DsJ2PVE);
            }
            XsXTwZEQa3z++;
        };
    };
}

