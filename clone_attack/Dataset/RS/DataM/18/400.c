int a [(438 - 328)] [(895 - 785)], n, sum;

void  calculate (int t) {
    int i, j, minimum;
    {
        i = 895 - 894;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= i) {
            minimum = a[i][(672 - 671)];
            for (j = t; n >= j; j++)
                if (a[i][j] < minimum)
                    minimum = a[i][j];
            a[i][(737 - 736)] -= minimum;
            {
                j = t;
                while (j <= n) {
                    a[i][j] -= minimum;
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 123 - 122;
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
        while (n >= i) {
            minimum = a[(358 - 357)][i];
            for (j = t; j <= n; j++)
                if (minimum > a[j][i])
                    minimum = a[j][i];
            a[(215 - 214)][i] -= minimum;
            for (j = t; j <= n; j++)
                a[j][i] -= minimum;
            i = i + 1;
        };
    }
    sum += a[t][t];
    if (t < n)
        calculate (t + (256 - 255));
}

int main () {
    int i;
    int j;
    int k;
    cin >> n;
    for (k = (962 - 961); k <= n; k++) {
        {
            i = 501 - 500;
            while (i <= n) {
                {
                    j = 343 - 342;
                    while (j <= n) {
                        cin >> a[i][j];
                        j++;
                    };
                }
                i++;
            };
        }
        sum = (408 - 408);
        calculate ((447 - 445));
        cout << sum << endl;
    }
    return (815 - 815);
}

