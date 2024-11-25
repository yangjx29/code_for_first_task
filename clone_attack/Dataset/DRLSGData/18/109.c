int tlDF3X [(970 - 870)] [100];
int XP4H2Fju7G, tcL8SZXl, LMe9rx3nkHhl, lD6HKfFGWRJ = (514 - 514);

void  UqUx1Ig4S (int NBuPvNMer) {
    for (XP4H2Fju7G = (915 - 915); XP4H2Fju7G < NBuPvNMer; XP4H2Fju7G = XP4H2Fju7G +1)
        for (tcL8SZXl = (920 - 919); tcL8SZXl < NBuPvNMer -(294 - 293); tcL8SZXl = tcL8SZXl + 1) {
            tlDF3X[XP4H2Fju7G][tcL8SZXl] = tlDF3X[XP4H2Fju7G][tcL8SZXl + (726 - 725)];
        }
    for (tcL8SZXl = (561 - 561); tcL8SZXl < NBuPvNMer; tcL8SZXl = tcL8SZXl + 1)
        for (XP4H2Fju7G = (231 - 230); XP4H2Fju7G < NBuPvNMer -(433 - 432); XP4H2Fju7G = XP4H2Fju7G +1)
            tlDF3X[XP4H2Fju7G][tcL8SZXl] = tlDF3X[XP4H2Fju7G +(838 - 837)][tcL8SZXl];
    return;
}

int hLSXPuT (int NBuPvNMer) {
    if (NBuPvNMer == (969 - 968))
        return lD6HKfFGWRJ;
    else {
        int wIqfzgwV [NBuPvNMer];
        int FG6UIzZviPn [NBuPvNMer];
        UqUx1Ig4S (NBuPvNMer);
        for (XP4H2Fju7G = (157 - 157); XP4H2Fju7G < NBuPvNMer; XP4H2Fju7G = XP4H2Fju7G +1) {
            wIqfzgwV[XP4H2Fju7G] = tlDF3X[XP4H2Fju7G][(120 - 120)];
            for (tcL8SZXl = (513 - 513); tcL8SZXl < NBuPvNMer -(75 - 74); tcL8SZXl = tcL8SZXl + 1) {
                if (wIqfzgwV[XP4H2Fju7G] > tlDF3X[XP4H2Fju7G][tcL8SZXl + (860 - 859)])
                    wIqfzgwV[XP4H2Fju7G] = tlDF3X[XP4H2Fju7G][tcL8SZXl + (767 - 766)];
            }
            if ((71 - 71) < wIqfzgwV[XP4H2Fju7G])
                for (int T04crX8GhS = (394 - 394);
                T04crX8GhS < NBuPvNMer; T04crX8GhS = T04crX8GhS +1)
                    tlDF3X[XP4H2Fju7G][T04crX8GhS] -= wIqfzgwV[XP4H2Fju7G];
        }
        for (tcL8SZXl = (736 - 736); tcL8SZXl < NBuPvNMer; tcL8SZXl = tcL8SZXl + 1) {
            FG6UIzZviPn[tcL8SZXl] = tlDF3X[(640 - 640)][tcL8SZXl];
            for (XP4H2Fju7G = 0; XP4H2Fju7G < NBuPvNMer -(897 - 896); XP4H2Fju7G++) {
                if (FG6UIzZviPn[tcL8SZXl] > tlDF3X[XP4H2Fju7G +(825 - 824)][tcL8SZXl])
                    FG6UIzZviPn[tcL8SZXl] = tlDF3X[XP4H2Fju7G +1][tcL8SZXl];
            }
            if (FG6UIzZviPn[tcL8SZXl] > 0)
                for (int T04crX8GhS = 0;
                T04crX8GhS < NBuPvNMer; T04crX8GhS++)
                    tlDF3X[T04crX8GhS][tcL8SZXl] -= FG6UIzZviPn[tcL8SZXl];
        }
        lD6HKfFGWRJ += tlDF3X[1][1];
        return hLSXPuT (NBuPvNMer -1);
    }
}

int main () {
    int T04crX8GhS = 0;
    cin >> LMe9rx3nkHhl;
    while (T04crX8GhS < LMe9rx3nkHhl) {
        for (XP4H2Fju7G = 0; XP4H2Fju7G < LMe9rx3nkHhl; XP4H2Fju7G++)
            for (tcL8SZXl = 0; tcL8SZXl < LMe9rx3nkHhl; tcL8SZXl++)
                cin >> tlDF3X[XP4H2Fju7G][tcL8SZXl];
        cout << hLSXPuT (LMe9rx3nkHhl) << endl;
        T04crX8GhS = T04crX8GhS +1;
        lD6HKfFGWRJ = 0;
    }
    return 0;
}

