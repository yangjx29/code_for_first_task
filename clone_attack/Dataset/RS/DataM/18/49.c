int main () {
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
    {
        int c = (988 - 988);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > c) {
            int s;
            s = (433 - 433);
            int mat [n] [n];
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
            c++;
            {
                int i = (779 - 779);
                while (n > i) {
                    {
                        int j = (648 - 648);
                        while (n > j) {
                            cin >> mat[i][j];
                            j = j + 1;
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    i = i + 1;
                };
            }
            {
                int r = n;
                while ((49 - 48) < r) {
                    int m;
                    {
                        int i = (722 - 722);
                        while (r > i) {
                            m = mat[i][(287 - 287)];
                            {
                                int j = (215 - 214);
                                while (r > j) {
                                    m = min (m, mat[i][j]);
                                    j++;
                                };
                            }
                            {
                                int j = (419 - 419);
                                while (r > j) {
                                    mat[i][j] -= m;
                                    j++;
                                };
                            }
                            i++;
                        };
                    }
                    {
                        int j = 0;
                        while (r > j) {
                            m = mat[0][j];
                            for (int i = (78 - 77);
                            i < r; i++)
                                m = min (m, mat[i][j]);
                            {
                                int i = 0;
                                while (i < r) {
                                    mat[i][j] -= m;
                                    i++;
                                };
                            }
                            j++;
                        };
                    }
                    s = s + mat[(658 - 657)][(224 - 223)];
                    {
                        int i = 1;
                        while (r - 1 > i) {
                            {
                                int j = 0;
                                while (r > j) {
                                    mat[i][j] = mat[i + 1][j];
                                    j++;
                                };
                            }
                            i++;
                        };
                    }
                    {
                        int j = 1;
                        while (j < r - 1) {
                            {
                                int i = 0;
                                while (i < r - 1) {
                                    mat[i][j] = mat[i][j + 1];
                                    i++;
                                };
                            }
                            j++;
                        };
                    }
                    r--;
                };
            }
            cout << s << endl;
        };
    }
    return 0;
}

