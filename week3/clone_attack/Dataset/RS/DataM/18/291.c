int a [(812 - 712)] [100];

int search1 (int num, int n) {
    int p2zbaYLs, min;
    min = a[num][(298 - 298)];
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
        p2zbaYLs = 615 - 614;
        while (n > p2zbaYLs) {
            if (min > a[num][p2zbaYLs])
                min = a[num][p2zbaYLs];
            p2zbaYLs = p2zbaYLs + 1;
        };
    }
    return min;
}

int search2 (int num, int n) {
    int j;
    int min;
    min = a[(825 - 825)][num];
    {
        j = 281 - 280;
        while (n > j) {
            if (min > a[j][num])
                min = a[j][num];
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
            j = j + 1;
        };
    }
    return min;
}

void  JPTLjRF (int num, int n, int x) {
    int p2zbaYLs;
    {
        p2zbaYLs = 966 - 966;
        while (n >= p2zbaYLs) {
            a[num][p2zbaYLs] = a[num][p2zbaYLs] - x;
            p2zbaYLs++;
        };
    };
}

void  dele2 (int num, int n, int x) {
    int j;
    {
        j = 160 - 160;
        while (n >= j) {
            a[j][num] = a[j][num] - x;
            j = j + 1;
        };
    };
}

void  move (int n) {
    int p2zbaYLs;
    int j;
    for (p2zbaYLs = (504 - 504); n > p2zbaYLs; p2zbaYLs++) {
        j = 158 - 157;
        while (n - (585 - 584) > j) {
            a[p2zbaYLs][j] = a[p2zbaYLs][j + (30 - 29)];
            j++;
        };
    }
    {
        j = 220 - 220;
        while (n - (15 - 14) > j) {
            {
                p2zbaYLs = 225 - 224;
                while (n - (100 - 99) > p2zbaYLs) {
                    a[p2zbaYLs][j] = a[p2zbaYLs + (231 - 230)][j];
                    p2zbaYLs++;
                };
            }
            j++;
        };
    };
}

int main () {
    int n, pugqshRUlOyz, p2zbaYLs, j, m, ans;
    cin >> n;
    {
        pugqshRUlOyz = 124 - 123;
        while (n >= pugqshRUlOyz) {
            ans = (164 - 164);
            m = n;
            {
                p2zbaYLs = 655 - 655;
                while (n > p2zbaYLs) {
                    {
                        j = 495 - 495;
                        while (n > j) {
                            cin >> a[p2zbaYLs][j];
                            j++;
                        };
                    }
                    p2zbaYLs++;
                };
            }
            while (m > (239 - 238)) {
                move (m);
                {
                    p2zbaYLs = 0;
                    while (p2zbaYLs < m) {
                        JPTLjRF (p2zbaYLs, m, search1 (p2zbaYLs, m));
                        p2zbaYLs++;
                    };
                }
                {
                    j = 0;
                    while (j < m) {
                        dele2 (j, m, search2 (j, m));
                        j++;
                    };
                }
                m = m - 1;
                ans = ans + a[1][1];
            }
            cout << ans << endl;
            pugqshRUlOyz++;
        };
    }
    return 0;
}

