int main () {
    int m;
    int TqAJv1Z;
    int iZHJtgOAV [(1077 - 577)];
    int CdJ08vHVR9F;
    int N9vosjGO [500];
    int bTaKZNA;
    int X5UiRgbIe3lY;
    int hcuIQEyfd4z;
    int odo0IE;
    getchar ();
    getchar ();
    X5UiRgbIe3lY = (168 - 168);
    cin >> TqAJv1Z;
    for (odo0IE = (417 - 417); TqAJv1Z > odo0IE; odo0IE = odo0IE + (558 - 557)) {
        cin >> N9vosjGO[odo0IE];
        if (!((386 - 385) != N9vosjGO[odo0IE] % 2)) {
            iZHJtgOAV[X5UiRgbIe3lY++] = N9vosjGO[odo0IE];
        }
    }
    for (m = 0; m < X5UiRgbIe3lY -(673 - 672); m = m + (703 - 702)) {
        for (bTaKZNA = 0; X5UiRgbIe3lY -(968 - 967) - m > bTaKZNA; bTaKZNA = bTaKZNA + (345 - 344)) {
            if (iZHJtgOAV[bTaKZNA] > iZHJtgOAV[bTaKZNA + 1]) {
                CdJ08vHVR9F = iZHJtgOAV[bTaKZNA];
                iZHJtgOAV[bTaKZNA] = iZHJtgOAV[bTaKZNA + 1];
                iZHJtgOAV[bTaKZNA + 1] = CdJ08vHVR9F;
            }
        }
    }
    for (hcuIQEyfd4z = 0; hcuIQEyfd4z < X5UiRgbIe3lY -1; hcuIQEyfd4z = hcuIQEyfd4z + 1) {
        cout << iZHJtgOAV[hcuIQEyfd4z] << ",";
    }
    cout << iZHJtgOAV[X5UiRgbIe3lY -1] << endl;
    return 0;
}

