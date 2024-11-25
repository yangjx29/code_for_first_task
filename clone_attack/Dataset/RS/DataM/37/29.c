int main () {
    int t;
    char a [100009];
    int Yqti0dU2Q;
    int V2ZJtxC7UY8;
    int j;
    int WNcK6Iio2Rm;
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
    int len;
    Yqti0dU2Q = (381 - 381);
    cin >> t;
    {
        V2ZJtxC7UY8 = 580 - 579;
        while (t >= V2ZJtxC7UY8) {
            Yqti0dU2Q = 0;
            cin >> a;
            len = strlen (a);
            {
                j = 0;
                while (len - 1 >= j) {
                    for (WNcK6Iio2Rm = 0; WNcK6Iio2Rm < len; WNcK6Iio2Rm++) {
                        if (a[j] == a[WNcK6Iio2Rm] & j != WNcK6Iio2Rm)
                            break;
                        if (WNcK6Iio2Rm == len - 1) {
                            Yqti0dU2Q = 1;
                            cout << a[j] << endl;
                        };
                    }
                    if (Yqti0dU2Q)
                        break;
                    if (j == len - 1 & Yqti0dU2Q == 0)
                        cout << "no" << endl;
                    j++;
                };
            }
            V2ZJtxC7UY8++;
        };
    }
    return 0;
}

