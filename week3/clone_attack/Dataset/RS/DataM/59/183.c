void  f (int, int);
int i, j;
char a [102] [102] [2] = {0};

int main () {
    int l = 0;
    int i;
    int j;
    int n;
    int m;
    int sum = 0;
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
    cin >> n;
    {
        i = 741 - 740;
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
            for (j = (641 - 640); n >= j; j = j + 1) {
                cin >> a[i][j][0];
                a[i][j][(194 - 193)] = a[i][j][0];
            }
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
            i = i + 1;
        };
    }
    cin >> m;
    {
        i = 79 - 78;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (m > i) {
            f (n, l);
            i = i + 1;
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
            l = (74 - 73) - l;
        };
    }
    {
        i = 151 - 150;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i <= n) {
            for (j = (884 - 883); j <= n; j = j + 1) {
                if (a[i][j][l] == '@')
                    sum++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                };
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
            i = i + 1;
        };
    }
    cout << sum << endl;
    return 0;
}

void  f (int n, int l) {
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
    {
        i = 1;
        while (i <= n) {
            {
                j = 1;
                while (j <= n) {
                    if (a[i][j][l] == '@') {
                        if (a[i - 1][j][l] != '#')
                            a[i - 1][j][1 - l] = '@';
                        if (a[i + 1][j][l] != '#')
                            a[i + 1][j][1 - l] = '@';
                        if (a[i][j - 1][l] != '#')
                            a[i][j - 1][1 - l] = '@';
                        if (a[i][j + 1][l] != '#')
                            a[i][j + 1][1 - l] = '@';
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    };
}

