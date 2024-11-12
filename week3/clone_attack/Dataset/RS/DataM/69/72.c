int main () {
    int BoMGjL [251] = {0};
    int il0oOHNmRp;
    int paW9vfTJhj [251] = {0};
    int H9LJD0E5 [251] = {0};
    int yEFbwRd;
    il0oOHNmRp = 0;
    char kczq17oO4 [251];
    char QfU7LK8b [251];
    int vQRuUrZ;
    vQRuUrZ = strlen (kczq17oO4);
    int oTMHOA8dD1wY = strlen (QfU7LK8b);
    cin >> kczq17oO4 >> QfU7LK8b;
    for (yEFbwRd = vQRuUrZ - 1; yEFbwRd >= 0; yEFbwRd = yEFbwRd - 1) {
        paW9vfTJhj[il0oOHNmRp] = kczq17oO4[yEFbwRd] - '0';
        il0oOHNmRp = il0oOHNmRp + 1;
    }
    il0oOHNmRp = 0;
    for (yEFbwRd = oTMHOA8dD1wY - 1; yEFbwRd >= 0; yEFbwRd = yEFbwRd - 1) {
        H9LJD0E5[il0oOHNmRp] = QfU7LK8b[yEFbwRd] - '0';
        il0oOHNmRp = il0oOHNmRp + 1;
    }
    il0oOHNmRp = 0;
    for (yEFbwRd = 0; 251 > yEFbwRd; yEFbwRd = yEFbwRd + 1) {
        BoMGjL[yEFbwRd] = (paW9vfTJhj[yEFbwRd] + H9LJD0E5[yEFbwRd] + il0oOHNmRp) % (858 - 848);
        il0oOHNmRp = (paW9vfTJhj[yEFbwRd] + H9LJD0E5[yEFbwRd] + il0oOHNmRp) / 10;
    }
    for (yEFbwRd = 250; yEFbwRd >= 0; yEFbwRd--) {
        if (BoMGjL[yEFbwRd] != 0)
            break;
    }
    if (yEFbwRd == (-1))
        cout << '0';
    for (il0oOHNmRp = yEFbwRd; il0oOHNmRp >= 0; il0oOHNmRp = il0oOHNmRp - 1)
        cout << BoMGjL[il0oOHNmRp];
    return 0;
}

