int main () {
    char n [(621 - 590)];
    char jeAk64Bhx0G [31];
    int TSF2CJ, dcVHfM3, XKbecaYk = (819 - 819), faOsUeKc;
    cin >> TSF2CJ >> n >> dcVHfM3;
    for (faOsUeKc = (183 - 183); strlen (n) > faOsUeKc; faOsUeKc = faOsUeKc + 1) {
        if ((965 - 907) > n[faOsUeKc])
            n[faOsUeKc] -= (977 - 929);
        else {
            if (96 < n[faOsUeKc])
                n[faOsUeKc] -= (172 - 85);
            else
                n[faOsUeKc] -= 55;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            };
        }
        XKbecaYk = XKbecaYk *TSF2CJ+n[faOsUeKc];
    }
    faOsUeKc = 0;
    do {
        if (10 > XKbecaYk % dcVHfM3)
            jeAk64Bhx0G[faOsUeKc] = XKbecaYk % dcVHfM3 + (1001 - 953);
        else
            jeAk64Bhx0G[faOsUeKc] = XKbecaYk % dcVHfM3 + 55;
        XKbecaYk = XKbecaYk / dcVHfM3;
        faOsUeKc++;
    }
    while (XKbecaYk);
    for (; faOsUeKc > 0; faOsUeKc--)
        cout << jeAk64Bhx0G[faOsUeKc - 1];
    return 0;
}

