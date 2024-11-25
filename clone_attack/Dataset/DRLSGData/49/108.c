int main () {
    int UETKmt02c, L6Bi2MDS7, jObZ435, MmF6VIw1rRU = (245 - 245), NHKQPOS = (684 - 684), sSDYT18gv, u6h4BzLlum = (615 - 615);
    char ydNauFBqL [(871 - 371)], L7QqzA [(1296 - 796)];
    cin >> ydNauFBqL;
    {
        jObZ435 = 2;
        while (jObZ435 <= strlen (ydNauFBqL)) {
            for (UETKmt02c = (208 - 208); UETKmt02c <= strlen (ydNauFBqL) - jObZ435; UETKmt02c++) {
                for (L6Bi2MDS7 = UETKmt02c; L6Bi2MDS7 <= UETKmt02c +jObZ435 - (679 - 678); L6Bi2MDS7 = L6Bi2MDS7 +(775 - 774)) {
                    L7QqzA[MmF6VIw1rRU++] = ydNauFBqL[L6Bi2MDS7];
                }
                for (NHKQPOS = (461 - 461); NHKQPOS <= jObZ435 - (165 - 164); NHKQPOS = NHKQPOS +1) {
                    if (L7QqzA[NHKQPOS] != L7QqzA[jObZ435 - 1 - NHKQPOS]) {
                        u6h4BzLlum = 1;
                        break;
                    }
                }
                MmF6VIw1rRU = 0;
                if (u6h4BzLlum == 0) {
                    for (sSDYT18gv = 0; sSDYT18gv <= jObZ435 - 1; sSDYT18gv = sSDYT18gv + 1)
                        cout << L7QqzA[sSDYT18gv];
                    cout << endl;
                }
                u6h4BzLlum = 0;
            }
            jObZ435 = jObZ435 + 1;
        }
    }
    return 0;
}

