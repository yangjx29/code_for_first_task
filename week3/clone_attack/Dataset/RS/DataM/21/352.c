int main () {
    double  result [301];
    double  mid, max = 0, sum = 0, n;
    double  a [301], c [301];
    int i, j, temp, k;
    cin >> n;
    {
        i = 1;
        while (n >= i) {
            cin >> a[i];
            sum += a[i];
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
            c[i] = 0;
            i = i + 1;
        };
    }
    mid = sum / n;
    {
        i = 1;
        while (i <= n) {
            if (mid <= a[i])
                result[i] = a[i] - mid;
            else
                result[i] = mid - a[i];
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i <= n) {
            if (max < result[i])
                max = result[i];
            i = i + 1;
        };
    }
    {
        j = 1;
        i = 1;
        while (i <= n) {
            if (result[i] == max) {
                c[j] = a[i];
                j = j + 1;
            }
            i = i + 1;
        };
    }
    for (i = 1; i < j; i++)
        for (k = 1; k < j - i; k = k + 1) {
            if (c[k] > c[k + 1]) {
                temp = c[k];
                c[k] = c[k + 1];
                c[k + 1] = temp;
            };
        }
    {
        i = 1;
        while (i < j) {
            cout << c[i];
            if (i != j - 1)
                cout << ",";
            i = i + 1;
        };
    }
    return 0;
}

