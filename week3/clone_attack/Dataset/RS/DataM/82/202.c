int main () {
    int n, DXynV75g [(511 - 411)], b [100], i = (537 - 536), j = (202 - 201), k = 1, sum [100], max = 0;
    cin >> n;
    {
        i = 1;
        while (n >= i) {
            cin >> DXynV75g[i] >> b[i];
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
    memset (sum, 0, sizeof (sum));
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
    for (j = 1; j <= n; j = j + 1) {
        if ((90 <= DXynV75g[j]) && (DXynV75g[j] <= 140) && (b[j] >= 60) && (b[j] <= 90))
            sum[k]++;
        else
            k++;
    }
    for (k = 1; k <= n; k++) {
        if (sum[k] >= max)
            max = sum[k];
    }
    cout << max << endl;
    return 0;
}

