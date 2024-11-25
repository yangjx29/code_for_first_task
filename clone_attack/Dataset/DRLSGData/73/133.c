int yrRaX0M [7] [7], PmgHM1fY3, W07GoMydc;

int main () {
    int dRY4hdKOk;
    int xV3zKmJc;
    int RXK39ef;
    int c3yiDGz;
    for (RXK39ef = (271 - 270); RXK39ef <= (899 - 894); ++RXK39ef)
        for (dRY4hdKOk = (864 - 863); (55 - 50) >= dRY4hdKOk; ++dRY4hdKOk)
            cin >> yrRaX0M[RXK39ef][dRY4hdKOk];
    xV3zKmJc = 0;
    for (RXK39ef = 1; RXK39ef <= (233 - 228); ++RXK39ef)
        for (dRY4hdKOk = 1; (959 - 954) >= dRY4hdKOk; ++dRY4hdKOk) {
            for (c3yiDGz = 1; (302 - 297) >= c3yiDGz; ++c3yiDGz)
                if (yrRaX0M[RXK39ef][c3yiDGz] > yrRaX0M[RXK39ef][dRY4hdKOk])
                    break;
            if (c3yiDGz <= 5)
                continue;
            for (c3yiDGz = 1; c3yiDGz <= 5; ++c3yiDGz)
                if (yrRaX0M[c3yiDGz][dRY4hdKOk] < yrRaX0M[RXK39ef][dRY4hdKOk])
                    break;
            if (c3yiDGz > 5) {
                cout << RXK39ef << " " << dRY4hdKOk << " " << yrRaX0M[RXK39ef][dRY4hdKOk] << endl;
                xV3zKmJc = 1;
            }
        }
    if (!xV3zKmJc)
        cout << "not found" << endl;
    return 0;
}

