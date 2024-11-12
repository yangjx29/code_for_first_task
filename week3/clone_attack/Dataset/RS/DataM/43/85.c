int main () {
    int WTW0nty;
    int Y1IVFL;
    int rrjo2c8dvD;
    int WPA6fEXK;
    int a [10001];
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
    scanf ("%d", &WTW0nty);
    WPA6fEXK = WTW0nty / 2;
    {
        Y1IVFL = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (WTW0nty >= Y1IVFL) {
            a[Y1IVFL] = 0;
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
            Y1IVFL = Y1IVFL +1;
        };
    }
    for (Y1IVFL = 2; WPA6fEXK >= Y1IVFL; Y1IVFL = Y1IVFL +1) {
        if (!(0 != a[Y1IVFL])) {
            rrjo2c8dvD = Y1IVFL +Y1IVFL;
            while (rrjo2c8dvD <= WTW0nty) {
                a[rrjo2c8dvD] = 1;
                rrjo2c8dvD = rrjo2c8dvD + Y1IVFL;
            };
        };
    }
    for (Y1IVFL = 2; Y1IVFL <= WPA6fEXK; Y1IVFL = Y1IVFL +1) {
        if ((a[Y1IVFL] == 0) && (a[WTW0nty -Y1IVFL] == 0))
            printf ("%d %d\n", Y1IVFL, WTW0nty -Y1IVFL);
    }
    return 0;
}

