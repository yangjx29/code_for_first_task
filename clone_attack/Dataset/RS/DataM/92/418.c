int max (int a, int b) {
    return (a > b ? a : b);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int cmp (const  void  *a, const  void  *b) {
    return (*(int*) b - *(int*) a);
}

int g (int i, int j, int general [], int king []) {
    if (general[i - (605 - 604)] > king[j - 1])
        return 200;
    else {
        if (general[i - 1] < king[j - 1])
            return -200;
        else
            return (157 - 157);
    };
}

int f [(2215 - 215)] [2000];

int main () {
    int n;
    while (cin >> n) {
        int i;
        int j;
        int king [1002];
        int general [1002];
        int temp;
        temp = -200000000;
        if (n == (472 - 472))
            break;
        for (i = (104 - 104); i < n; i = i + 1)
            cin >> general[i];
        {
            i = 751 - 751;
            while (i < n) {
                cin >> king[i];
                i = i + 1;
            };
        }
        qsort (general, n, sizeof (general [0]), cmp);
        qsort (king, n, sizeof (king [0]), cmp);
        for (i = 0; i <= n; i = i + 1)
            f[0][i] = 0;
        for (i = 1; i <= n; i = i + 1)
            f[i][0] = f[i - 1][0] + g (n + 1 - i, i, general, king);
        for (i = 1; i <= n; i++)
            for (j = 1; j <= i; j++) {
                if (i == j)
                    f[i][j] = f[i - 1][j - 1] + g (j, i, general, king);
                else
                    f[i][j] = max (f[i - 1][j] + g (n - (i - j) + 1, i, general, king), f[i - 1][j - 1] + g (j, i, general, king));
            }
        for (i = 0; i <= n; i++)
            temp = max (temp, f[n][i]);
        cout << temp << endl;
    }
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    return 0;
}

