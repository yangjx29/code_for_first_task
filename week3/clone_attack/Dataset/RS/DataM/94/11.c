int main () {
    int gfXipz8vx;
    int eAtJ6Hro;
    int k;
    int ZR3YwPp;
    gfXipz8vx = 0;
    eAtJ6Hro = 0;
    k = 0;
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
    ZR3YwPp = 0;
    int a [gfXipz8vx];
    cin >> gfXipz8vx;
    for (eAtJ6Hro = 0; gfXipz8vx > eAtJ6Hro; eAtJ6Hro++) {
        cin >> a[eAtJ6Hro];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    {
        eAtJ6Hro = 0;
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
        while (gfXipz8vx > eAtJ6Hro) {
            if (!(0 == a[eAtJ6Hro] % 2))
                a[k++] = a[eAtJ6Hro];
            eAtJ6Hro++;
        };
    }
    for (eAtJ6Hro = 0; k > eAtJ6Hro; eAtJ6Hro++) {
        ZR3YwPp = eAtJ6Hro;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (k > ZR3YwPp) {
            if (a[ZR3YwPp] < a[eAtJ6Hro]) {
                gfXipz8vx = a[eAtJ6Hro];
                a[eAtJ6Hro] = a[ZR3YwPp];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                a[ZR3YwPp] = gfXipz8vx;
            }
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
            ZR3YwPp++;
        };
    }
    for (eAtJ6Hro = 0; eAtJ6Hro < k; eAtJ6Hro++) {
        cout << a[eAtJ6Hro];
        if (eAtJ6Hro != k - 1)
            cout << ",";
    }
    return 0;
}

