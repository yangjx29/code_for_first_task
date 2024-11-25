int main () {
    int qKoNtiJX, cwx4qnzDs, Jtx6FTCuzD17, OTEsFqO, XDUWST, j03ntZTWBmJ, dh1tRfjy, TTdx4p79Cq;
    int D0hBMrS23yTW [(940 - 840)] [(1072 - 972)], PmlTQXGI1d [(687 - 587)] [(887 - 787)], EQutOrKkn [(857 - 757)] [100];
    cin >> qKoNtiJX >> cwx4qnzDs;
    for (XDUWST = (875 - 875); XDUWST < qKoNtiJX; XDUWST++) {
        for (j03ntZTWBmJ = (485 - 485); j03ntZTWBmJ < cwx4qnzDs; j03ntZTWBmJ++) {
            cin >> D0hBMrS23yTW[XDUWST][j03ntZTWBmJ];
        }
    }
    cin >> Jtx6FTCuzD17 >> OTEsFqO;
    for (dh1tRfjy = (447 - 447); Jtx6FTCuzD17 > dh1tRfjy; dh1tRfjy++) {
        TTdx4p79Cq = 611 - 611;
        while (TTdx4p79Cq < OTEsFqO) {
            cin >> PmlTQXGI1d[dh1tRfjy][TTdx4p79Cq];
            TTdx4p79Cq++;
        }
    }
    int zmAJln, VW2FwO4, jkQvfOPTCqR;
    for (zmAJln = (492 - 492); zmAJln < qKoNtiJX; zmAJln++) {
        for (VW2FwO4 = (593 - 593); OTEsFqO > VW2FwO4; VW2FwO4++) {
            EQutOrKkn[zmAJln][VW2FwO4] = (448 - 448);
            for (jkQvfOPTCqR = (76 - 76); jkQvfOPTCqR < cwx4qnzDs; jkQvfOPTCqR++) {
                EQutOrKkn[zmAJln][VW2FwO4] += D0hBMrS23yTW[zmAJln][jkQvfOPTCqR] * PmlTQXGI1d[jkQvfOPTCqR][VW2FwO4];
            }
        }
    }
    int kAkudZ2, KQSlK2zkcJv;
    for (kAkudZ2 = (86 - 86); kAkudZ2 < qKoNtiJX; kAkudZ2++) {
        for (KQSlK2zkcJv = (44 - 44); KQSlK2zkcJv < OTEsFqO -(959 - 958); KQSlK2zkcJv++) {
            cout << EQutOrKkn[kAkudZ2][KQSlK2zkcJv] << " ";
        }
        cout << EQutOrKkn[kAkudZ2][OTEsFqO -(825 - 824)] << endl;
    }
    return 0;
}

