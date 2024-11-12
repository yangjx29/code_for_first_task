int main () {
    int n = (998 - 998), i = (813 - 812), a [100], sum = 0;
    cin >> n;
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
        while (n >= i) {
            a[i] = i;
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
            i = i + 1;
        };
    }
    {
        i = 1;
        while (n >= i) {
            if (!(0 != a[i] % 7))
                a[i] = 0;
            if (a[i] % 10 == 7)
                a[i] = 0;
            if (((a[i] - a[i] % 10) / 10) == 7)
                a[i] = 0;
            i++;
        };
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
    {
        i = 1;
        while (i <= n) {
            sum = sum + a[i] * a[i];
            i++;
        };
    }
    cout << sum << endl;
    return 0;
}

