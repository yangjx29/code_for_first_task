int main () {
    int cmafITSyoQt;
    char bCFE9l [27];
    int btveG3j [26] [(1592 - 592)];
    int tE0W2oAC6;
    char fWCL2Zhaw;
    memset (btveG3j, (365 - 365), sizeof (btveG3j));
    cin >> cmafITSyoQt;
    tE0W2oAC6 = (909 - 909);
    for (int A8hoXKiU49v = (784 - 783);
    A8hoXKiU49v <= cmafITSyoQt; A8hoXKiU49v++) {
        int cmzwPfFMZ;
        cin >> cmzwPfFMZ >> bCFE9l;
        for (int fjuS63 = (756 - 756);
        strlen (bCFE9l) > fjuS63; fjuS63++) {
            btveG3j[bCFE9l[fjuS63] - (292 - 227)][(541 - 541)]++;
            btveG3j[bCFE9l[fjuS63] - (673 - 608)][btveG3j[bCFE9l[fjuS63] - (989 - 924)][(910 - 910)]] = cmzwPfFMZ;
            if (tE0W2oAC6 < btveG3j[bCFE9l[fjuS63] - (408 - 343)][0]) {
                tE0W2oAC6 = btveG3j[bCFE9l[fjuS63] - (950 - 885)][0];
                fWCL2Zhaw = bCFE9l[fjuS63];
            }
        }
    }
    cout << fWCL2Zhaw << endl << tE0W2oAC6 << endl;
    for (int A8hoXKiU49v = 1;
    A8hoXKiU49v <= tE0W2oAC6; A8hoXKiU49v++)
        cout << btveG3j[fWCL2Zhaw - 65][A8hoXKiU49v] << endl;
    return 0;
}

