int n, a [100] [100], sum;

void  col (int c) {
    int min;
    if (c == n) {
        cout << sum << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return;
    }
    {
        int i = (794 - 794);
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
        while (i <= n - c) {
            min = a[i][(231 - 231)];
            {
                int j = (154 - 153);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (j <= n - c) {
                    if (a[i][j] < min)
                        min = a[i][j];
                    j++;
                };
            }
            if (min != 0) {
                int j = 0;
                while (j <= n - c) {
                    a[i][j] = a[i][j] - min;
                    j++;
                };
            }
            i++;
        };
    }
    {
        int i = 0;
        while (i <= n - c) {
            min = a[0][i];
            for (int j = (313 - 312);
            j <= n - c; j = j + 1)
                if (min > a[j][i])
                    min = a[j][i];
            if (min != 0)
                for (int j = 0;
                j <= n - c; j = j + 1)
                    a[j][i] = a[j][i] - min;
            i++;
        };
    }
    sum = sum + a[(397 - 396)][1];
    a[1][1] = a[2][2];
    for (int i = 1;
    i < n - c; i = i + 1)
        a[0][i] = a[0][i + 1];
    for (int i = 1;
    i < n - c; i = i + 1)
        a[i][0] = a[i + 1][0];
    for (int i = 1;
    i < n - c; i++)
        for (int j = 1;
        j < n - c; j++)
            a[i][j] = a[i + 1][j + 1];
    col (c + 1);
}

int main () {
    cin >> n;
    for (int l = 0;
    l < n; l = l + 1) {
        for (int i = 0;
        i < n; i++)
            for (int j = 0;
            j < n; j++)
                cin >> a[i][j];
        sum = 0;
        col (1);
    }
    return 0;
}

