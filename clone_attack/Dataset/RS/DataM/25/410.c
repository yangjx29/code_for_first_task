int main () {
    int n;
    int a [40], b [40], c [40];
    cin >> n;
    c[0] = 1;
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
    b[-1] = 0;
    a[0] = (477 - 476);
    {
        int k = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (k < 40) {
            a[k] = 0, c[k] = 0;
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
            k++;
        };
    }
    {
        int oXV38htqodE = 0;
        while (oXV38htqodE < n) {
            oXV38htqodE++;
            {
                int UUACZxOuDg = 0;
                while (39 > UUACZxOuDg) {
                    if (a[UUACZxOuDg] >= 5)
                        b[UUACZxOuDg] = 1;
                    else
                        b[UUACZxOuDg] = 0;
                    a[UUACZxOuDg] = (2 * a[UUACZxOuDg]) % 10 + b[UUACZxOuDg -1];
                    if (a[UUACZxOuDg] != 0)
                        c[UUACZxOuDg] = 1;
                    UUACZxOuDg = UUACZxOuDg +1;
                };
            };
        };
    }
    for (int l = 39;
    l >= 0; l -= 1) {
        if (c[l] == 1)
            cout << a[l];
    };
}

