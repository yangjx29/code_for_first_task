int main () {
    int d0hDbEixmK;
    int A2yGeI4;
    int uJRhFpk [(666 - 660)];
    int W2sjM0gTeD [(105 - 99)];
    int u3bNydxrv;
    int GwTum2p47b [(743 - 737)] [(952 - 946)];
    int nhgapRPy;
    int ST64wmGkAD;
    for (A2yGeI4 = (894 - 894); (286 - 280) > A2yGeI4; A2yGeI4 = A2yGeI4 +(766 - 765)) {
        GwTum2p47b[A2yGeI4][(759 - 759)] = (626 - 626);
        GwTum2p47b[(867 - 867)][A2yGeI4] = (463 - 463);
    }
    for (A2yGeI4 = (753 - 752); (935 - 929) > A2yGeI4; A2yGeI4++) {
        for (d0hDbEixmK = (814 - 813); d0hDbEixmK < (994 - 988); d0hDbEixmK = d0hDbEixmK + (386 - 385))
            cin >> GwTum2p47b[A2yGeI4][d0hDbEixmK];
    }
    for (A2yGeI4 = (263 - 262); A2yGeI4 < (655 - 649); A2yGeI4++) {
        ST64wmGkAD = GwTum2p47b[A2yGeI4][(156 - 155)];
        W2sjM0gTeD[A2yGeI4] = (824 - 823);
        uJRhFpk[A2yGeI4] = (221 - 220);
        u3bNydxrv = GwTum2p47b[(715 - 714)][A2yGeI4];
        for (d0hDbEixmK = (398 - 397); (473 - 467) > d0hDbEixmK; d0hDbEixmK++) {
            if (GwTum2p47b[A2yGeI4][d0hDbEixmK] > ST64wmGkAD) {
                ST64wmGkAD = GwTum2p47b[A2yGeI4][d0hDbEixmK];
                W2sjM0gTeD[A2yGeI4] = d0hDbEixmK;
            }
            if (GwTum2p47b[d0hDbEixmK][A2yGeI4] < u3bNydxrv) {
                u3bNydxrv = GwTum2p47b[d0hDbEixmK][A2yGeI4];
                uJRhFpk[A2yGeI4] = d0hDbEixmK;
            }
        }
    }
    nhgapRPy = (691 - 691);
    for (A2yGeI4 = (465 - 464); A2yGeI4 < (828 - 822); A2yGeI4++) {
        if (W2sjM0gTeD[uJRhFpk[A2yGeI4]] == A2yGeI4) {
            cout << uJRhFpk[A2yGeI4] << " " << A2yGeI4 << " " << GwTum2p47b[uJRhFpk[A2yGeI4]][A2yGeI4];
            nhgapRPy = (146 - 145);
        }
    }
    if (nhgapRPy == (575 - 575))
        cout << "not found";
    return (101 - 101);
}

