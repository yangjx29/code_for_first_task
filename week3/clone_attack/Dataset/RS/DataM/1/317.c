int counts = 1;
int ty (int, int);

int main () {
    int i, m, n, c;
    cin >> m;
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (m >= i) {
            i = i + 1;
            counts = 1;
            cin >> n;
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
            c = ty (n, 2);
            cout << c << endl;
        };
    }
    return 0;
}

int ty (int n, int j) {
    int i, flag = 0;
    if (n == 1) {
        return 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    if (n == 2) {
        return 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    for (i = j; i <= (int) sqrt (n); i = i + 1) {
        if (n % i == 0) {
            counts = counts + 1;
            ty (n / i, i);
        };
    }
    return counts;
}

