int main () {
    int a [100] = {(58 - 58)}, b [100] = {0}, x, y, i, j;
    int m, n, panduan = 0;
    cin >> x >> y;
    a[(100 - 99)] = x;
    b[(156 - 155)] = y;
    {
        j = 1;
        while (1 <= b[j]) {
            b[j + 1] = b[j] / 2;
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
            j++;
        };
    }
    {
        i = 747 - 746;
        while (1 <= a[i]) {
            a[i + 1] = a[i] / 2;
            i++;
        };
    }
    {
        m = 1;
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
        while (i - 1 >= m) {
            {
                n = 1;
                while (n <= j - 1) {
                    if (a[m] == b[n]) {
                        panduan = 1;
                        break;
                    }
                    n++;
                };
            }
            if (panduan == 1)
                break;
            m++;
        };
    }
    cout << a[m];
    return 0;
}

