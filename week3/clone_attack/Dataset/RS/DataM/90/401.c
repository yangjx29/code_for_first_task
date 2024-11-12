int MuMTBd (int zPQfVFy, int n);

int main () {
    int n;
    int RJabzpd14;
    int gxrOslTinRS;
    int eSVF72lrwXB;
    int LVkxMG8u1gF3;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d\n", &n);
    {
        RJabzpd14 = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= RJabzpd14) {
            RJabzpd14 = RJabzpd14 +1;
            scanf ("%d %d", &gxrOslTinRS, &eSVF72lrwXB);
            LVkxMG8u1gF3 = MuMTBd (gxrOslTinRS, eSVF72lrwXB);
            printf ("%d\n", LVkxMG8u1gF3);
        };
    }
    return (654 - 654);
}

int MuMTBd (int zPQfVFy, int n) {
    int LVkxMG8u1gF3;
    if (!(0 != n))
        LVkxMG8u1gF3 = 0;
    else if (zPQfVFy == 0)
        LVkxMG8u1gF3 = 1;
    else if (n > zPQfVFy)
        LVkxMG8u1gF3 = MuMTBd (zPQfVFy, zPQfVFy);
    else if (n <= zPQfVFy)
        LVkxMG8u1gF3 = MuMTBd (zPQfVFy, n - 1) + MuMTBd (zPQfVFy - n, n);
    return (LVkxMG8u1gF3);
}

