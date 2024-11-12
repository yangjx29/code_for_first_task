int main () {
    int n, count, number, i;
    int a [n], b [n], c [n];
    number = 0;
    cin >> n;
    count = 0;
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
    c[n] = 0;
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
        while (i <= n) {
            cin >> a[i] >> b[i];
            if (90 <= a[i] && a[i] <= 140 && b[i] >= 60 && b[i] <= 90) {
                count = count + 1;
                c[i] = count;
            }
            else {
                count = 0;
                c[i] = count;
            }
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
        while (i <= n) {
            if (c[i] > number)
                number = c[i];
            i++;
        };
    }
    cout << number;
    return 0;
}

