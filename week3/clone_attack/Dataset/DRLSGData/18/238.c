int main () {
    int i;
    int rRVYLQKBXOlh;
    cin >> rRVYLQKBXOlh;
    {
        i = 889 - 889;
        while (rRVYLQKBXOlh > i) {
            int temp;
            int s5pzlmA [100] [100];
            int zGedpI7uZ1n;
            int sum;
            int DAR0GcMfQY;
            int r54eKLOYNI;
            int pvsYCP [100] [100];
            int UPjzAhQve9;
            i = i + 1;
            sum = 0;
            for (DAR0GcMfQY = 0; rRVYLQKBXOlh > DAR0GcMfQY; DAR0GcMfQY = DAR0GcMfQY +1)
                for (zGedpI7uZ1n = 0; rRVYLQKBXOlh > zGedpI7uZ1n; zGedpI7uZ1n = zGedpI7uZ1n + 1)
                    cin >> pvsYCP[DAR0GcMfQY][zGedpI7uZ1n];
            for (UPjzAhQve9 = rRVYLQKBXOlh - (609 - 608); 1 <= UPjzAhQve9; UPjzAhQve9 = UPjzAhQve9 -1) {
                {
                    DAR0GcMfQY = 0;
                    while (DAR0GcMfQY <= UPjzAhQve9) {
                        for (zGedpI7uZ1n = 0; UPjzAhQve9 >= zGedpI7uZ1n; zGedpI7uZ1n = zGedpI7uZ1n + 1)
                            s5pzlmA[DAR0GcMfQY][zGedpI7uZ1n] = pvsYCP[DAR0GcMfQY][zGedpI7uZ1n];
                        DAR0GcMfQY = DAR0GcMfQY +1;
                    }
                }
                for (DAR0GcMfQY = 0; DAR0GcMfQY <= UPjzAhQve9; DAR0GcMfQY = DAR0GcMfQY +1) {
                    r54eKLOYNI = 0;
                    while (r54eKLOYNI <= UPjzAhQve9 -1) {
                        {
                            zGedpI7uZ1n = 0;
                            while (UPjzAhQve9 -1 - r54eKLOYNI >= zGedpI7uZ1n) {
                                if (s5pzlmA[DAR0GcMfQY][zGedpI7uZ1n] > s5pzlmA[DAR0GcMfQY][zGedpI7uZ1n + 1]) {
                                    temp = s5pzlmA[DAR0GcMfQY][zGedpI7uZ1n];
                                    s5pzlmA[DAR0GcMfQY][zGedpI7uZ1n] = s5pzlmA[DAR0GcMfQY][zGedpI7uZ1n + 1];
                                    s5pzlmA[DAR0GcMfQY][zGedpI7uZ1n + 1] = temp;
                                }
                                zGedpI7uZ1n = zGedpI7uZ1n + 1;
                            }
                        }
                        r54eKLOYNI = r54eKLOYNI + 1;
                    }
                }
                for (DAR0GcMfQY = 0; DAR0GcMfQY <= UPjzAhQve9; DAR0GcMfQY = DAR0GcMfQY +1)
                    for (zGedpI7uZ1n = 0; UPjzAhQve9 >= zGedpI7uZ1n; zGedpI7uZ1n = zGedpI7uZ1n + 1)
                        pvsYCP[DAR0GcMfQY][zGedpI7uZ1n] -= s5pzlmA[DAR0GcMfQY][0];
                for (DAR0GcMfQY = 0; DAR0GcMfQY <= UPjzAhQve9; DAR0GcMfQY = DAR0GcMfQY +1) {
                    zGedpI7uZ1n = 0;
                    while (zGedpI7uZ1n <= UPjzAhQve9) {
                        s5pzlmA[DAR0GcMfQY][zGedpI7uZ1n] = pvsYCP[DAR0GcMfQY][zGedpI7uZ1n];
                        zGedpI7uZ1n = zGedpI7uZ1n + 1;
                    }
                }
                for (zGedpI7uZ1n = 0; zGedpI7uZ1n <= UPjzAhQve9; zGedpI7uZ1n = zGedpI7uZ1n + 1) {
                    r54eKLOYNI = 0;
                    while (r54eKLOYNI <= UPjzAhQve9 -1) {
                        {
                            DAR0GcMfQY = 0;
                            while (DAR0GcMfQY <= UPjzAhQve9 -1 - r54eKLOYNI) {
                                if (s5pzlmA[DAR0GcMfQY][zGedpI7uZ1n] > s5pzlmA[DAR0GcMfQY +1][zGedpI7uZ1n]) {
                                    temp = s5pzlmA[DAR0GcMfQY][zGedpI7uZ1n];
                                    s5pzlmA[DAR0GcMfQY][zGedpI7uZ1n] = s5pzlmA[DAR0GcMfQY +1][zGedpI7uZ1n];
                                    s5pzlmA[DAR0GcMfQY +1][zGedpI7uZ1n] = temp;
                                }
                                DAR0GcMfQY++;
                            }
                        }
                        r54eKLOYNI = r54eKLOYNI + 1;
                    }
                }
                for (DAR0GcMfQY = 0; DAR0GcMfQY <= UPjzAhQve9; DAR0GcMfQY = DAR0GcMfQY +1)
                    for (zGedpI7uZ1n = 0; zGedpI7uZ1n <= UPjzAhQve9; zGedpI7uZ1n = zGedpI7uZ1n + 1)
                        pvsYCP[DAR0GcMfQY][zGedpI7uZ1n] -= s5pzlmA[0][zGedpI7uZ1n];
                sum += pvsYCP[1][1];
                for (DAR0GcMfQY = 2; DAR0GcMfQY <= UPjzAhQve9; DAR0GcMfQY = DAR0GcMfQY +1)
                    for (zGedpI7uZ1n = 2; zGedpI7uZ1n <= UPjzAhQve9; zGedpI7uZ1n = zGedpI7uZ1n + 1)
                        pvsYCP[DAR0GcMfQY -1][zGedpI7uZ1n - 1] = pvsYCP[DAR0GcMfQY][zGedpI7uZ1n];
                for (zGedpI7uZ1n = 2; zGedpI7uZ1n <= UPjzAhQve9; zGedpI7uZ1n++)
                    pvsYCP[0][zGedpI7uZ1n - 1] = pvsYCP[0][zGedpI7uZ1n];
                for (DAR0GcMfQY = 2; DAR0GcMfQY <= UPjzAhQve9; DAR0GcMfQY = DAR0GcMfQY +1)
                    pvsYCP[DAR0GcMfQY -1][0] = pvsYCP[DAR0GcMfQY][0];
            }
            cout << sum << endl;
        }
    }
    return 0;
}

