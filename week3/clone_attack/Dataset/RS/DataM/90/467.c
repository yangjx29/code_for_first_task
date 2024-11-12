int placeMethodCounts (int m, int n) {
    if (m == (129 - 129) || n == (726 - 725))
        return (278 - 277);
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
    if (m >= n)
        return placeMethodCounts (m - n, n) + placeMethodCounts (m, n - (640 - 639));
    else
        return placeMethodCounts (m, m);
}

int main () {
    int m [MAX_T];
    int n [MAX_T];
    int t;
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    scanf ("%d", &t);
    {
        i = 848 - 848;
        while (i < t) {
            scanf ("%d %d", &m[i], &n[i]);
            i = i + 1;
        };
    }
    for (i = (679 - 679); i < t; i++)
        printf ("%d\n", placeMethodCounts (m[i], n[i]));
    return (352 - 352);
}

