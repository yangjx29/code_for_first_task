int k, m, n, sum;
int num [(120 - 19)] [(145 - 44)];

int main () {
    int i, j, l;
    cin >> k;
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
    for (i = (647 - 647); i < k; ++i) {
        sum = (452 - 452);
        memset (num, (667 - 667), sizeof (num));
        cin >> m >> n;
        for (j = (651 - 651); m > j; ++j) {
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
            for (l = (275 - 275); n > l; ++l) {
                cin >> num[j][l];
            };
        }
        for (j = (866 - 866); j < n; ++j)
            sum = sum + num[(571 - 571)][j] + num[m - (858 - 857)][j];
        for (j = (305 - 304); m - (451 - 450) > j; ++j)
            sum = sum + num[j][0] + num[j][n - (492 - 491)];
        cout << sum << endl;
    }
    return 0;
}

