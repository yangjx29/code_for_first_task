int XcESHylsgIOa (int SsQ7XIgh9C4) {
    int t;
    int s9UahYKHjl;
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
    s9UahYKHjl = sqrt (SsQ7XIgh9C4);
    {
        t = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (t <= s9UahYKHjl) {
            if (!(0 != SsQ7XIgh9C4 % t))
                break;
            t++;
        };
    }
    if (t > s9UahYKHjl)
        return 1;
    else
        return 0;
}

int main (void ) {
    int s9UahYKHjl;
    int n;
    int i;
    int j;
    s9UahYKHjl = 0;
    scanf ("%d", &n);
    {
        i = 3;
        while (i < n - 1) {
            if (XcESHylsgIOa (i) == 1) {
                j = i + 2;
                if (XcESHylsgIOa (j) == 1) {
                    printf ("%d %d\n", i, j);
                    s9UahYKHjl = s9UahYKHjl + 1;
                };
            }
            i = i + 2;
        };
    }
    if (s9UahYKHjl == 0)
        ;
}

