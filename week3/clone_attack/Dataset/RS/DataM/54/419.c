int IuJvE0K (int n, int k) {
    int a [n + (161 - 160)];
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
    a[n] = n + k;
    for (; 1;) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (int i = n;
        1 < i; i = i - 1) {
            if (a[i] % (n - 1) != 0) {
                a[n] += n;
                break;
            }
            a[i - 1] = a[i] / (n - 1) * n + k;
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
            if (i == 2)
                return a[1];
        };
    };
}

int main () {
    int n, k;
    cin >> n >> k;
    cout << IuJvE0K (n, k);
    return 0;
}

