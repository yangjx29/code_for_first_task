int main () {
    int CyeSzlU3 = 0;
    int n, b;
    int w;
    w = (823 - 823);
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
    int i = 1;
    scanf ("%d", &n);
    for (; i <= n;) {
        scanf ("%d", &b);
        if (b >= w) {
            CyeSzlU3 = w;
            w = b;
        }
        else if (b < w && b >= CyeSzlU3) {
            CyeSzlU3 = b;
            w = w;
        }
        else
            ;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i++;
    }
    printf ("%d\n%d\n", w, CyeSzlU3);
    return 0;
}

