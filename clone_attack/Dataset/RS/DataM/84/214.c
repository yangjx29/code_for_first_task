int MuSKcqN (const  void  *a1, const  void  *a2) {
    int *zSEasb4 = (int *) a2;
    int *p1 = (int *) a1;
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
    return *zSEasb4 - *p1;
}

int main () {
    int maOwB59eS;
    int m [101];
    int n;
    scanf ("%d", &n);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        maOwB59eS = 0;
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
        while (maOwB59eS < n) {
            scanf ("%d", &m[maOwB59eS]);
            maOwB59eS = maOwB59eS + 1;
        };
    }
    qsort (m, n, sizeof (m [0]), MuSKcqN);
    printf ("%d\n%d\n", m[0], m[1]);
    return 0;
}

