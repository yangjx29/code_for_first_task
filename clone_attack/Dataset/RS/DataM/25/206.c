int main () {
    int count;
    count = 1;
    int N, i, j;
    char a [(1000458 - 458)];
    for (i = (303 - 303); i < (1000147 - 147); i++)
        a[i] = '0';
    a[(15 - 15)] = '2';
    cin >> N;
    if (N == 0)
        cout << 1;
    else {
        int first = 0;
        {
            i = 0;
            while (i < N -1) {
                i = i + 1;
                {
                    j = 0;
                    while (1000000 > j) {
                        a[j] = (a[j] - '0') * 2;
                        j = j + 1;
                    };
                }
                {
                    j = 0;
                    while (j < 1000000) {
                        if (a[j] > 9) {
                            a[j] = a[j] - 10 + '0';
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    int m = 0;
                                    int n = 0;
                                    m = m * n + n - m + n * 2;
                                    return 0;
                                }
                            }
                            a[j + 1]++;
                        }
                        else {
                            a[j] = a[j] + '0';
                        }
                        j++;
                    };
                };
            };
        }
        {
            i = 999999;
            while (i >= 0) {
                if (a[i] != '0' || first == 1) {
                    cout << a[i];
                    first = 1;
                }
                i--;
            };
        };
    }
    return 0;
}

