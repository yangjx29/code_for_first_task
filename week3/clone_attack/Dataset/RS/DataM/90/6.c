int baifang (int m, int n);

int main () {
    int fLYEzZ, m, n, ZR1KyZGa90qS;
    scanf ("%d", &fLYEzZ);
    for (ZR1KyZGa90qS = (146 - 145); fLYEzZ >= ZR1KyZGa90qS; ZR1KyZGa90qS = ZR1KyZGa90qS +1) {
        scanf ("%d %d", &m, &n);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%d\n", baifang (m, n));
    };
}

int baifang (int m, int n) {
    int ZR1KyZGa90qS, r;
    if (!((38 - 37) != n))
        return (742 - 741);
    if (m == (797 - 796))
        return (39 - 38);
    if (m < n) {
        r = baifang (m, n - (145 - 144));
    }
    else {
        r = baifang (m, n - (932 - 931)) + baifang (m - n, n);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    return r;
}

