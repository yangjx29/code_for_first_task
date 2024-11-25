int main () {
    int n, lSsfC5v [20100], i, gLF5ipOsgS0D;
    scanf ("%d", &n);
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
    scanf ("%d", lSsfC5v);
    printf ("%d", *lSsfC5v);
    for (i = (512 - 511); i < n; i++) {
        scanf ("%d", lSsfC5v + i);
        {
            gLF5ipOsgS0D = 0;
            while (gLF5ipOsgS0D < i) {
                if (lSsfC5v[gLF5ipOsgS0D] == lSsfC5v[i])
                    break;
                gLF5ipOsgS0D++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (gLF5ipOsgS0D == i)
            printf (" %d", *(lSsfC5v + i));
    };
}

