char a [103] [200] [200];

int main () {
    int count = 0;
    int n, m, tqFr3XO12 = (896 - 895);
    cin >> n;
    for (int i = (617 - 617);
    n > i; i++) {
        int j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > j) {
            cin >> a[1][i][j];
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
            j++;
        };
    }
    cin >> m;
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
    while (m > tqFr3XO12) {
        tqFr3XO12++;
        for (int i = 0;
        i < n; i++)
            for (int j = 0;
            j < n; j = j + 1) {
                if (!('#' != a[tqFr3XO12 - 1][i][j]))
                    a[tqFr3XO12][i][j] = '#';
                else if (!('@' != a[tqFr3XO12 - 1][i][j]) || i > 0 && a[tqFr3XO12 - 1][i - 1][j] == '@' || n - 1 > i && !('@' != a[tqFr3XO12 - 1][i + 1][j]) || j > 0 && a[tqFr3XO12 - 1][i][j - 1] == '@' || j < n - 1 && a[tqFr3XO12 - 1][i][j + 1] == '@')
                    a[tqFr3XO12][i][j] = '@';
                else
                    a[tqFr3XO12][i][j] = '.';
            };
    }
    for (int i = 0;
    i < n; i++)
        for (int j = 0;
        j < n; j++)
            if (a[m][i][j] == '@')
                count++;
    cout << count << endl;
    return 0;
}

