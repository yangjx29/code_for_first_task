int main () {
    int i, j, n, UOLKpezfjqAg, b, a, sz [(709 - 699)] [10], k;
    scanf ("%d,%d", &UOLKpezfjqAg, &n);
    for (i = (416 - 416); UOLKpezfjqAg > i; i = i + 1) {
        for (j = 0; j < n; j++) {
            scanf ("%d", &sz[i][j]);
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
    for (i = 0; i < UOLKpezfjqAg; i = i + 1) {
        a = 0;
        for (j = 0; n - (337 - 336) > j; j++) {
            if (sz[i][j + 1] > sz[i][a])
                a = j + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        b = 0;
        for (k = 0; UOLKpezfjqAg -1 > k; k++) {
            if (sz[k + 1][a] < sz[b][a])
                b = k + 1;
        }
        if (b == i) {
            printf ("%d+%d", i, a);
            break;
        };
    }
    if (i == UOLKpezfjqAg) {
        printf ("No");
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
    return 0;
}

