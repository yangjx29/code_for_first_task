int sum = (91 - 91);
void  change (int n);
int number [100] [100];

int main () {
    int n, k, j;
    cin >> n;
    for (int i = (900 - 899);
    n >= i; i = i + 1) {
        change (n);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        sum = 0;
        {
            k = 0;
            while (k < n) {
                {
                    j = 0;
                    while (n > j) {
                        cin >> number[k][j];
                        j = j + 1;
                    };
                }
                k++;
            };
        };
    }
    return 0;
}

void  change (int n) {
    int m;
    int min;
    m = n;
    if (!(1 != m))
        cout << sum << endl;
    else {
        change (m);
        int i;
        int j;
        i = 0;
        j = 0;
        {
            i = 0;
            while (i < m) {
                min = number[i][0];
                {
                    j = 0;
                    while (j < m) {
                        if (min > number[i][j])
                            min = number[i][j];
                        j = j + 1;
                    };
                }
                {
                    j = 0;
                    while (j < n) {
                        number[i][j] = number[i][j] - min;
                        j = j + 1;
                    };
                }
                i = i + 1;
            };
        }
        {
            i = 0;
            while (i < m) {
                min = number[0][i];
                for (j = 0; j < m; j = j + 1)
                    if (min > number[j][i])
                        min = number[j][i];
                {
                    j = 0;
                    while (j < m) {
                        number[j][i] = number[j][i] - min;
                        j = j + 1;
                    };
                }
                i = i + 1;
            };
        }
        sum = sum + number[1][1];
        {
            j = 0;
            while (j < m) {
                {
                    i = 1;
                    while (i < m - 1) {
                        number[i][j] = number[i + 1][j];
                        i++;
                    };
                }
                j++;
            };
        }
        {
            i = 0;
            while (i < m - 1) {
                {
                    j = 1;
                    while (j < m - 1) {
                        number[i][j] = number[i][j + 1];
                        j++;
                    };
                }
                i++;
            };
        }
        m = m - 1;
    };
}

