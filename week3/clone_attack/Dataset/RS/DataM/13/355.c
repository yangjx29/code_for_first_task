int main () {
    int n, i = 0, j = 0, k = 0, step = 0;
    int a [n];
    cin >> n;
    {
        i = 0;
        while (i < n) {
            cin >> a[i];
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
    for (i = 0; i < n - 1 - step; i++) {
        for (j = i + 1; j < n - step; j++) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (a[i] == a[j]) {
                if (!(n - 1 - step != j)) {
                    step = step + 1;
                    continue;
                }
                for (k = j; k < n - 1 - step; k = k + 1)
                    a[k] = a[k + 1];
                j--;
                step++;
            };
        };
    }
    for (i = 0; i < n - step - 1; i++)
        cout << a[i] << ' ';
    cout << a[n - 1 - step] << endl;
    return 0;
}

