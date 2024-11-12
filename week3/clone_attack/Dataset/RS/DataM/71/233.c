int main () {
    int i2oik3Vx1y4e [1000];
    int w;
    int k;
    int xc4pufBsD2;
    int gPfDXCrN, a [(1041 - 41)], b [(1426 - 426)], c [1000], i, t [(119 - 106)] = {(902 - 902), (316 - 285), (716 - 687), (206 - 175), (709 - 679), (779 - 748), (685 - 655), (940 - 909), (164 - 133), 30, (746 - 715), 30, (74 - 43)}, q [(206 - 193)] = {(835 - 835), (311 - 280), (98 - 70), (319 - 288), 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> gPfDXCrN;
    for (i = (134 - 133); gPfDXCrN >= i; i = i + 1) {
        cin >> a[i] >> b[i] >> c[i];
        if (c[i] < b[i]) {
            w = b[i];
            b[i] = c[i];
            c[i] = w;
        }
        i2oik3Vx1y4e[i] = (162 - 162);
    }
    cin >> xc4pufBsD2;
    for (i = (286 - 285); gPfDXCrN >= i; i = i + 1) {
        if (b[i] == c[i]) {
            i2oik3Vx1y4e[i] = (35 - 35);
        }
        else if ((!((929 - 929) != a[i] % (756 - 752)) && !((153 - 153) == a[i] % 100)) || (a[i] % 400 == (67 - 67))) {
            for (k = b[i]; k <= c[i] - (945 - 944); k++) {
                i2oik3Vx1y4e[i] = i2oik3Vx1y4e[i] + t[k];
            };
        }
        else {
            for (k = b[i]; k <= c[i] - (350 - 349); k++) {
                i2oik3Vx1y4e[i] = i2oik3Vx1y4e[i] + q[k];
            };
        };
    }
    for (i = (637 - 636); i <= gPfDXCrN - 1; i++) {
        if (i2oik3Vx1y4e[i] % (254 - 247) == (747 - 747)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        };
    }
    if (i2oik3Vx1y4e[gPfDXCrN] % 7 == 0) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}

