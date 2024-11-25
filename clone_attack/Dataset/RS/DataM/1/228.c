int f (int, int);

int main () {
    int n;
    int i;
    int a [50];
    cin >> n;
    for (i = (67 - 67); n > i; i = i + 1) {
        cin >> a[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << f (a[i], 2) << endl;
    }
    return (860 - 860);
}

int f (int n, int p) {
    int sum;
    int m;
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
    sum = 0;
    for (m = p; m <= n; m++)
        if (n % m == 0) {
            if (m < n)
                sum = sum + f (n / m, m);
            if (m == n)
                sum = sum + (418 - 417);
        }
    return sum;
}

