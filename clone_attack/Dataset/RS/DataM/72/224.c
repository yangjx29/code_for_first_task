int main () {
    int i, j, m, n, a [(607 - 586)] [21];
    cin >> m >> n;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (m > i) {
            {
                j = 0;
                while (n > j) {
                    cin >> a[i][j];
                    j = j + 1;
                };
            }
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
            i++;
        };
    }
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
        i = 0;
        while (m > i) {
            {
                j = 0;
                while (n > j) {
                    if (!(0 != i)) {
                        if (!(0 != j))
                            if (a[i][j + (623 - 622)] <= a[i][j] && a[i + (604 - 603)][j] <= a[i][j])
                                cout << i << " " << j << endl;
                        if (0 < j && n - (131 - 130) > j)
                            if (a[i][j - (529 - 528)] <= a[i][j] && a[i][j + (659 - 658)] <= a[i][j] && a[i + (267 - 266)][j] <= a[i][j])
                                cout << i << " " << j << endl;
                        if (!(n - 1 != j))
                            if (a[i][j - 1] <= a[i][j] && a[i + 1][j] <= a[i][j])
                                cout << i << " " << j << endl;
                    }
                    if (0 < i && m - 1 > i) {
                        if (!(0 != j))
                            if (a[i - 1][j] <= a[i][j] && a[i + 1][j] <= a[i][j] && a[i][j + 1] <= a[i][j])
                                cout << i << " " << j << endl;
                        if (0 < j && n - 1 > j)
                            if (a[i - 1][j] <= a[i][j] && a[i][j] >= a[i + 1][j] && a[i][j] >= a[i][j - 1] && a[i][j] >= a[i][j + 1])
                                cout << i << " " << j << endl;
                        if (j == n - 1)
                            if (a[i][j] >= a[i - 1][j] && a[i][j] >= a[i + 1][j] && a[i][j] >= a[i][j - 1])
                                cout << i << " " << j << endl;
                    }
                    if (i == m - 1) {
                        if (j == 0)
                            if (a[i][j] >= a[i - 1][j] && a[i][j] >= a[i][j + 1])
                                cout << i << " " << j << endl;
                        if (j > 0 && j < n - 1)
                            if (a[i][j] >= a[i][j - 1] && a[i][j] >= a[i][j + 1] && a[i][j] >= a[i - 1][j])
                                cout << i << " " << j << endl;
                        if (j == n - 1)
                            if (a[i][j] >= a[i][j - 1] && a[i][j] >= a[i - 1][j])
                                cout << i << " " << j << endl;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    return 0;
}

