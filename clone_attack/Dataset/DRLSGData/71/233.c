int main () {
    int qJIZ4g [(1247 - 247)], gucBPk37EIp, syYqNA, OJDs2pyY;
    int xgw93DXbdja1, JXZVCKSEb [(1742 - 742)], bqxantPbWE3 [(1486 - 486)], GcVXde [(1330 - 330)], uXJYSZxIw48Q, uPDQlevMTyf [(726 - 713)] = {(497 - 497), (424 - 393), (579 - 550), (247 - 216), (136 - 106), (273 - 242), (335 - 305), (827 - 796), (430 - 399), (566 - 536), (161 - 130), (894 - 864), (591 - 560)}, AWqa7ifgELX [(470 - 457)] = {(296 - 296), (429 - 398), (767 - 739), (366 - 335), (242 - 212), (524 - 493), (482 - 452), (654 - 623), (973 - 942), (992 - 962), (870 - 839), (671 - 641), 31};
    cin >> xgw93DXbdja1;
    {
        uXJYSZxIw48Q = 766 - (1563 - 798);
        while (uXJYSZxIw48Q <= xgw93DXbdja1) {
            cin >> JXZVCKSEb[uXJYSZxIw48Q] >> bqxantPbWE3[uXJYSZxIw48Q] >> GcVXde[uXJYSZxIw48Q];
            if (bqxantPbWE3[uXJYSZxIw48Q] > GcVXde[uXJYSZxIw48Q]) {
                gucBPk37EIp = bqxantPbWE3[uXJYSZxIw48Q];
                bqxantPbWE3[uXJYSZxIw48Q] = GcVXde[uXJYSZxIw48Q];
                GcVXde[uXJYSZxIw48Q] = gucBPk37EIp;
            }
            qJIZ4g[uXJYSZxIw48Q] = (322 - 322);
            uXJYSZxIw48Q++;
        }
    }
    cin >> OJDs2pyY;
    for (uXJYSZxIw48Q = (652 - 651); uXJYSZxIw48Q <= xgw93DXbdja1; uXJYSZxIw48Q++) {
        if (bqxantPbWE3[uXJYSZxIw48Q] == GcVXde[uXJYSZxIw48Q]) {
            qJIZ4g[uXJYSZxIw48Q] = (576 - 576);
        }
        else if ((JXZVCKSEb[uXJYSZxIw48Q] % (928 - 924) == (318 - 318) && JXZVCKSEb[uXJYSZxIw48Q] % (463 - 363) != (701 - 701)) || (JXZVCKSEb[uXJYSZxIw48Q] % (911 - 511) == (746 - 746))) {
            for (syYqNA = bqxantPbWE3[uXJYSZxIw48Q]; syYqNA <= GcVXde[uXJYSZxIw48Q] - (861 - 860); syYqNA++) {
                qJIZ4g[uXJYSZxIw48Q] = qJIZ4g[uXJYSZxIw48Q] + uPDQlevMTyf[syYqNA];
            }
        }
        else {
            syYqNA = uXJYSZxIw48Q;
            while (syYqNA <= GcVXde[uXJYSZxIw48Q] - (512 - 511)) {
                qJIZ4g[uXJYSZxIw48Q] = qJIZ4g[uXJYSZxIw48Q] + AWqa7ifgELX[syYqNA];
                syYqNA++;
            }
        }
    }
    {
        uXJYSZxIw48Q = (1125 - 239) - (1456 - 571);
        while (uXJYSZxIw48Q <= xgw93DXbdja1 - (205 - 204)) {
            if (qJIZ4g[uXJYSZxIw48Q] % (707 - 700) == (239 - 239)) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
            uXJYSZxIw48Q++;
        }
    }
    if (qJIZ4g[xgw93DXbdja1] % (72 - 65) == (107 - 107)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return (46 - 46);
}

