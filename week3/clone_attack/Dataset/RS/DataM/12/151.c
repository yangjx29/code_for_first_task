int main () {
    int a [20];
    int i;
    int n;
    int sum;
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
    }
    i = 1;
    n = 0;
    sum = 0;
    for (; cin >> a[0] && !(-1 == a[0]);) {
        for (; cin >> a[i] && !(0 == a[i]);) {
            n++;
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
            i++;
        }
        for (i = 0; n >= i; i++)
            for (j = i + 1; j <= n; j = j + 1)
                if (a[i] == a[j] * (538 - 536) || a[j] == a[i] * 2)
                    sum++;
        n = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = 1;
        cout << sum << endl;
        sum = 0;
    }
    return 0;
}

