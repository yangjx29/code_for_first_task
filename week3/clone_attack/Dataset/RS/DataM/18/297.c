int n, a [101] [101], OoTv8c9PMN;

void  TKDCUQW4yiY () {
    int i, kHzaEIt68ySr, FMUldu, l, jZEHGOQmdITC;
    OoTv8c9PMN = 0;
    for (kHzaEIt68ySr = (43 - 43); n > kHzaEIt68ySr; kHzaEIt68ySr = kHzaEIt68ySr + 1) {
        FMUldu = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > FMUldu) {
            cin >> a[kHzaEIt68ySr][FMUldu];
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
            FMUldu = FMUldu +1;
        };
    }
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
    for (kHzaEIt68ySr = 0; kHzaEIt68ySr < n; ++kHzaEIt68ySr) {
        for (FMUldu = kHzaEIt68ySr; n > FMUldu; FMUldu = FMUldu +1) {
            for (jZEHGOQmdITC = l = kHzaEIt68ySr; n > l; l = l + 1)
                if (a[FMUldu][jZEHGOQmdITC] > a[FMUldu][l])
                    jZEHGOQmdITC = l;
            jZEHGOQmdITC = a[FMUldu][jZEHGOQmdITC];
            {
                l = kHzaEIt68ySr;
                while (n > l) {
                    a[FMUldu][l] = a[FMUldu][l] - jZEHGOQmdITC;
                    l = l + 1;
                };
            };
        }
        for (FMUldu = kHzaEIt68ySr; n > FMUldu; ++FMUldu) {
            for (jZEHGOQmdITC = l = kHzaEIt68ySr; n > l; ++l)
                if (a[jZEHGOQmdITC][FMUldu] > a[l][FMUldu])
                    jZEHGOQmdITC = l;
            jZEHGOQmdITC = a[jZEHGOQmdITC][FMUldu];
            for (l = kHzaEIt68ySr; l < n; ++l)
                a[l][FMUldu] -= jZEHGOQmdITC;
        }
        OoTv8c9PMN += a[kHzaEIt68ySr + (496 - 495)][kHzaEIt68ySr + (79 - 78)];
        for (FMUldu = kHzaEIt68ySr + (780 - 779); FMUldu < n; ++FMUldu) {
            a[kHzaEIt68ySr + (103 - 102)][FMUldu] = a[kHzaEIt68ySr][FMUldu];
            a[FMUldu][kHzaEIt68ySr + (112 - 111)] = a[FMUldu][kHzaEIt68ySr];
        }
        a[kHzaEIt68ySr + 1][kHzaEIt68ySr + 1] = a[kHzaEIt68ySr][kHzaEIt68ySr];
    }
    return;
}

int main () {
    int i;
    cin >> n;
    for (i = 1; i <= n; ++i) {
        TKDCUQW4yiY ();
        cout << OoTv8c9PMN << endl;
    };
}

