int main () {
    int a [305];
    int n, i, max, min;
    double  sum, k;
    cin >> n;
    cin >> a[0];
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
    max = min = a[0];
    sum = a[0];
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
        while (n > i) {
            cin >> a[i];
            sum = sum + a[i];
            if (a[i] > max)
                max = a[i];
            if (min > a[i])
                min = a[i];
            i = i + 1;
        };
    }
    k = (double ) sum / n;
    if ((max - k) > (k - min))
        cout << max;
    else if ((max - k) < (k - min))
        cout << min;
    else
        cout << min << "," << max;
    return 0;
}

