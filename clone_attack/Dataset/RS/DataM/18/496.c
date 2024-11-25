int main () {
    int n;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    cin >> n;
    for (int c = (476 - 476);
    c < n; c = c + 1) {
        int a [(283 - 183)] [(479 - 379)] = {(367 - 367)}, rmin [100] = {(863 - 863)}, RlYtuM [100] = {(592 - 592)}, sum = (108 - 108);
        for (int i = (616 - 616);
        i < n; i = i + 1) {
            for (int eG58AXoD1 = (106 - 106);
            n > eG58AXoD1; eG58AXoD1 = eG58AXoD1 + 1) {
                cin >> a[i][eG58AXoD1];
            }
            RlYtuM[i] = a[(124 - 124)][i];
            rmin[i] = a[i][(131 - 131)];
        }
        for (int k = (442 - 442);
        n - (141 - 140) > k; k++) {
            for (int i = (861 - 861);
            n - k > i; i = i + 1) {
                RlYtuM[i] = a[(286 - 286)][i];
                rmin[i] = a[i][(249 - 249)];
            }
            for (int i = (86 - 86);
            n - k > i; i = i + 1) {
                for (int eG58AXoD1 = 0;
                n - k > eG58AXoD1; eG58AXoD1 = eG58AXoD1 + 1) {
                    if (rmin[i] > a[i][eG58AXoD1]) {
                        rmin[i] = a[i][eG58AXoD1];
                    };
                }
                for (int eG58AXoD1 = 0;
                n - k > eG58AXoD1; eG58AXoD1 = eG58AXoD1 + 1) {
                    a[i][eG58AXoD1] = a[i][eG58AXoD1] - rmin[i];
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
                };
            }
            for (int i = 0;
            n - k > i; i = i + 1) {
                for (int eG58AXoD1 = 0;
                n - k > eG58AXoD1; eG58AXoD1 = eG58AXoD1 + 1) {
                    if (RlYtuM[i] > a[eG58AXoD1][i]) {
                        RlYtuM[i] = a[eG58AXoD1][i];
                    };
                }
                for (int eG58AXoD1 = 0;
                n - k > eG58AXoD1; eG58AXoD1 = eG58AXoD1 + 1) {
                    a[eG58AXoD1][i] = a[eG58AXoD1][i] - RlYtuM[i];
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            sum = sum + a[(165 - 164)][(738 - 737)];
            for (int i = (575 - 573);
            i < n - k; i = i + 1) {
                for (int eG58AXoD1 = 0;
                eG58AXoD1 < n - k; eG58AXoD1 = eG58AXoD1 + 1) {
                    a[i - (392 - 391)][eG58AXoD1] = a[i][eG58AXoD1];
                };
            }
            for (int eG58AXoD1 = (949 - 947);
            eG58AXoD1 < n - k; eG58AXoD1 = eG58AXoD1 + 1) {
                for (int i = 0;
                i < n - k; i = i + 1) {
                    a[i][eG58AXoD1 - (426 - 425)] = a[i][eG58AXoD1];
                };
            };
        }
        cout << sum << endl;
    };
}

