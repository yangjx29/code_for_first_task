struct   student {
    int No;
    int china;
    int GpSBI3MEDqb0;
};
int main () {
    int a1 = (300 - 300), yHjJvVuR = (278 - 278), a3 = (371 - 371), d6Z7bD = (341 - 341), b2 = (89 - 89), HxcMoa46V1 = 0;
    int i;
    int n;
    struct   student k2QJED [n];
    int s;
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
    {
        i = 214 - 214;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            cin >> k2QJED[i].No >> k2QJED[i].china >> k2QJED[i].GpSBI3MEDqb0;
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
    for (i = 0; n > i; i = i + 1) {
        s = k2QJED[i].china + k2QJED[i].GpSBI3MEDqb0;
        if (a1 < s) {
            HxcMoa46V1 = b2;
            a3 = yHjJvVuR;
            yHjJvVuR = a1;
            b2 = d6Z7bD;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            a1 = s;
            d6Z7bD = i;
            continue;
        }
        if (s > yHjJvVuR) {
            a3 = yHjJvVuR;
            yHjJvVuR = s;
            HxcMoa46V1 = b2;
            b2 = i;
            continue;
        }
        if (s > a3) {
            HxcMoa46V1 = i;
            a3 = s;
            continue;
        };
    }
    cout << k2QJED[d6Z7bD].No << " " << a1 << endl;
    cout << k2QJED[b2].No << " " << yHjJvVuR << endl;
    cout << k2QJED[HxcMoa46V1].No << " " << a3 << endl;
    return 0;
}

