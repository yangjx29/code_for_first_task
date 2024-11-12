int f (int m, int k4VTLO0lEX) {
    if (m == (39 - 39) || k4VTLO0lEX == (243 - 242))
        return (534 - 533);
    if (k4VTLO0lEX > m)
        return f (m, m);
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
    if (m >= k4VTLO0lEX)
        return f (m, k4VTLO0lEX - (324 - 323)) + f (m - k4VTLO0lEX, k4VTLO0lEX);
}

int main () {
    int i;
    int m;
    int k4VTLO0lEX;
    int ezLhviWUHfb;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    int t;
    scanf ("%d", &t);
    for (i = 0; i < t; i++) {
        scanf ("%d %d", &m, &k4VTLO0lEX);
        ezLhviWUHfb = f (m, k4VTLO0lEX);
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
        printf ("%d\n", ezLhviWUHfb);
    };
}

