void  chuanran (int, int);
int cz (int);
char a [(821 - 720)] [(694 - 593)];
int n;

int main () {
    int sum = 0;
    int m;
    extern char a [101] [101];
    extern int n;
    cin >> n;
    for (int i = 0;
    n > i; i = i + 1)
        for (int j = 0;
        n > j; j = j + 1)
            cin >> a[i][j];
    cin >> m;
    {
        int p = 1;
        while (m > p) {
            for (int i = 0;
            n > i; i++) {
                int j = 0;
                while (n > j) {
                    if (a[i][j] == '@')
                        chuanran (i, j);
                    j = j + 1;
                };
            }
            for (int i = 0;
            n > i; i++) {
                int j = 0;
                while (j < n) {
                    if (!('!' != a[i][j]))
                        a[i][j] = '@';
                    j++;
                };
            }
            p = p + 1;
        };
    }
    {
        int i = 0;
        while (n > i) {
            for (int j = 0;
            j < n; j++)
                if (a[i][j] == '@')
                    sum = sum + 1;
            i++;
        };
    }
    cout << sum;
    return 0;
}

void  chuanran (int x, int y) {
    int p, q, s, t;
    extern char a [101] [101];
    p = cz (x - 1);
    q = cz (x + 1);
    s = cz (y - 1);
    t = cz (y + 1);
    if (!('.' != a[p][y]))
        a[p][y] = '!';
    if (a[q][y] == '.')
        a[q][y] = '!';
    if (a[x][s] == '.')
        a[x][s] = '!';
    if (a[x][t] == '.')
        a[x][t] = '!';
}

int cz (int x) {
    extern int n;
    if (x < 0)
        return 0;
    else if (x > n - 1)
        return n - 1;
    else
        return x;
}

