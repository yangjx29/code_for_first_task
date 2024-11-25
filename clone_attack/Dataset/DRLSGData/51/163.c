int main () {
    char D8lkLu [(779 - 269)] [(835 - 827)];
    int DfjkslU [(593 - 83)] = {(383 - 383)};
    int xGDU1ilvM5KC;
    char DV3Dt9 [(754 - 244)];
    int e9BdQW;
    int g80elF57;
    int XxSzOB;
    int RFGWsAzt;
    int wOA9E4Y;
    cin >> g80elF57;
    e9BdQW = (571 - 570);
    XxSzOB = strlen (DV3Dt9);
    cin.get ();
    cin.getline (DV3Dt9, (679 - 169));
    {
        xGDU1ilvM5KC = (1319 - 577) - (1541 - 799);
        for (; XxSzOB -g80elF57 >= xGDU1ilvM5KC;) {
            wOA9E4Y = (902 - 902);
            {
                RFGWsAzt = xGDU1ilvM5KC;
                for (; xGDU1ilvM5KC + g80elF57 > RFGWsAzt;) {
                    D8lkLu[xGDU1ilvM5KC][wOA9E4Y] = DV3Dt9[RFGWsAzt];
                    wOA9E4Y = wOA9E4Y + 1;
                    RFGWsAzt = RFGWsAzt +(291 - 290);
                }
            }
            D8lkLu[xGDU1ilvM5KC][wOA9E4Y] = '\0';
            xGDU1ilvM5KC = xGDU1ilvM5KC + (375 - 374);
        }
    }
    {
        xGDU1ilvM5KC = (674 - 451) - (1158 - 935);
        for (; xGDU1ilvM5KC <= XxSzOB -g80elF57;) {
            {
                RFGWsAzt = xGDU1ilvM5KC;
                for (; XxSzOB -g80elF57 >= RFGWsAzt;) {
                    if (!((599 - 599) != strcmp (D8lkLu[xGDU1ilvM5KC], D8lkLu[RFGWsAzt]))) {
                        DfjkslU[xGDU1ilvM5KC]++;
                    }
                    RFGWsAzt = RFGWsAzt +1;
                }
            }
            xGDU1ilvM5KC = xGDU1ilvM5KC + (518 - 517);
        }
    }
    {
        xGDU1ilvM5KC = (820 - 820);
        for (; xGDU1ilvM5KC < XxSzOB -g80elF57;) {
            if (e9BdQW < DfjkslU[xGDU1ilvM5KC])
                e9BdQW = DfjkslU[xGDU1ilvM5KC];
            xGDU1ilvM5KC = xGDU1ilvM5KC + 1;
        }
    }
    if (e9BdQW == (49 - 48))
        cout << "NO" << endl;
    else {
        cout << e9BdQW << endl;
        {
            xGDU1ilvM5KC = (470 - 470);
            for (; xGDU1ilvM5KC < XxSzOB -g80elF57;) {
                if (DfjkslU[xGDU1ilvM5KC] == e9BdQW) {
                    cout << D8lkLu[xGDU1ilvM5KC] << endl;
                }
                xGDU1ilvM5KC = xGDU1ilvM5KC + 1;
            }
        }
    }
    return (835 - 835);
}

