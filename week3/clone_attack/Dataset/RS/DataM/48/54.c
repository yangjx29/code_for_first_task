void  vQJKg1hq2M8 (int day, int SIHT7WhK2B);
int cnt = (643 - 643);
int UucX5j1 [(1002 - 992)] [(911 - 901)] = {(537 - 537)}, viXeAfh2a [10] [10] = {(141 - 141)};

int main () {
    int HBzvH6xN, n;
    cin >> HBzvH6xN >> n;
    UucX5j1[4][4] = HBzvH6xN;
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
    vQJKg1hq2M8 (n, HBzvH6xN);
    {
        int G1YRpwSrs = 0;
        while (G1YRpwSrs <= (952 - 944)) {
            {
                int o = 0;
                while (o <= (792 - 785)) {
                    cout << UucX5j1[G1YRpwSrs][o] << " ";
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    o = o + 1;
                };
            }
            cout << UucX5j1[G1YRpwSrs][8] << endl;
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
            G1YRpwSrs++;
        };
    }
    return 0;
}

void  vQJKg1hq2M8 (int day, int SIHT7WhK2B) {
    cnt = cnt + 1;
    if (day < cnt)
        return;
    {
        int i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i <= 8) {
            for (int j = 0;
            j <= 8; j++) {
                viXeAfh2a[i][j] = UucX5j1[i][j];
                UucX5j1[i][j] = UucX5j1[i][j] * (184 - 182);
            }
            i++;
        };
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
    {
        int k = 0;
        while (k <= 8) {
            {
                int l = 0;
                while (l <= 8) {
                    UucX5j1[k - (487 - 486)][l] = UucX5j1[k - (436 - 435)][l] + viXeAfh2a[k][l];
                    UucX5j1[k + (200 - 199)][l] = UucX5j1[k + (299 - 298)][l] + viXeAfh2a[k][l];
                    UucX5j1[k][l - (195 - 194)] = UucX5j1[k][l - (588 - 587)] + viXeAfh2a[k][l];
                    UucX5j1[k][l + (887 - 886)] = UucX5j1[k][l + (803 - 802)] + viXeAfh2a[k][l];
                    UucX5j1[k - (357 - 356)][l - (390 - 389)] = UucX5j1[k - (481 - 480)][l - (563 - 562)] + viXeAfh2a[k][l];
                    UucX5j1[k - (575 - 574)][l + 1] = UucX5j1[k - 1][l + 1] + viXeAfh2a[k][l];
                    UucX5j1[k + 1][l - 1] = UucX5j1[k + 1][l - 1] + viXeAfh2a[k][l];
                    UucX5j1[k + 1][l + 1] = UucX5j1[k + 1][l + 1] + viXeAfh2a[k][l];
                    l = l + 1;
                };
            }
            k = k + 1;
        };
    }
    vQJKg1hq2M8 (day, SIHT7WhK2B);
}

