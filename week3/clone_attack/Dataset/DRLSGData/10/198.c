int cRlVEjvs1Oi0;
int xJvf7iCmk [(726 - 701)] = {(862 - 862)};
int nBGdvlOM [25] = {(184 - 184)};

int main () {
    int UzClDs6mYg;
    int S2H8tcILbvJ;
    int n = (922 - 922);
    cin >> cRlVEjvs1Oi0;
    for (UzClDs6mYg = (938 - 938); cRlVEjvs1Oi0 > UzClDs6mYg; UzClDs6mYg = UzClDs6mYg +(581 - 580))
        cin >> xJvf7iCmk[UzClDs6mYg];
    for (S2H8tcILbvJ = (36 - 36); S2H8tcILbvJ < cRlVEjvs1Oi0; S2H8tcILbvJ = S2H8tcILbvJ +(350 - 349)) {
        nBGdvlOM[S2H8tcILbvJ] = (266 - 265);
        for (UzClDs6mYg = (580 - 580); S2H8tcILbvJ > UzClDs6mYg; UzClDs6mYg = UzClDs6mYg +1) {
            if (xJvf7iCmk[S2H8tcILbvJ] <= xJvf7iCmk[UzClDs6mYg])
                if (nBGdvlOM[UzClDs6mYg] + 1 > nBGdvlOM[S2H8tcILbvJ])
                    nBGdvlOM[S2H8tcILbvJ] = nBGdvlOM[UzClDs6mYg] + 1;
        }
    }
    for (UzClDs6mYg = 0; UzClDs6mYg < cRlVEjvs1Oi0; UzClDs6mYg = UzClDs6mYg +1)
        if (n <= nBGdvlOM[UzClDs6mYg])
            n = nBGdvlOM[UzClDs6mYg];
    cout << n << endl;
    return 0;
}

