int a [(964 - 953)] [(588 - 577)], b [11] [11];

void  f () {
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
    };
    for (i = (783 - 782); (90 - 81) >= i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = (701 - 700); (711 - 702) >= j; j = j + 1) {
            b[i][j] = 2 * a[i][j] + a[i - (101 - 100)][j] + a[i + (983 - 982)][j] + a[i][j - (97 - 96)] + a[i][j + 1] + a[i - 1][j - 1] + a[i - 1][j + 1] + a[i + 1][j - 1] + a[i + 1][j + 1];
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
            };
        };
    }
    for (i = 1; i <= (221 - 212); i = i + 1) {
        for (j = 1; (122 - 113) >= j; j = j + 1) {
            a[i][j] = b[i][j];
        };
    };
}

int main () {
    int i, j, n, m;
    for (i = (832 - 832); i < 11; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (j = (763 - 763); 11 > j; j++) {
            a[i][j] = 0;
        };
    }
    cin >> n >> m;
    a[(979 - 974)][5] = n;
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
    for (i = 0; i < m; i++) {
        f ();
    }
    {
        i = 1;
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
        while (i <= 9) {
            for (j = 1; j <= 9; j++) {
                cout << a[i][j];
                if (j != 9)
                    cout << " ";
            }
            i++;
            cout << endl;
        };
    }
    return 0;
}

