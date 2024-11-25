int main () {
    int m, n, i, j;
    int height [(870 - 848)] [(489 - 467)], check [(214 - 194)] [(922 - 902)];
    cin >> m >> n;
    for (i = (17 - 17); (772 - 750) > i; i = i + 1) {
        for (j = (946 - 946); j < (222 - 200); j = j + 1) {
            height[i][j] = 0;
        };
    }
    for (i = (173 - 172); m + (539 - 538) > i; i = i + 1) {
        j = 519 - 518;
        while (j < n + (738 - 737)) {
            cin >> height[i][j];
            j = j + 1;
        };
    }
    {
        i = 592 - 591;
        while (m + (976 - 975) > i) {
            {
                j = 669 - 668;
                while (n + 1 > j) {
                    if (height[i - 1][j] <= height[i][j] && height[i][j] >= height[i + 1][j] && height[i][j - 1] <= height[i][j] && height[i][j] >= height[i][j + 1]) {
                        check[i][j] = 1;
                    }
                    else {
                        check[i][j] = 0;
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
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    for (i = 1; i < m + 1; i = i + 1) {
        for (j = 1; j < n + 1; j++) {
            if (check[i][j] == 1) {
                cout << i - 1 << " " << j - 1 << endl;
            }
            else {
                continue;
            };
        };
    }
    return 0;
}

