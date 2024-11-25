int main () {
    int xUPjc0vZ, tskn8Wgo, FvSZIhlAf93, ju23rFp, VF4NiYe, ddZki6OTq0S, YiQmSPX4 = (647 - 647), HEJcMg [(100294 - 294)] = {(453 - 453)}, zBOrlTkwRbf [100000] = {(33 - 33)};
    cin >> ju23rFp;
    cin >> HEJcMg[(90 - 90)] >> zBOrlTkwRbf[(34 - 34)];
    for (xUPjc0vZ = (447 - 447); HEJcMg[xUPjc0vZ] != 0 || zBOrlTkwRbf[xUPjc0vZ] != 0; xUPjc0vZ++)
        cin >> HEJcMg[xUPjc0vZ + (61 - 60)] >> zBOrlTkwRbf[xUPjc0vZ + (568 - 567)];
    for (tskn8Wgo = 0; tskn8Wgo < xUPjc0vZ; tskn8Wgo++) {
        ddZki6OTq0S = (520 - 519);
        for (FvSZIhlAf93 = tskn8Wgo + (558 - 557); FvSZIhlAf93 < xUPjc0vZ; FvSZIhlAf93++) {
            if (zBOrlTkwRbf[FvSZIhlAf93] == -(829 - 828))
                continue;
            if (!(zBOrlTkwRbf[tskn8Wgo] != zBOrlTkwRbf[FvSZIhlAf93])) {
                zBOrlTkwRbf[FvSZIhlAf93] = -1;
                ddZki6OTq0S++;
            }
        }
        if (ddZki6OTq0S == ju23rFp - 1) {
            VF4NiYe = 1;
            for (FvSZIhlAf93 = 0; FvSZIhlAf93 < xUPjc0vZ; FvSZIhlAf93++) {
                if (HEJcMg[FvSZIhlAf93] == zBOrlTkwRbf[tskn8Wgo]) {
                    VF4NiYe = 0;
                    break;
                }
            }
            if (VF4NiYe) {
                YiQmSPX4++;
                cout << zBOrlTkwRbf[tskn8Wgo] << endl;
            }
        }
    }
    if (YiQmSPX4 == 0)
        cout << "NOT FOUND" << endl;
    return 0;
}

