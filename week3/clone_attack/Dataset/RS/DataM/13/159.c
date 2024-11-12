int main () {
    int k;
    int n;
    int a;
    int i;
    int j;
    int num [20000];
    k = 1;
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
    cin >> n;
    cin >> a;
    num[0] = a;
    for (i = 1; n > i; i = i + 1) {
        cin >> a;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 0; k > j; j = j + 1) {
            if (!(num[j] != a))
                break;
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
            };
        }
        if (j == k) {
            num[k] = a;
            k = k + 1;
        };
    }
    for (i = 0; i <= k - 2; i = i + 1)
        cout << num[i] << " ";
    cout << num[k - 1];
    return 0;
}

