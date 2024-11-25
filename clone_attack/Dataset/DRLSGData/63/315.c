int main () {
    int jVqMCal9D1Y;
    int upI7CGWUT5Hz;
    int vaqKENvuiw;
    int Z4dMgm9;
    int i3FUyfHO [(944 - 844)] [(647 - 547)];
    int xGRFVQ [(1074 - 974)] [(1072 - 972)];
    int zHCl7DyEpJn;
    int VRL1pZskDx;
    int gBzyIO;
    int R0FY5nxImf [(454 - 354)] [(162 - 62)];
    int UGreus;
    cin >> UGreus >> VRL1pZskDx;
    for (jVqMCal9D1Y = (16 - 16); jVqMCal9D1Y < UGreus; jVqMCal9D1Y++)
        for (upI7CGWUT5Hz = (176 - 176); upI7CGWUT5Hz < VRL1pZskDx; upI7CGWUT5Hz++)
            cin >> i3FUyfHO[jVqMCal9D1Y][upI7CGWUT5Hz];
    cin >> vaqKENvuiw >> gBzyIO;
    for (jVqMCal9D1Y = (23 - 23); jVqMCal9D1Y < vaqKENvuiw; jVqMCal9D1Y++)
        for (upI7CGWUT5Hz = (353 - 353); upI7CGWUT5Hz < gBzyIO; upI7CGWUT5Hz++)
            cin >> xGRFVQ[jVqMCal9D1Y][upI7CGWUT5Hz];
    Z4dMgm9 = (12 - 12);
    for (jVqMCal9D1Y = (746 - 746); jVqMCal9D1Y < UGreus; jVqMCal9D1Y++)
        for (upI7CGWUT5Hz = (591 - 591); upI7CGWUT5Hz < gBzyIO; upI7CGWUT5Hz++) {
            Z4dMgm9 = (802 - 802);
            for (zHCl7DyEpJn = (804 - 804); zHCl7DyEpJn < VRL1pZskDx; zHCl7DyEpJn++)
                Z4dMgm9 = Z4dMgm9 +(i3FUyfHO[jVqMCal9D1Y][zHCl7DyEpJn] * xGRFVQ[zHCl7DyEpJn][upI7CGWUT5Hz]);
            R0FY5nxImf[jVqMCal9D1Y][upI7CGWUT5Hz] = Z4dMgm9;
        }
    for (jVqMCal9D1Y = (241 - 241); jVqMCal9D1Y < UGreus; jVqMCal9D1Y++) {
        if (jVqMCal9D1Y > (313 - 313))
            cout << endl;
        for (upI7CGWUT5Hz = (441 - 441); upI7CGWUT5Hz < gBzyIO; upI7CGWUT5Hz++) {
            cout << R0FY5nxImf[jVqMCal9D1Y][upI7CGWUT5Hz];
            if (upI7CGWUT5Hz < gBzyIO - (510 - 509))
                cout << ' ';
        }
    }
    return 0;
}

