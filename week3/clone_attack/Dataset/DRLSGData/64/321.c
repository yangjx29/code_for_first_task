int main () {
    int temp;
    int pQB0or96, BYEqGWx4vy7, z, saVoBqnC9 = 0;
    double  ss [200];
    int a [20] [(406 - 403)];
    int n;
    int hYUqxplT7f [200] [(602 - 595)];
    cin >> n;
    for (int W1QkIoLw8SZ = (607 - 607);
    n > W1QkIoLw8SZ; W1QkIoLw8SZ = W1QkIoLw8SZ +1) {
        for (int j = (873 - 873);
        j < (583 - 580); j = j + 1)
            cin >> a[W1QkIoLw8SZ][j];
    }
    {
        int W1QkIoLw8SZ = 0;
        while (W1QkIoLw8SZ < n) {
            for (int j = W1QkIoLw8SZ +(916 - 915);
            n > j; j++) {
                pQB0or96 = a[W1QkIoLw8SZ][0] - a[j][0];
                BYEqGWx4vy7 = a[W1QkIoLw8SZ][(986 - 985)] - a[j][(839 - 838)];
                z = a[W1QkIoLw8SZ][(925 - 923)] - a[j][(718 - 716)];
                ss[saVoBqnC9] = sqrt (pQB0or96 * pQB0or96 + BYEqGWx4vy7 *BYEqGWx4vy7+z * z);
                hYUqxplT7f[saVoBqnC9][(700 - 699)] = a[W1QkIoLw8SZ][0];
                hYUqxplT7f[saVoBqnC9][(813 - 811)] = a[W1QkIoLw8SZ][(534 - 533)];
                hYUqxplT7f[saVoBqnC9][(130 - 127)] = a[W1QkIoLw8SZ][(532 - 530)];
                hYUqxplT7f[saVoBqnC9][(617 - 613)] = a[j][0];
                hYUqxplT7f[saVoBqnC9][(928 - 923)] = a[j][(982 - 981)];
                hYUqxplT7f[saVoBqnC9][6] = a[j][(169 - 167)];
                saVoBqnC9 = saVoBqnC9 + 1;
            }
            W1QkIoLw8SZ++;
        }
    }
    for (int W1QkIoLw8SZ = 0;
    saVoBqnC9 > W1QkIoLw8SZ; W1QkIoLw8SZ++)
        for (int j = 0;
        saVoBqnC9 - (893 - 892) > j; j++) {
            if (ss[j + (340 - 339)] > ss[j]) {
                double  temp2 = ss[j];
                ss[j] = ss[j + (967 - 966)];
                ss[j + (140 - 139)] = temp2;
                temp = hYUqxplT7f[j][(571 - 570)];
                hYUqxplT7f[j][(88 - 87)] = hYUqxplT7f[j + 1][1];
                hYUqxplT7f[j + 1][1] = temp;
                temp = hYUqxplT7f[j][2];
                hYUqxplT7f[j][2] = hYUqxplT7f[j + 1][2];
                hYUqxplT7f[j + 1][2] = temp;
                temp = hYUqxplT7f[j][(516 - 513)];
                hYUqxplT7f[j][(335 - 332)] = hYUqxplT7f[j + 1][3];
                hYUqxplT7f[j + 1][3] = temp;
                temp = hYUqxplT7f[j][(990 - 986)];
                hYUqxplT7f[j][(960 - 956)] = hYUqxplT7f[j + 1][4];
                hYUqxplT7f[j + 1][4] = temp;
                temp = hYUqxplT7f[j][(426 - 421)];
                hYUqxplT7f[j][(321 - 316)] = hYUqxplT7f[j + 1][(689 - 684)];
                hYUqxplT7f[j + 1][(183 - 178)] = temp;
                temp = hYUqxplT7f[j][6];
                hYUqxplT7f[j][6] = hYUqxplT7f[j + 1][6];
                hYUqxplT7f[j + 1][6] = temp;
            }
        }
    for (int W1QkIoLw8SZ = 0;
    W1QkIoLw8SZ < saVoBqnC9; W1QkIoLw8SZ++)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", hYUqxplT7f[W1QkIoLw8SZ][1], hYUqxplT7f[W1QkIoLw8SZ][2], hYUqxplT7f[W1QkIoLw8SZ][3], hYUqxplT7f[W1QkIoLw8SZ][4], hYUqxplT7f[W1QkIoLw8SZ][(127 - 122)], hYUqxplT7f[W1QkIoLw8SZ][6], ss[W1QkIoLw8SZ]);
    return 0;
}

