main () {
    int LzVZAJh, Hd4IFvOJVE, ynydzXS4Ncs2, XuHKGg9y, jjNvh3R, CG6axns, EEOsyYp5St, iYKtf0Wbp8H = 0;
    int qqk0KXUMcmix [101] [101] = {0}, lnmTzF8HCrQL [101] [101] = {0}, LuP0bEyvLR [101] [101] = {0};
    scanf ("%d%d", &LzVZAJh, &Hd4IFvOJVE);
    for (jjNvh3R = 0; jjNvh3R < LzVZAJh; jjNvh3R = jjNvh3R + 1) {
        for (CG6axns = 0; CG6axns < Hd4IFvOJVE; CG6axns = CG6axns +1)
            scanf ("%d", &qqk0KXUMcmix[jjNvh3R][CG6axns]);
    }
    scanf ("%d%d", &ynydzXS4Ncs2, &XuHKGg9y);
    for (jjNvh3R = 0; jjNvh3R < ynydzXS4Ncs2; jjNvh3R = jjNvh3R + 1) {
        for (CG6axns = 0; CG6axns < XuHKGg9y; CG6axns = CG6axns +1)
            scanf ("%d", &lnmTzF8HCrQL[jjNvh3R][CG6axns]);
    }
    for (jjNvh3R = 0; jjNvh3R < LzVZAJh; jjNvh3R = jjNvh3R + 1) {
        for (CG6axns = 0; CG6axns < XuHKGg9y -1; CG6axns = CG6axns +1) {
            for (EEOsyYp5St = 0; EEOsyYp5St < Hd4IFvOJVE; EEOsyYp5St = EEOsyYp5St +1)
                iYKtf0Wbp8H = iYKtf0Wbp8H + qqk0KXUMcmix[jjNvh3R][EEOsyYp5St] * lnmTzF8HCrQL[EEOsyYp5St][CG6axns];
            LuP0bEyvLR[jjNvh3R][CG6axns] = iYKtf0Wbp8H;
            printf ("%d ", LuP0bEyvLR[jjNvh3R][CG6axns]);
            iYKtf0Wbp8H = 0;
        }
        if (CG6axns == XuHKGg9y -1) {
            for (EEOsyYp5St = 0; EEOsyYp5St < Hd4IFvOJVE; EEOsyYp5St = EEOsyYp5St +1)
                iYKtf0Wbp8H = iYKtf0Wbp8H + qqk0KXUMcmix[jjNvh3R][EEOsyYp5St] * lnmTzF8HCrQL[EEOsyYp5St][CG6axns];
            LuP0bEyvLR[jjNvh3R][XuHKGg9y -1] = iYKtf0Wbp8H;
            printf ("%d\n", LuP0bEyvLR[jjNvh3R][CG6axns]);
            iYKtf0Wbp8H = 0;
        }
    }
}

