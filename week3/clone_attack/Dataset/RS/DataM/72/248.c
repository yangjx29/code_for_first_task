int main () {
    int K8QkJhOWtUD;
    int rRo0K9M;
    int i;
    int x13RybMVdB7;
    int a [20] [20];
    cin >> K8QkJhOWtUD >> rRo0K9M;
    for (i = (421 - 421); K8QkJhOWtUD > i; i++) {
        x13RybMVdB7 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (rRo0K9M > x13RybMVdB7) {
            cin >> a[i][x13RybMVdB7];
            x13RybMVdB7++;
        };
    }
    for (i = 0; i < K8QkJhOWtUD; i++)
        for (x13RybMVdB7 = 0; x13RybMVdB7 < rRo0K9M; x13RybMVdB7++) {
            if (i != 0 && i != K8QkJhOWtUD -(701 - 700) && !(0 == x13RybMVdB7) && !(rRo0K9M - 1 == x13RybMVdB7)) {
                if (a[i][x13RybMVdB7] >= a[i + 1][x13RybMVdB7] && a[i][x13RybMVdB7] >= a[i - 1][x13RybMVdB7] && a[i][x13RybMVdB7 - 1] <= a[i][x13RybMVdB7] && a[i][x13RybMVdB7] >= a[i][x13RybMVdB7 + 1])
                    cout << i << ' ' << x13RybMVdB7 << endl;
            }
            if (i == 0 && x13RybMVdB7 != 0 && x13RybMVdB7 != rRo0K9M - 1) {
                if (a[i][x13RybMVdB7] >= a[i + 1][x13RybMVdB7] && a[i][x13RybMVdB7 - 1] <= a[i][x13RybMVdB7] && a[i][x13RybMVdB7] >= a[i][x13RybMVdB7 + 1])
                    cout << i << ' ' << x13RybMVdB7 << endl;
            }
            if (i == K8QkJhOWtUD -1 && x13RybMVdB7 != 0 && x13RybMVdB7 != rRo0K9M - 1) {
                if (a[i][x13RybMVdB7] >= a[i - 1][x13RybMVdB7] && a[i][x13RybMVdB7] >= a[i][x13RybMVdB7 - 1] && a[i][x13RybMVdB7] >= a[i][x13RybMVdB7 + 1])
                    cout << i << ' ' << x13RybMVdB7 << endl;
            }
            if (x13RybMVdB7 == 0 && i != 0 && i != K8QkJhOWtUD -1) {
                if (a[i][x13RybMVdB7] >= a[i + 1][x13RybMVdB7] && a[i][x13RybMVdB7] >= a[i - 1][x13RybMVdB7] && a[i][x13RybMVdB7] >= a[i][x13RybMVdB7 + 1])
                    cout << i << ' ' << x13RybMVdB7 << endl;
            }
            if (x13RybMVdB7 == rRo0K9M - 1 && i != 0 && i != K8QkJhOWtUD -1) {
                if (a[i][x13RybMVdB7] >= a[i + 1][x13RybMVdB7] && a[i][x13RybMVdB7] >= a[i - 1][x13RybMVdB7] && a[i][x13RybMVdB7] >= a[i][x13RybMVdB7 - 1])
                    cout << i << ' ' << x13RybMVdB7 << endl;
            }
            if (i == 0 && x13RybMVdB7 == 0) {
                if (a[i][x13RybMVdB7] >= a[i + 1][x13RybMVdB7] && a[i][x13RybMVdB7] >= a[i][x13RybMVdB7 + 1])
                    cout << i << ' ' << x13RybMVdB7 << endl;
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
            if (i == 0 && x13RybMVdB7 == rRo0K9M - 1) {
                if (a[i][x13RybMVdB7] >= a[i + 1][x13RybMVdB7] && a[i][x13RybMVdB7] >= a[i][x13RybMVdB7 - 1])
                    cout << i << ' ' << x13RybMVdB7 << endl;
            }
            if (x13RybMVdB7 == 0 && i == K8QkJhOWtUD -1) {
                if (a[i][x13RybMVdB7] >= a[i - 1][x13RybMVdB7] && a[i][x13RybMVdB7] >= a[i][x13RybMVdB7 + 1])
                    cout << i << ' ' << x13RybMVdB7 << endl;
            }
            if (x13RybMVdB7 == rRo0K9M - 1 && i == K8QkJhOWtUD -1) {
                if (a[i][x13RybMVdB7] >= a[i - 1][x13RybMVdB7] && a[i][x13RybMVdB7] >= a[i][x13RybMVdB7 - 1])
                    cout << i << ' ' << x13RybMVdB7 << endl;
            };
        }
    return 0;
}

