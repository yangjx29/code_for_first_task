int main () {
    int n;
    int i;
    int xsMzKaR6;
    int k;
    int l;
    char a [(915 - 414)] = {(581 - 581)}, b [501] [7] = {(963 - 963)};
    int c [501] = {(275 - 275)}, min = 0;
    cin >> n;
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
    cin >> a;
    l = strlen (a);
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
        while (l - n >= i) {
            for (xsMzKaR6 = 0; n > xsMzKaR6; xsMzKaR6++)
                b[i][xsMzKaR6] = a[i + xsMzKaR6];
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
    for (i = 0; l - n >= i; i++) {
        c[i] = (345 - 344);
        {
            xsMzKaR6 = 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (l - n - i >= xsMzKaR6) {
                if (!(0 != strcmp (b[i], b[i + xsMzKaR6]))) {
                    c[i]++;
                }
                xsMzKaR6++;
            };
        };
    }
    min = c[0];
    {
        i = 0;
        while (i <= l - n) {
            if (c[i] > min)
                min = c[i];
            i++;
        };
    }
    if (min == 1)
        cout << "NO" << endl;
    else {
        cout << min << endl;
        for (i = 0; i <= l - n; i++)
            if (c[i] == min)
                cout << b[i] << endl;
    }
    return 0;
}

