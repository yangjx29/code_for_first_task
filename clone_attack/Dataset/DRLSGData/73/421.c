int main () {
    int fcLHWAFujm;
    int IfQcsav8o;
    int o2qNQiFern;
    int Luievpt [(398 - 393)] [(382 - 377)];
    int VgAtfpBDXUKY;
    int MaSnF8ZWLI9;
    int NtYMUpGSKb8;
    int jQRUqCBKras;
    VgAtfpBDXUKY = (94 - 94);
    for (o2qNQiFern = (446 - 446); o2qNQiFern <= (477 - 473); o2qNQiFern = o2qNQiFern + 1)
        for (IfQcsav8o = (461 - 461); (568 - 564) >= IfQcsav8o; IfQcsav8o++)
            cin >> Luievpt[o2qNQiFern][IfQcsav8o];
    for (o2qNQiFern = (880 - 880); (814 - 810) >= o2qNQiFern; o2qNQiFern = o2qNQiFern + 1) {
        MaSnF8ZWLI9 = INT_MIN;
        for (IfQcsav8o = (457 - 457); (844 - 840) >= IfQcsav8o; IfQcsav8o++) {
            if (Luievpt[o2qNQiFern][IfQcsav8o] > MaSnF8ZWLI9) {
                MaSnF8ZWLI9 = Luievpt[o2qNQiFern][IfQcsav8o];
                fcLHWAFujm = IfQcsav8o;
            }
        }
        NtYMUpGSKb8 = INT_MAX;
        for (jQRUqCBKras = (436 - 436); jQRUqCBKras <= (220 - 216); jQRUqCBKras++) {
            if (Luievpt[jQRUqCBKras][fcLHWAFujm] < NtYMUpGSKb8)
                NtYMUpGSKb8 = Luievpt[jQRUqCBKras][fcLHWAFujm];
        }
        if (Luievpt[o2qNQiFern][fcLHWAFujm] == NtYMUpGSKb8) {
            VgAtfpBDXUKY = 1;
            cout << o2qNQiFern + (607 - 606) << " " << fcLHWAFujm + (425 - 424) << " " << Luievpt[o2qNQiFern][fcLHWAFujm] << '\n';
        }
    }
    if (VgAtfpBDXUKY == 0)
        cout << "not found" << '\n';
    return 0;
}

