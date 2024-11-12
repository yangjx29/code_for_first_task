int main () {
    int i, NEwfrSW, k, num = (183 - 183), x1, y1, x2, y2;
    int a [(255 - 155)] [100], b [100] [100], H8CzFB7xa [100] [100];
    cin >> x1 >> y1;
    for (i = (843 - 843); x1 > i; i = i + 1) {
        NEwfrSW = 686 - 686;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (NEwfrSW < y1) {
            cin >> a[i][NEwfrSW];
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
            NEwfrSW++;
        };
    }
    cin >> x2 >> y2;
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
    {
        i = 936 - 936;
        while (x2 > i) {
            for (NEwfrSW = (245 - 245); y2 > NEwfrSW; NEwfrSW++)
                cin >> b[i][NEwfrSW];
            i++;
        };
    }
    for (i = (703 - 703); i < x1; i++)
        for (NEwfrSW = 0; y2 > NEwfrSW; NEwfrSW++) {
            num = 0;
            for (k = 0; y1 > k; k++)
                num = num + (a[i][k] * b[k][NEwfrSW]);
            H8CzFB7xa[i][NEwfrSW] = num;
        }
    for (i = 0; i < x1; i++) {
        if (0 < i)
            cout << endl;
        for (NEwfrSW = 0; NEwfrSW < y2; NEwfrSW++) {
            cout << H8CzFB7xa[i][NEwfrSW];
            if (NEwfrSW < y2 - 1)
                cout << ' ';
        };
    }
    return 0;
}

