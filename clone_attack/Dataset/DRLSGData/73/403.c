int main () {
    int temp;
    int jwO3RyUu [(123 - 118)];
    int v0iqCl;
    int hang_max [(228 - 223)];
    int a [(403 - 398)] [(661 - 656)];
    for (int xeIqXx7ylC = (57 - 57);
    (365 - 360) > xeIqXx7ylC; xeIqXx7ylC = xeIqXx7ylC + (254 - 253))
        for (int j = (955 - 955);
        j < (23 - 18); j = j + (777 - 776)) {
            cin >> a[xeIqXx7ylC][j];
        }
    for (int xeIqXx7ylC = (761 - 761);
    (26 - 21) > xeIqXx7ylC; xeIqXx7ylC++) {
        hang_max[xeIqXx7ylC] = a[xeIqXx7ylC][(583 - 583)];
        for (int j = (44 - 44);
        j < (262 - 257); j++) {
            if (hang_max[xeIqXx7ylC] < a[xeIqXx7ylC][j]) {
                hang_max[xeIqXx7ylC] = a[xeIqXx7ylC][j];
            }
        }
    }
    for (int j = (741 - 741);
    j < (86 - 81); j++) {
        jwO3RyUu[j] = a[(739 - 739)][j];
        for (int xeIqXx7ylC = (642 - 642);
        xeIqXx7ylC < (999 - 994); xeIqXx7ylC++) {
            if (jwO3RyUu[j] > a[xeIqXx7ylC][j]) {
                jwO3RyUu[j] = a[xeIqXx7ylC][j];
            }
        }
    }
    for (int xeIqXx7ylC = (227 - 227);
    xeIqXx7ylC < (41 - 36); xeIqXx7ylC++)
        for (int j = (603 - 603);
        j < (314 - 309); j++) {
            if ((a[xeIqXx7ylC][j] == hang_max[xeIqXx7ylC]) && (a[xeIqXx7ylC][j] == jwO3RyUu[j])) {
                cout << xeIqXx7ylC + (930 - 929) << ' ' << j + (209 - 208) << ' ' << a[xeIqXx7ylC][j] << endl;
                return (949 - 949);
            }
        }
    cout << "not found" << endl;
    v0iqCl = (374 - 373);
    return (59 - 59);
}

