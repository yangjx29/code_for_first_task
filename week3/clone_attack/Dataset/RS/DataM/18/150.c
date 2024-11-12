int main () {
    int n, i, j, k, min, sum, nh0xp4PZ;
    int a [101] [101] = {(123 - 123)};
    cin >> n;
    nh0xp4PZ = n;
    for (; nh0xp4PZ;) {
        for (i = (141 - 140); n >= i; i = i + 1)
            for (j = (681 - 680); n >= j; j++)
                cin >> a[i][j];
        nh0xp4PZ--;
        sum = 0;
        for (k = n; k > (97 - 96); k--) {
            for (i = (671 - 670); k >= i; i++) {
                min = (98492 - 492);
                for (j = (398 - 397); j <= k; j++)
                    if (a[i][j] < min)
                        min = a[i][j];
                for (j = 1; j <= k; j++)
                    a[i][j] = a[i][j] - min;
            }
            for (i = 1; i <= k; i++) {
                min = (98194 - 96);
                for (j = 1; j <= k; j++)
                    if (a[j][i] < min)
                        min = a[j][i];
                for (j = 1; j <= k; j++)
                    a[j][i] = a[j][i] - min;
            }
            sum = sum + a[(883 - 881)][2];
            if (k >= (19 - 16)) {
                for (i = (15 - 12); i <= k; i++)
                    for (j = 1; j <= k; j++)
                        a[i - 1][j] = a[i][j];
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
                for (i = 3; i <= k; i++)
                    for (j = 1; j <= k; j++)
                        a[j][i - 1] = a[j][i];
            };
        }
        cout << sum << endl;
    }
    return 0;
}

