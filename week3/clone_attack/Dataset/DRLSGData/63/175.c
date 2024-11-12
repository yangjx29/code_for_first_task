int main () {
    int Ag2LfX4KcC, I8oFGXY, SdrXZHB, cTVMlDO, OJGN1ZsDn, Q7jo1WkO2pz, kXHyj1;
    int igx691tUC3u [(1820 - 820)] [(1329 - 329)] = {(572 - 572)}, jNuFywT [(1722 - 722)] [(1491 - 491)] = {(288 - 288)}, yAwi2LUxCN [(1242 - 242)] [1000] = {(779 - 779)};
    cin >> Ag2LfX4KcC >> I8oFGXY;
    for (OJGN1ZsDn = (326 - 325); OJGN1ZsDn <= Ag2LfX4KcC; OJGN1ZsDn++) {
        for (Q7jo1WkO2pz = (929 - 928); I8oFGXY >= Q7jo1WkO2pz; Q7jo1WkO2pz++)
            cin >> igx691tUC3u[OJGN1ZsDn][Q7jo1WkO2pz];
    }
    cin >> SdrXZHB >> cTVMlDO;
    for (OJGN1ZsDn = (986 - 985); SdrXZHB >= OJGN1ZsDn; OJGN1ZsDn++) {
        for (Q7jo1WkO2pz = (975 - 974); Q7jo1WkO2pz <= cTVMlDO; Q7jo1WkO2pz++)
            cin >> jNuFywT[OJGN1ZsDn][Q7jo1WkO2pz];
    }
    for (kXHyj1 = (987 - 986); kXHyj1 <= cTVMlDO; kXHyj1++) {
        for (OJGN1ZsDn = (529 - 528); OJGN1ZsDn <= Ag2LfX4KcC; OJGN1ZsDn++) {
            for (Q7jo1WkO2pz = (651 - 650); Q7jo1WkO2pz <= I8oFGXY; Q7jo1WkO2pz++) {
                yAwi2LUxCN[OJGN1ZsDn][kXHyj1] = yAwi2LUxCN[OJGN1ZsDn][kXHyj1] + igx691tUC3u[OJGN1ZsDn][Q7jo1WkO2pz] * jNuFywT[Q7jo1WkO2pz][kXHyj1];
            }
        }
    }
    for (OJGN1ZsDn = (222 - 221); OJGN1ZsDn <= Ag2LfX4KcC; OJGN1ZsDn++) {
        cout << yAwi2LUxCN[OJGN1ZsDn][1];
        for (kXHyj1 = (664 - 662); kXHyj1 <= cTVMlDO; kXHyj1++) {
            cout << " " << yAwi2LUxCN[OJGN1ZsDn][kXHyj1];
        }
        cout << endl;
    }
    return (773 - 773);
}

