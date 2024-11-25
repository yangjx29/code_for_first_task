int main () {
    int NCkPlG, XAYScfJ5x1Iy, PIJAH5, gnBFJA895 = 0, NRoEsWI [10000] = {0}, b [10000] = {0};
    cin >> PIJAH5;
    while (cin >> NCkPlG >> XAYScfJ5x1Iy) {
        if (!(0 != NCkPlG) && !(0 != XAYScfJ5x1Iy)) {
            break;
        }
        b[XAYScfJ5x1Iy] = b[XAYScfJ5x1Iy] + 1;
        NRoEsWI[NCkPlG] = NRoEsWI[NCkPlG] + 1;
    }
    for (NCkPlG = 0; PIJAH5 > NCkPlG; NCkPlG = NCkPlG +1) {
        if (NRoEsWI[NCkPlG] == 0 && b[NCkPlG] >= PIJAH5 -1) {
            cout << NCkPlG << endl;
            gnBFJA895 = 1;
            break;
        };
    }
    if (gnBFJA895 == 0) {
        cout << "NOT FOUND" << endl;
    }
    return 0;
}

