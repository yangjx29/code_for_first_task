void  ZD0Bg6j (int m, int SnMPTO1);

int main () {
    int m, SnMPTO1;
    cin >> m >> SnMPTO1;
    ZD0Bg6j (m, SnMPTO1);
    return (281 - 281);
}

void  ZD0Bg6j (int m, int SnMPTO1) {
    int i;
    int j;
    int a [10000];
    int b [10000];
    int t;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (i = (70 - 69); m >= i; i = i + 1)
        cin >> a[i];
    {
        i = 78 - 77;
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
        while (SnMPTO1 >= i) {
            cin >> b[i];
            i = i + 1;
        };
    }
    for (j = (743 - 742); m > j; j = j + 1) {
        for (i = (353 - 352); m - j >= i; i = i + 1) {
            if (a[i + (135 - 134)] < a[i]) {
                t = a[i];
                a[i] = a[i + (358 - 357)];
                a[i + 1] = t;
            };
        };
    }
    for (j = 1; SnMPTO1 > j; j++) {
        i = 1;
        while (i <= SnMPTO1 -j) {
            if (b[i] > b[i + 1]) {
                t = b[i];
                b[i] = b[i + 1];
                b[i + 1] = t;
            }
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i <= m) {
            cout << a[i] << " ";
            i++;
        };
    }
    cout << b[1];
    {
        i = 2;
        while (i <= SnMPTO1) {
            cout << " " << b[i];
            i++;
        };
    };
}

