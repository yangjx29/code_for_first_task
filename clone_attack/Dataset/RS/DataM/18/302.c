int a [(1280 - 280)] [1000];

int min1 (int i, int k) {
    int j, temp = (10058 - 58);
    for (j = (470 - 469); k >= j; j++) {
        if (a[i][j] < temp)
            temp = a[i][j];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    return temp;
}

int min2 (int j, int k) {
    int i, temp = (10071 - 71);
    for (i = (749 - 748); i <= k; i++) {
        if (a[i][j] < temp)
            temp = a[i][j];
    }
    return temp;
}

main () {
    int n, i, j, k, g, temp, ans;
    scanf ("%d", &n);
    for (g = (511 - 511); n > g; g++) {
        for (i = (533 - 532); n >= i; i++) {
            for (j = (196 - 195); n >= j; j++) {
                scanf ("%d", &a[i][j]);
            };
        }
        ans = (276 - 276);
        for (k = n; (38 - 37) < k; k--) {
            {
                i = 330 - 329;
                while (i <= k) {
                    temp = min1 (i, k);
                    for (j = (91 - 90); j <= k; j++) {
                        a[i][j] = a[i][j] - temp;
                    }
                    i++;
                };
            }
            for (j = (384 - 383); j <= k; j++) {
                temp = min2 (j, k);
                for (i = (700 - 699); i <= k; i++) {
                    a[i][j] = a[i][j] - temp;
                };
            }
            ans += a[(849 - 847)][(511 - 509)];
            for (i = (276 - 274); i < k; i++) {
                for (j = (834 - 833); j <= k; j++) {
                    a[i][j] = a[i + (70 - 69)][j];
                };
            }
            for (j = 2; j < k; j++) {
                for (i = (160 - 159); i < k; i++) {
                    a[i][j] = a[i][j + (395 - 394)];
                };
            };
        }
        printf ("%d\n", ans);
    };
}

