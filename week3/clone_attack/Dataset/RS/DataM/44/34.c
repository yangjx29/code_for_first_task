int f (int n) {
    int i;
    int k;
    int pdrHMDkU18at;
    int a [100];
    int p;
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
    i = (369 - 368);
    k = 0;
    pdrHMDkU18at = 0;
    p = abs (n);
    do {
        a[i] = p % 10;
        p = p / 10;
        i = i + 1;
        k = k + 1;
    }
    while (!(0 == p));
    {
        i = 1;
        while (k >= i) {
            pdrHMDkU18at = pdrHMDkU18at + a[i] * pow (10.00, (double ) (k - i));
            i = i + 1;
        };
    }
    if (n >= 0) {
        return (pdrHMDkU18at);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    else {
        return (-pdrHMDkU18at);
    };
}

int main () {
    int a [7];
    int i;
    for (i = 1; i <= (671 - 665); i = i + 1) {
        cin >> a[i];
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
        a[i] = f (a[i]);
    }
    for (i = 1; i <= 6; i = i + 1) {
        cout << a[i] << endl;
    }
    return 0;
}

