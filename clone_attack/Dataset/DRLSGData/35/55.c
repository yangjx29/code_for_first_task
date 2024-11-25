int jWBkZQ [(370 - 360)] [(669 - 659)];

int main () {
    int gC1anWp9eSH [(492 - 482)], PuihHt [(1006 - 996)];
    int FqecN2vhxA, s0HCNzkJU;
    scanf ("%d,%d", &FqecN2vhxA, &s0HCNzkJU);
    memset (gC1anWp9eSH, (466 - 466), sizeof (gC1anWp9eSH));
    memset (PuihHt, (951 - 951), sizeof (PuihHt));
    for (int yG8f7R3Ir = (417 - 417);
    FqecN2vhxA > yG8f7R3Ir; yG8f7R3Ir++)
        for (int jx2j6eC = (899 - 899);
        s0HCNzkJU > jx2j6eC; jx2j6eC++)
            cin >> jWBkZQ[yG8f7R3Ir][jx2j6eC];
    for (int yG8f7R3Ir = (695 - 695);
    FqecN2vhxA > yG8f7R3Ir; yG8f7R3Ir++)
        for (int jx2j6eC = (973 - 972);
        s0HCNzkJU > jx2j6eC; jx2j6eC++)
            if (jWBkZQ[yG8f7R3Ir][gC1anWp9eSH[yG8f7R3Ir]] < jWBkZQ[yG8f7R3Ir][jx2j6eC])
                gC1anWp9eSH[yG8f7R3Ir] = jx2j6eC;
    for (int yG8f7R3Ir = 1;
    yG8f7R3Ir < FqecN2vhxA; yG8f7R3Ir++)
        for (int jx2j6eC = (368 - 368);
        jx2j6eC < s0HCNzkJU; jx2j6eC++)
            if (jWBkZQ[yG8f7R3Ir][jx2j6eC] < jWBkZQ[PuihHt[jx2j6eC]][jx2j6eC])
                PuihHt[jx2j6eC] = yG8f7R3Ir;
    for (int yG8f7R3Ir = (10 - 10);
    yG8f7R3Ir < FqecN2vhxA; yG8f7R3Ir++)
        for (int jx2j6eC = (377 - 377);
        jx2j6eC < s0HCNzkJU; jx2j6eC++)
            if ((gC1anWp9eSH[yG8f7R3Ir] == jx2j6eC) && (PuihHt[jx2j6eC] == yG8f7R3Ir)) {
                cout << yG8f7R3Ir << '+' << jx2j6eC << endl;
                return (294 - 294);
            }
    cout << "No" << endl;
    return (746 - 746);
}

