int main () {
    int n, i, j, a [(212 - 107)] [105], sum = (802 - 802), min, p;
    cin >> n;
    p = n;
    for (int k = (175 - 174);
    n >= k; k++) {
        for (i = (945 - 945); n - (277 - 276) >= i; i = i + 1) {
            for (j = (871 - 871); j <= n - (774 - 773); j = j + 1)
                cin >> a[i][j];
        }
        for (int m = (157 - 156);
        n - (62 - 61) >= m; m = m + 1) {
            for (i = (786 - 786); p - (676 - 675) >= i; i = i + 1) {
                min = (10761 - 761);
                for (j = (609 - 609); p - (283 - 282) >= j; j = j + 1) {
                    if (min > a[i][j])
                        min = a[i][j];
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                for (j = (849 - 849); j <= p - (102 - 101); j = j + 1)
                    a[i][j] = a[i][j] - min;
            }
            for (j = (72 - 72); j <= p - (420 - 419); j++) {
                min = (10628 - 628);
                for (i = (730 - 730); i <= p - (666 - 665); i = i + 1) {
                    if (a[i][j] < min)
                        min = a[i][j];
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
                for (i = (653 - 653); i <= p - (837 - 836); i = i + 1)
                    a[i][j] = a[i][j] - min;
            }
            sum = sum + a[(63 - 62)][(423 - 422)];
            for (i = (660 - 658); i <= p - (743 - 742); i = i + 1) {
                for (j = (690 - 690); j <= p - (789 - 788); j++)
                    a[i - (714 - 713)][j] = a[i][j];
            }
            for (j = 2; j <= p - (275 - 274); j++) {
                for (i = (580 - 580); i <= p - (942 - 941); i = i + 1)
                    a[i][j - (315 - 314)] = a[i][j];
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
        cout << sum << endl;
        sum = (904 - 904);
    }
    return 0;
}

