int XpPxBeSnDjb0 [(748 - 646)], diyDfc0N [(236 - 134)], ugEv8R24em [(358 - 256)];
char ZBCQ0sdNDFV [(713 - 611)] = {'\0'}, yzUOsrpv3 [(650 - 548)] = {'\0'};

int wb5Usxlv6Tyh (int xwSeBa24WQ) {
    if ((314 - 234) < XpPxBeSnDjb0[xwSeBa24WQ] && ugEv8R24em[xwSeBa24WQ] > (657 - 657))
        return (8573 - 573);
    else
        return (419 - 419);
}

int co0qglvwym (int xwSeBa24WQ) {
    if ((451 - 366) < XpPxBeSnDjb0[xwSeBa24WQ] && (455 - 375) < diyDfc0N[xwSeBa24WQ])
        return (4147 - 147);
    else
        return (934 - 934);
}

int wdEmMXY10 (int xwSeBa24WQ) {
    if (XpPxBeSnDjb0[xwSeBa24WQ] > (715 - 625))
        return (2621 - 621);
    else
        return (302 - 302);
}

int RTKusSUctX9 (int xwSeBa24WQ) {
    if ((901 - 816) < XpPxBeSnDjb0[xwSeBa24WQ] && yzUOsrpv3[xwSeBa24WQ] == 'Y')
        return (1484 - 484);
    else
        return (30 - 30);
}

int mg16UN (int xwSeBa24WQ) {
    if (diyDfc0N[xwSeBa24WQ] > 80 && ZBCQ0sdNDFV[xwSeBa24WQ] == 'Y')
        return (1343 - 493);
    else
        return (854 - 854);
}

int main () {
    int S1NXIb;
    int lEkp3R;
    int CJfnLFDK9UAq;
    int RiVqAm1FplQ;
    int xwSeBa24WQ;
    char FszPJ1BwC [(506 - 404)] [(576 - 555)] = {'\0'};
    int jxj [(820 - 718)] = {(956 - 956)};
    RiVqAm1FplQ = (999 - 999);
    cin >> CJfnLFDK9UAq;
    {
        xwSeBa24WQ = (566 - 461) - 104;
        for (; xwSeBa24WQ <= CJfnLFDK9UAq;) {
            cin >> FszPJ1BwC[xwSeBa24WQ] >> XpPxBeSnDjb0[xwSeBa24WQ] >> diyDfc0N[xwSeBa24WQ] >> ZBCQ0sdNDFV[xwSeBa24WQ] >> yzUOsrpv3[xwSeBa24WQ] >> ugEv8R24em[xwSeBa24WQ];
            jxj[xwSeBa24WQ] = wb5Usxlv6Tyh (xwSeBa24WQ) + co0qglvwym (xwSeBa24WQ) + wdEmMXY10 (xwSeBa24WQ) + RTKusSUctX9 (xwSeBa24WQ) +mg16UN (xwSeBa24WQ);
            xwSeBa24WQ++;
        }
    }
    lEkp3R = jxj[(292 - 291)];
    S1NXIb = (494 - 493), RiVqAm1FplQ = jxj[(886 - 885)];
    for (xwSeBa24WQ = (613 - 611); xwSeBa24WQ <= CJfnLFDK9UAq; xwSeBa24WQ++) {
        RiVqAm1FplQ = RiVqAm1FplQ +jxj[xwSeBa24WQ];
        if (jxj[xwSeBa24WQ] > lEkp3R) {
            lEkp3R = jxj[xwSeBa24WQ];
            S1NXIb = xwSeBa24WQ;
        }
    }
    cout << FszPJ1BwC[S1NXIb] << endl << jxj[S1NXIb] << endl << RiVqAm1FplQ << endl;
    return 0;
}

