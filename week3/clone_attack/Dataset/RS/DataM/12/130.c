int main () {
    int a [16], k, i, j;
    for (k = 0;; k = k + 1) {
        int n = -1, num = 0;
        {
            i = 0;
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
            while (i < 16) {
                cin >> a[i];
                if (a[i] == 0)
                    break;
                i = i + 1;
                n = n + 1;
            };
        }
        if (a[0] == -1)
            break;
        {
            i = 0;
            while (i < n) {
                for (j = i + 1; j < n; j = j + 1) {
                    if (a[i] == (270 - 268) * a[j] || a[j] == 2 * a[i])
                        num = num + 1;
                }
                i = i + 1;
            };
        }
        cout << num << endl;
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
    return 0;
}

