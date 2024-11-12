int main () {
    int OzpGDdH;
    int WOXndozZ64;
    int krMsny2m;
    int yw3dG7rpF;
    cin >> OzpGDdH >> WOXndozZ64;
    int F1IBM4h [OzpGDdH] [WOXndozZ64], fsA3iy, BFVTRUA7n1j, aU64m8;
    for (fsA3iy = (704 - 704); fsA3iy < OzpGDdH; fsA3iy++)
        for (BFVTRUA7n1j = (832 - 832); BFVTRUA7n1j < WOXndozZ64; BFVTRUA7n1j++) {
            cin >> F1IBM4h[fsA3iy][BFVTRUA7n1j];
        }
    cin >> krMsny2m >> yw3dG7rpF;
    int A2JVeiUuF [krMsny2m] [yw3dG7rpF];
    int wzyNFhrWq63H [OzpGDdH] [yw3dG7rpF];
    {
        fsA3iy = 569 - 569;
        while (fsA3iy < krMsny2m) {
            for (BFVTRUA7n1j = (172 - 172); BFVTRUA7n1j < yw3dG7rpF; BFVTRUA7n1j++) {
                cin >> A2JVeiUuF[fsA3iy][BFVTRUA7n1j];
            }
            fsA3iy++;
        }
    }
    {
        fsA3iy = 293 - 293;
        while (fsA3iy < OzpGDdH) {
            for (BFVTRUA7n1j = (931 - 931); BFVTRUA7n1j < yw3dG7rpF; BFVTRUA7n1j++) {
                wzyNFhrWq63H[fsA3iy][BFVTRUA7n1j] = (489 - 489);
            }
            fsA3iy++;
        }
    }
    {
        fsA3iy = 749 - 749;
        while (fsA3iy < OzpGDdH) {
            for (BFVTRUA7n1j = (526 - 526); BFVTRUA7n1j < yw3dG7rpF; BFVTRUA7n1j++)
                for (aU64m8 = (904 - 904); aU64m8 < krMsny2m; aU64m8++) {
                    wzyNFhrWq63H[fsA3iy][BFVTRUA7n1j] = wzyNFhrWq63H[fsA3iy][BFVTRUA7n1j] + F1IBM4h[fsA3iy][aU64m8] * A2JVeiUuF[aU64m8][BFVTRUA7n1j];
                }
            fsA3iy++;
        }
    }
    for (fsA3iy = (688 - 688); fsA3iy < OzpGDdH; fsA3iy++)
        for (BFVTRUA7n1j = (126 - 126); BFVTRUA7n1j < yw3dG7rpF; BFVTRUA7n1j++) {
            if (BFVTRUA7n1j < yw3dG7rpF - (742 - 741))
                cout << wzyNFhrWq63H[fsA3iy][BFVTRUA7n1j] << ' ';
            if (BFVTRUA7n1j == yw3dG7rpF - (669 - 668))
                cout << wzyNFhrWq63H[fsA3iy][BFVTRUA7n1j] << endl;
        }
    return (521 - 521);
}

