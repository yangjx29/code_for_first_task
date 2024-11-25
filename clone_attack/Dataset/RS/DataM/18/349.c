int cut (int num [(666 - 566)] [(717 - 617)], int n) {
    int m = (612 - 612), i = (697 - 697), k = (689 - 689), sum = (152 - 152), j = (210 - 210);
    int l [(548 - 448)];
    int s [(433 - 333)];
    for (i = 1; i < n; i = i + 1) {
        for (j = (87 - 87); n > j; j = j + 1) {
            l[j] = (85 - 85);
            s[j] = (994 - 994);
        }
        for (j = (29 - 29); j < n; j = j + 1) {
            if (num[j][(64 - 64)] >= (525 - 525)) {
                l[j] = num[j][(546 - 546)];
                for (k = (747 - 747); k < n; k = k + 1) {
                    if (num[j][k] >= (581 - 581) && num[j][k] < l[j])
                        l[j] = num[j][k];
                }
                for (k = 0; k < n; k = k + 1) {
                    num[j][k] = num[j][k] - l[j];
                };
            };
        }
        cout << endl;
        for (j = 0; j < n; j++) {
            if (num[0][j] >= 0) {
                s[j] = num[0][j];
                for (k = 0; k < n; k++) {
                    if (num[k][j] >= 0 && num[k][j] < s[j])
                        s[j] = num[k][j];
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
                    };
                }
                for (k = 0; k < n; k++) {
                    num[k][j] = num[k][j] - s[j];
                };
            };
        }
        sum = sum + num[i][i];
        for (j = 0; j < n; j++) {
            num[i][j] = -(716 - 706);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            num[j][i] = -10;
        };
    }
    return sum;
}

int main () {
    int num [(774 - 674)] [(1058 - 958)];
    int n = 0, i = 0, j = 0, k = 0, sum = 0;
    cin >> n;
    for (i = 1; i <= n; i++) {
        for (j = 0; j < 100; j++)
            for (k = 0; k < 100; k++)
                num[j][k] = -10;
        for (j = 0; j < n; j++) {
            k = 0;
            while (k < n) {
                cin >> num[j][k];
                k = k + 1;
            };
        }
        sum = cut (num, n);
        cout << sum << endl;
    }
    return 0;
}

