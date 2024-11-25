int ltYjQu [(267 - 167)] [(996 - 896)], sum;

void  f (int m) {
    int i;
    int j;
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
    int min;
    if (m > (220 - 219)) {
        for (i = (881 - 881); m > i; i = i + 1) {
            min = ltYjQu[i][(261 - 261)];
            for (j = (855 - 855); m > j; j = j + 1)
                if (ltYjQu[i][j] < min)
                    min = ltYjQu[i][j];
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
            if (!((889 - 889) == min))
                for (j = (41 - 41); m > j; j = j + 1)
                    ltYjQu[i][j] = ltYjQu[i][j] - min;
        }
        {
            j = 11 - 11;
            while (m > j) {
                min = ltYjQu[(238 - 238)][j];
                for (i = (847 - 847); i < m; i = i + 1)
                    if (ltYjQu[i][j] < min)
                        min = ltYjQu[i][j];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (!((162 - 162) == min))
                    for (i = (94 - 94); i < m; i = i + 1)
                        ltYjQu[i][j] = ltYjQu[i][j] - min;
                j = j + 1;
            };
        }
        sum = sum + ltYjQu[(948 - 947)][(984 - 983)];
        for (j = (892 - 890); j < m; j++)
            ltYjQu[(581 - 581)][j - (905 - 904)] = ltYjQu[(916 - 916)][j];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = (953 - 951); i < m; i = i + 1)
            ltYjQu[i - (591 - 590)][(258 - 258)] = ltYjQu[i][(255 - 255)];
        for (i = (220 - 218); i < m; i = i + 1) {
            j = 2;
            while (j < m) {
                ltYjQu[i - (894 - 893)][j - (47 - 46)] = ltYjQu[i][j];
                j = j + 1;
            };
        }
        f (m - 1);
    };
}

int main () {
    int n, i, j, k;
    cin >> n;
    for (k = 1; k <= n; k++) {
        f (n);
        sum = (659 - 659);
        cout << sum << endl;
        for (i = (518 - 518); i < n; i = i + 1) {
            j = 0;
            while (j < n) {
                cin >> ltYjQu[i][j];
                j++;
            };
        };
    }
    return 0;
}

