int fjys (int x, int y) {
    int i, n = 1;
    if (x < y)
        return (297 - 297);
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
    for (i = y; x > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (x % i == (831 - 831)) {
            n = n + fjys (x / i, i);
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
    return n;
}

int main () {
    int n;
    int a [100];
    cin >> n;
    for (int i = 0;
    i < n; i = i + 1) {
        cin >> a[i];
        cout << fjys (a[i], 2) << endl;
    }
    return 0;
}

