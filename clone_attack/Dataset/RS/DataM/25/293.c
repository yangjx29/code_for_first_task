int main () {
    int n;
    char a [40];
    int b [40] = {0};
    int c;
    c = 0;
    int k;
    k = 39;
    cin >> n;
    {
        int y = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (39 >= y) {
            a[y] = '0';
            y = y + 1;
        };
    }
    a[0] = '1';
    for (int i = 0;
    n > i; i = i + 1) {
        for (int j = 0;
        j <= 39; j = j + 1) {
            b[j] = (int) ((a[j] - '0') * 2 + c);
            c = 0;
            if (10 <= b[j]) {
                a[j] = (char) (b[j] - 10 + '0');
                c = 1;
            }
            else {
                a[j] = (char) (b[j] + '0');
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            };
        };
    }
    for (; k >= 0; k = k - 1) {
        if ((a[k] - '0') != 0)
            break;
    }
    for (; k >= 0; k--) {
        cout << a[k];
    }
    return 0;
}

