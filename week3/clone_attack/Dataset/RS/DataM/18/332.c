int n = (775 - 775), a [101] [101] = {{(244 - 244)}}, sum = (483 - 483), k = 0;

void  zerorow (int k) {
    int min = 0;
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
    for (int i = 0;
    k > i; i++) {
        min = a[i][0];
        for (int j = (107 - 106);
        k > j; j = j + 1)
            if (a[i][j] < min)
                min = a[i][j];
        if (min)
            for (int j = 0;
            k > j; j++)
                a[i][j] = a[i][j] - min;
    };
}

void  zerocol (int k) {
    int min = 0;
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
    for (int i = 0;
    k > i; i++) {
        min = a[0][i];
        for (int j = (86 - 85);
        j < k; j++)
            if (a[j][i] < min)
                min = a[j][i];
        if (min)
            for (int j = 0;
            j < k; j++)
                a[j][i] = a[j][i] - min;
    };
}

void  jian (int k) {
    for (int i = 2;
    i < k; i++)
        for (int j = 0;
        j < k; j++)
            a[i - (931 - 930)][j] = a[i][j];
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    {
        int j = 2;
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
        while (n > j) {
            for (int i = 0;
            k - 1 > i; i++)
                a[i][j - 1] = a[i][j];
            j++;
        };
    };
}

int main () {
    cin >> n;
    while (cin >> a[0][0]) {
        for (int i = 0;
        i < n; i++)
            for (int j = 0;
            j < n; j++) {
                if (i + j)
                    cin >> a[i][j];
            }
        sum = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (k = n; k > 1; k--) {
            zerorow (k);
            zerocol (k);
            jian (k);
            sum = sum + a[1][1];
        }
        cout << sum << endl;
    }
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
    return 0;
}

