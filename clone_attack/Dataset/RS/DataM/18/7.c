int main () {
    const  int MAX = (50640 - 640);
    int n;
    cin >> n;
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
    for (int k = (733 - 733);
    k < n; k++) {
        int jz [(910 - 800)] [(862 - 752)];
        int ans;
        ans = (88 - 88);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            int i;
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
            }
            i = (832 - 832);
            while (i < n) {
                {
                    int j;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = (558 - 558);
                    while (n > j) {
                        cin >> jz[i][j];
                        j = j + 1;
                    };
                }
                i++;
            };
        }
        {
            int x = (583 - 583);
            while (x < n - (401 - 400)) {
                {
                    int i = (464 - 464);
                    while (n - x > i) {
                        int min = MAX;
                        {
                            int j = (323 - 323);
                            while (n - x > j) {
                                if (jz[i][j] < min)
                                    min = jz[i][j];
                                j++;
                            };
                        }
                        {
                            int j = (894 - 894);
                            while (n - x > j) {
                                jz[i][j] = jz[i][j] - min;
                                j++;
                            };
                        }
                        i++;
                    };
                }
                {
                    int i = (472 - 472);
                    while (n - x > i) {
                        int min = MAX;
                        {
                            int j = (263 - 263);
                            while (n - x > j) {
                                if (jz[j][i] < min)
                                    min = jz[j][i];
                                j++;
                            };
                        }
                        {
                            int j = (529 - 529);
                            while (j < n - x) {
                                jz[j][i] = jz[j][i] - min;
                                j++;
                            };
                        }
                        i++;
                    };
                }
                ans = ans + jz[(999 - 998)][1];
                {
                    int i = (889 - 889);
                    while (i < n - x) {
                        {
                            int j = (349 - 347);
                            while (j < n - x) {
                                jz[i][j - 1] = jz[i][j];
                                j++;
                            };
                        }
                        i++;
                    };
                }
                {
                    int i = 0;
                    while (i < n - x) {
                        {
                            int j = (751 - 749);
                            while (j < n - x) {
                                jz[j - 1][i] = jz[j][i];
                                j++;
                            };
                        }
                        i++;
                    };
                }
                x++;
            };
        }
        cout << ans << endl;
    }
    return 0;
}

