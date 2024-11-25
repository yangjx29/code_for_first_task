int main () {
    int a [(757 - 754)], f [3];
    {
        a[(570 - 570)] = 0;
        while (a[0] <= 2) {
            {
                a[(842 - 841)] = 0;
                while (2 >= a[(790 - 789)]) {
                    a[2] = 0;
                    while (a[2] <= 2) {
                        f[0] = (a[0] < a[1]) + (a[2] == a[0]);
                        f[1] = (a[0] > a[1]) + (a[0] > a[2]);
                        f[2] = (a[1] < a[2]) + (a[1] > a[0]);
                        {
                            int i = 0;
                            while (2 >= i) {
                                if (a[i] > a[(i + 1) % 3] && f[i] >= f[(i + 1) % 3])
                                    goto aa;
                                if (a[i] < a[(i + 1) % 3] && f[i] <= f[(i + 1) % 3])
                                    goto aa;
                                if (a[i] == a[(i + 1) % 3] && f[i] != f[(i + 1) % 3])
                                    goto aa;
                                i = i + 1;
                            };
                        }
                        {
                            int j = 0;
                            while (j <= 2) {
                                j = j + 1;
                                {
                                    int i = 0;
                                    while (i <= 2) {
                                        if (a[i] < a[(i + 1) % 3] && a[i] < a[(i + 2) % 3]) {
                                            cout << (char) ('A' + i);
                                            a[i] = 3;
                                        }
                                        i = i + 1;
                                    };
                                };
                            };
                        }
                        goto bb;
                    aa :
                        ;
                        a[2]++;
                    };
                };
            }
            a[0]++;
        };
    }
bb :
    ;
    return 0;
}

