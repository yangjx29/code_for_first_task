int main () {
    int n, i, j, k;
    int a [4];
    cin >> n;
    if (n == 10000)
        cout << "00001" << endl;
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
    if (n / 10 == 0)
        i = 1;
    else {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (n / 100 == 0)
            i = 2;
        else {
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
            if (n / 1000 == 0)
                i = 3;
            else {
                if (n / 10000 == 0)
                    i = 4;
            };
        };
    }
    {
        j = i;
        while (j >= 1) {
            a[j - 1] = n / (pow (10, (double ) (j - 1)));
            n = n - pow (10, (double ) (j - 1)) * a[j - 1];
            j = j - 1;
        };
    }
    {
        k = 0;
        while (k <= i - 1) {
            cout << a[k];
            k = k + 1;
        };
    }
    return 0;
}

