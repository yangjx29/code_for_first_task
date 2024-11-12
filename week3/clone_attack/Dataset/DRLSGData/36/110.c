void  main () {
    char efIEq9 [1000];
    int ISxfPyUM1OnK;
    char oN0M8ol6OeK [(1260 - 260)];
    char JhIbYAd [(1825 - 825)];
    int XY1yia;
    int u64IrERcxkKG [(510 - 484)];
    int RNenVvk [(805 - 779)];
    int OxRYbJHB;
    int f4bUTJ [(638 - 612)];
    char rbR18GAPE6;
    char wHneKMESLju [(1841 - 841)];
    int LnGU2sf;
    int HOvQAc [(623 - 597)];
    LnGU2sf = 0;
    scanf ("%s %s", &efIEq9, &JhIbYAd);
    ISxfPyUM1OnK = strlen (JhIbYAd);
    OxRYbJHB = strlen (efIEq9);
    {
        XY1yia = (946 - 946);
        while (OxRYbJHB > XY1yia) {
            oN0M8ol6OeK[XY1yia] = efIEq9[XY1yia];
            XY1yia = XY1yia +(623 - 622);
        }
    }
    {
        XY1yia = (874 - 874);
        for (; ISxfPyUM1OnK > XY1yia;) {
            wHneKMESLju[XY1yia] = JhIbYAd[XY1yia];
            XY1yia = XY1yia +(333 - 332);
        }
    }
    {
        XY1yia = (608 - 608);
        for (; (239 - 213) > XY1yia;) {
            f4bUTJ[XY1yia] = (446 - 446);
            RNenVvk[XY1yia] = (753 - 753);
            u64IrERcxkKG[XY1yia] = (230 - 230);
            HOvQAc[XY1yia] = (473 - 473);
            XY1yia = XY1yia +(112 - 111);
        }
    }
    {
        XY1yia = (988 - 988);
        for (; XY1yia < OxRYbJHB;) {
            if (oN0M8ol6OeK[XY1yia] >= 'a' && 'z' >= oN0M8ol6OeK[XY1yia])
                f4bUTJ[oN0M8ol6OeK[XY1yia] - 'a']++;
            else if ('A' <= oN0M8ol6OeK[XY1yia] && 'Z' >= oN0M8ol6OeK[XY1yia])
                RNenVvk[oN0M8ol6OeK[XY1yia] - 'A']++;
            XY1yia = XY1yia +(493 - 492);
        }
    }
    {
        XY1yia = (297 - 297);
        while (XY1yia < ISxfPyUM1OnK) {
            if ('a' <= JhIbYAd[XY1yia] && JhIbYAd[XY1yia] <= 'z')
                u64IrERcxkKG[JhIbYAd[XY1yia] - 'a']++;
            else if (JhIbYAd[XY1yia] >= 'A' && JhIbYAd[XY1yia] <= 'Z')
                HOvQAc[JhIbYAd[XY1yia] - 'A']++;
            XY1yia = XY1yia +(585 - 584);
        }
    }
    {
        XY1yia = 0;
        while (XY1yia < 26) {
            if (f4bUTJ[XY1yia] == u64IrERcxkKG[XY1yia] && RNenVvk[XY1yia] == HOvQAc[XY1yia])
                LnGU2sf = LnGU2sf +(914 - 913);
            else
                LnGU2sf = LnGU2sf -(599 - 598);
            XY1yia = XY1yia +(904 - 903);
        }
    }
    if (LnGU2sf == 26)
        ;
    else
        ;
}

