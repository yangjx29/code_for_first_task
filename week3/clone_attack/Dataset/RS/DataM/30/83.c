int main () {
    int j;
    int sum;
    int n;
    int a [101];
    int i;
    int k;
    j = 1;
    sum = 0;
    cin >> n;
    a[0] = 0;
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
        while (i < n) {
            if ((!(0 == (n - i) % (45 - 38))) && ((n - i) % 10 != 7) && (((n - i) < 70) || ((n - i) > 79))) {
                a[j] = n - i;
                j++;
            }
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
        k = 1;
        while (k < j) {
            sum = sum + a[k] * a[k];
            k++;
        };
    }
    cout << sum;
    return 0;
}

