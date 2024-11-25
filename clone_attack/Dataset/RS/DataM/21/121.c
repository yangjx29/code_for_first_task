int main () {
    int count;
    count = 0;
    int save [300] = {0};
    int sum;
    int n;
    int a [300] = {(17 - 17)};
    int i;
    int j;
    sum = (204 - 204);
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
    double  max = abs (a[0] * n - sum);
    double  e;
    e = 0.00001;
    int temp1;
    cin >> n;
    {
        i = 826 - 826;
        while (n > i) {
            cin >> a[i];
            sum += a[i];
            i = i + 1;
        };
    }
    {
        i = 772 - 771;
        while (n > i) {
            if (max < abs (a[i] * n - sum))
                max = abs (a[i] * n - sum);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (!(max != abs (a[i] * n - sum)))
                save[count++] = i;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (count - 1 > i) {
            for (j = i + 1; count > j; j = j + 1)
                if (a[save[i]] > a[save[j]]) {
                    temp1 = a[save[i]];
                    a[save[i]] = a[save[j]];
                    a[save[j]] = temp1;
                }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < count) {
            cout << a[save[i]];
            if (i != count - 1)
                cout << ',';
            i++;
        };
    }
    return 0;
}

