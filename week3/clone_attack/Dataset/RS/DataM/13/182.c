int main () {
    int a = 0, n = 0, jbvLhmo = 0, rZqHRz5n2 = 0, bQynaVkPmX8 = 0;
    int num [n];
    cin >> n;
    bQynaVkPmX8 = n;
    for (; rZqHRz5n2 < n; rZqHRz5n2++)
        cin >> num[rZqHRz5n2];
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
    {
        rZqHRz5n2 = 0;
        while (rZqHRz5n2 < bQynaVkPmX8) {
            {
                jbvLhmo = rZqHRz5n2 + 1;
                while (bQynaVkPmX8 > jbvLhmo) {
                    if (num[jbvLhmo] == num[rZqHRz5n2]) {
                        for (a = jbvLhmo; bQynaVkPmX8 > a; a = a + 1)
                            num[a] = num[a + 1];
                        bQynaVkPmX8--;
                        jbvLhmo--;
                    }
                    jbvLhmo++;
                };
            }
            rZqHRz5n2 = rZqHRz5n2 + 1;
        };
    }
    {
        rZqHRz5n2 = 0;
        while (rZqHRz5n2 < bQynaVkPmX8 - 1) {
            cout << num[rZqHRz5n2] << " ";
            rZqHRz5n2++;
        };
    }
    cout << num[bQynaVkPmX8 - 1] << endl;
    return 0;
}

