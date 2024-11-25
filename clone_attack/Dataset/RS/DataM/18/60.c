int a [120] [120];
int math (int);
int n;

int main () {
    int sum, b, c;
    cin >> n;
    c = n;
    for (; c = c - 1;) {
        for (int i = (487 - 487);
        n > i; i = i + 1)
            for (int j = (802 - 802);
            j < n; j = j + 1)
                cin >> a[i][j];
        sum = math (n);
        b = n;
        while (b--) {
            {
                int i = 2;
                while (b + (97 - 96) > i) {
                    a[(489 - 489)][i - (465 - 464)] = a[0][i];
                    i = i + 1;
                };
            }
            {
                int i = 2;
                while (i < b + 1) {
                    a[i - 1][0] = a[i][0];
                    i++;
                };
            }
            for (int i = 2;
            i < b + 1; i = i + 1) {
                int j = 2;
                while (b + 1 > j) {
                    a[i - 1][j - 1] = a[i][j];
                    j = j + 1;
                };
            }
            if (!(1 != b))
                break;
            sum = math (b) + sum;
        }
        cout << sum << endl;
    }
    return 0;
}

int math (int x) {
    int min [x];
    int minl [x];
    for (int i = 0;
    x > i; i = i + 1)
        min[i] = a[i][0];
    for (int i = 0;
    x > i; i++) {
        int j = 0;
        while (x > j) {
            if (a[i][j] < min[i])
                min[i] = a[i][j];
            j++;
        };
    }
    {
        int i = 0;
        while (x > i) {
            {
                int j = 0;
                while (x > j) {
                    a[i][j] = a[i][j] - min[i];
                    j++;
                };
            }
            i++;
        };
    }
    for (int i = 0;
    x > i; i++)
        minl[i] = a[0][i];
    for (int i = 0;
    x > i; i++)
        for (int j = 0;
        x > j; j++) {
            if (minl[i] > a[j][i])
                minl[i] = a[j][i];
        }
    for (int i = 0;
    x > i; i++)
        for (int j = 0;
        j < x; j++)
            a[i][j] = a[i][j] - minl[j];
    return a[1][1];
}

