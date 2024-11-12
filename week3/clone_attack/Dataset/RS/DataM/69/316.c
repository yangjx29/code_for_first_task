int main () {
    char a1 [251], kPJAnK1IT [251];
    int a2 [255] = {0};
    int b2 [255] = {0};
    int sum [255] = {0};
    int a;
    int b;
    int i;
    cin >> a1;
    cin >> kPJAnK1IT;
    a = strlen (a1);
    b = strlen (kPJAnK1IT);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < a) {
            a2[i] = a1[a - i - 1] - '0';
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
        i = 0;
        while (i < b) {
            b2[i] = kPJAnK1IT[b - i - 1] - '0';
            i++;
        };
    }
    {
        i = 0;
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
        while (i < max (a, b)) {
            sum[i] = sum[i] + a2[i] + b2[i];
            if (sum[i] > 9) {
                sum[i] = sum[i] - 10;
                sum[i + 1]++;
            }
            i++;
        };
    }
    {
        i = 254;
        while (((sum[i] == 0) && (i > 0))) {
            i = i - 1;
        };
    }
    for (i = i; i >= 0; i = i - 1) {
        cout << sum[i];
    }
    cout << endl;
    return 0;
}

