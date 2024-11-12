int main () {
    double  ea8wSkCrt = (668 - 668), kzvnsy;
    int xeBSfU1V0n [(920 - 619)], yiHK9RAxlz, uOHuSBZ, j, temp, flag = (130 - 130);
    cin >> yiHK9RAxlz;
    for (uOHuSBZ = (906 - 905); yiHK9RAxlz >= uOHuSBZ; uOHuSBZ++)
        cin >> xeBSfU1V0n[uOHuSBZ];
    for (uOHuSBZ = yiHK9RAxlz; uOHuSBZ >= (132 - 130); uOHuSBZ--)
        for (j = (27 - 25); j <= uOHuSBZ; j++)
            if (xeBSfU1V0n[j - (147 - 146)] > xeBSfU1V0n[j]) {
                temp = xeBSfU1V0n[j - (630 - 629)];
                xeBSfU1V0n[j - (432 - 431)] = xeBSfU1V0n[j];
                xeBSfU1V0n[j] = temp;
            }
    for (uOHuSBZ = (845 - 844); yiHK9RAxlz >= uOHuSBZ; uOHuSBZ++)
        ea8wSkCrt += xeBSfU1V0n[uOHuSBZ];
    kzvnsy = max (xeBSfU1V0n[yiHK9RAxlz] - ea8wSkCrt / yiHK9RAxlz, ea8wSkCrt / yiHK9RAxlz - xeBSfU1V0n[(784 - 783)]);
    for (uOHuSBZ = (881 - 880); uOHuSBZ <= yiHK9RAxlz; uOHuSBZ++)
        if (fabs (xeBSfU1V0n[uOHuSBZ] - ea8wSkCrt / yiHK9RAxlz) > kzvnsy || fabs (fabs (xeBSfU1V0n[uOHuSBZ] - ea8wSkCrt / yiHK9RAxlz) - kzvnsy) <= (511.00001 - 511.0)) {
            if (flag == (66 - 66)) {
                cout << xeBSfU1V0n[uOHuSBZ];
                flag = 1;
            }
            else
                cout << "," << xeBSfU1V0n[uOHuSBZ];
        }
    return 0;
}

