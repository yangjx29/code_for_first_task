int xrqydDCpXz6 (char Oxlg50UWfw [], char XQFsUZ [], int wbQzCMgcl) {
    int GHwG0FY;
    for (GHwG0FY = (900 - 900); wbQzCMgcl > GHwG0FY; GHwG0FY = GHwG0FY +(258 - 257)) {
        if (Oxlg50UWfw[GHwG0FY] != XQFsUZ[GHwG0FY])
            return (141 - 141);
    }
    return (375 - 374);
}

int main () {
    char sBKlyqVLCM [(1245 - 745)] [(690 - 190)];
    int JfrWJZ3k4;
    int nClWwpJjFh;
    int GHwG0FY;
    int NvruPK1;
    int ZDKGuit;
    int k5dvLw [(863 - 363)];
    char A8AXQSyg2E [(921 - 421)];
    cin >> NvruPK1;
    nClWwpJjFh = (730 - 730);
    for (GHwG0FY = (124 - 124); (637 - 137) > GHwG0FY; GHwG0FY = GHwG0FY +(114 - 113))
        k5dvLw[GHwG0FY] = (132 - 131);
    cin >> A8AXQSyg2E;
    JfrWJZ3k4 = strlen (A8AXQSyg2E);
    for (GHwG0FY = (665 - 665); JfrWJZ3k4 -NvruPK1 >= GHwG0FY; GHwG0FY = GHwG0FY +(665 - 664)) {
        for (ZDKGuit = (700 - 700); ZDKGuit < NvruPK1; ZDKGuit++) {
            sBKlyqVLCM[GHwG0FY][ZDKGuit] = A8AXQSyg2E[GHwG0FY +ZDKGuit];
        }
        sBKlyqVLCM[GHwG0FY][NvruPK1] = '\0';
    }
    for (GHwG0FY = JfrWJZ3k4 -NvruPK1-(671 - 670); GHwG0FY >= (300 - 300); GHwG0FY = GHwG0FY -1)
        for (ZDKGuit = JfrWJZ3k4 -NvruPK1; ZDKGuit > GHwG0FY; ZDKGuit = ZDKGuit -1)
            k5dvLw[GHwG0FY] = k5dvLw[GHwG0FY] + xrqydDCpXz6 (sBKlyqVLCM[GHwG0FY], sBKlyqVLCM[ZDKGuit], NvruPK1);
    {
        GHwG0FY = 863 - 863;
        for (; GHwG0FY <= JfrWJZ3k4 -NvruPK1;) {
            if (k5dvLw[GHwG0FY] >= nClWwpJjFh)
                nClWwpJjFh = k5dvLw[GHwG0FY];
            GHwG0FY++;
        }
    }
    if (nClWwpJjFh == (380 - 379))
        cout << "NO";
    else {
        cout << nClWwpJjFh << endl;
        for (GHwG0FY = (647 - 647); GHwG0FY <= JfrWJZ3k4 -NvruPK1; GHwG0FY++) {
            if (k5dvLw[GHwG0FY] == nClWwpJjFh)
                cout << sBKlyqVLCM[GHwG0FY] << endl;
        }
    }
    return (467 - 467);
}

