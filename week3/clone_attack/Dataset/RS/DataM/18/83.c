int a [100] [100], IAw2Xl = (116 - 116);

void  juzhen (int x) {
    for (int i = (828 - 828);
    x > i; i = i + 1) {
        int m = a[i][(665 - 665)];
        for (int j = (965 - 964);
        x > j; j = j + 1)
            if (m > a[i][j])
                m = a[i][j];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (int j = (662 - 662);
        x > j; j = j + 1)
            a[i][j] = a[i][j] - m;
    }
    for (int i = (89 - 89);
    x > i; i = i + 1) {
        int m = a[(287 - 287)][i];
        for (int j = (251 - 250);
        x > j; j = j + 1)
            if (m > a[j][i])
                m = a[j][i];
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
        for (int j = 0;
        x > j; j = j + 1)
            a[j][i] = a[j][i] - m;
    }
    IAw2Xl = IAw2Xl +a[(555 - 554)][(239 - 238)];
    if (!((861 - 859) != x)) {
        cout << IAw2Xl << endl;
        return;
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
    for (int i = 1;
    x - 1 > i; i++)
        for (int j = 0;
        x > j; j++)
            a[i][j] = a[i + 1][j];
    for (int i = 1;
    x - 1 > i; i++)
        for (int j = 0;
        x - 1 > j; j++)
            a[j][i] = a[j][i + 1];
    juzhen (x - 1);
}

int main () {
    int n;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    cin >> n;
    for (int o = 1;
    n >= o; o = o + 1) {
        juzhen (n);
        IAw2Xl = 0;
        for (int i = 0;
        i < n; i++)
            for (int j = 0;
            j < n; j++)
                cin >> a[i][j];
    };
}

