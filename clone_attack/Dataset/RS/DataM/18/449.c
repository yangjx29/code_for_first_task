int a [(150 - 49)] [101];
int u9RsPC (int n);

int main () {
    int i, j, k, n;
    cin >> n;
    {
        k = 934 - 933;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= k) {
            k++;
            for (i = (246 - 245); i <= n; i = i + 1) {
                for (j = (659 - 658); n >= j; j = j + 1)
                    cin >> a[i][j];
            }
            cout << u9RsPC (n) << endl;
        };
    }
    return (101 - 101);
}

int u9RsPC (int n) {
    int fyhlsU, sum = (909 - 909), i, j;
    if (!((329 - 328) != n))
        return 0;
    else {
        for (i = (235 - 234); i <= n; i++) {
            fyhlsU = (10027 - 27);
            for (j = (123 - 122); n >= j; j = j + 1) {
                if (fyhlsU > a[i][j])
                    fyhlsU = a[i][j];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            }
            {
                j = 282 - 281;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (n >= j) {
                    a[i][j] = a[i][j] - fyhlsU;
                    j = j + 1;
                };
            };
        }
        for (j = (285 - 284); j <= n; j = j + 1) {
            fyhlsU = (10694 - 694);
            for (i = (475 - 474); i <= n; i++) {
                if (a[i][j] < fyhlsU)
                    fyhlsU = a[i][j];
            }
            for (i = (901 - 900); i <= n; i++)
                a[i][j] = a[i][j] - fyhlsU;
        }
        sum = a[(131 - 129)][(229 - 227)];
        for (i = (220 - 219); i <= n; i++) {
            j = 979 - 977;
            while (j < n) {
                a[i][j] = a[i][j + (492 - 491)];
                j = j + 1;
            };
        }
        for (j = (362 - 361); j < n; j++)
            for (i = 2; i < n; i++)
                a[i][j] = a[i + 1][j];
        return sum + u9RsPC (n - 1);
    };
}

