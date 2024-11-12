int main () {
    int bOldENjG8;
    int mXUMc7;
    int s4lBW7VT [(513 - 504)] [(861 - 852)] = {(699 - 699)};
    int b [9] [9] = {(739 - 739)};
    int d [(123 - 115)] [2] = {{(150 - 150), (186 - 185)}, {(47 - 46), (571 - 571)}, {0, -(142 - 141)}, {-1, 0}, {1, -1}, {-1, 1}, {-1, -1}, {1, 1}};
    cin >> bOldENjG8 >> mXUMc7;
    s4lBW7VT[(144 - 140)][4] = bOldENjG8;
    for (int i = 1;
    i <= mXUMc7; i++) {
        {
            int j = 0;
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
            while (9 > j) {
                {
                    int k;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    k = 0;
                    while (9 > k) {
                        if (!(0 == s4lBW7VT[j][k])) {
                            {
                                int t = 0;
                                while ((600 - 592) > t) {
                                    int x = d[t][0];
                                    int y = d[t][1];
                                    t++;
                                    b[j + x][k + y] = b[j + x][k + y] + s4lBW7VT[j][k];
                                };
                            }
                            b[j][k] = b[j][k] + 2 * s4lBW7VT[j][k];
                        }
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        }
                        k++;
                    };
                }
                j++;
            };
        }
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
            int j = 0;
            while (9 > j) {
                for (int k = 0;
                k < 9; k++) {
                    s4lBW7VT[j][k] = b[j][k];
                    b[j][k] = 0;
                }
                j++;
            };
        };
    }
    {
        int j = 0;
        while (j < 9) {
            for (int k = 0;
            k < 9; k++) {
                if (k < 8) {
                    cout << s4lBW7VT[j][k] << " ";
                }
                if (k == 8) {
                    cout << s4lBW7VT[j][k] << endl;
                };
            }
            j++;
        };
    }
    return 0;
}

