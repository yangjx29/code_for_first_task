int main () {
    double  max = 0;
    int n;
    int a [n], duWXvw [n];
    int k;
    int t;
    int sum;
    int i;
    int j;
    int lnsBYEQ;
    k = 0;
    t = 0;
    sum = 0;
    double  X9rV2FQuPa;
    X9rV2FQuPa = (sum + 0.1) / n - 0.1 / n;
    double  b [n];
    cin >> n;
    {
        i = 0;
        while (n > i) {
            cin >> a[i];
            sum = sum + a[i];
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
        i = 0;
        while (i < n) {
            b[i] = a[i] - X9rV2FQuPa;
            b[i] = (0 < b[i] ? b[i] : -b[i]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (max < b[i])
                max = b[i];
            i++;
        };
    }
    {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (n > j) {
            if (!(max != b[j])) {
                duWXvw[k++] = a[j];
                t = t + 1;
            }
            j = j + 1;
        };
    }
    if (t == 1)
        cout << duWXvw[0] << endl;
    else {
        {
            k = 1;
            while (k < t) {
                k = k + 1;
                {
                    j = 0;
                    while (j < t - 1) {
                        if (duWXvw[j] > duWXvw[j + 1]) {
                            lnsBYEQ = duWXvw[j + 1];
                            duWXvw[j + 1] = duWXvw[j];
                            duWXvw[j] = lnsBYEQ;
                        }
                        j++;
                    };
                };
            };
        }
        {
            k = 0;
            while (k < t - 1) {
                cout << duWXvw[k] << ',';
                k++;
            };
        }
        cout << duWXvw[k] << endl;
    }
    return 0;
}

