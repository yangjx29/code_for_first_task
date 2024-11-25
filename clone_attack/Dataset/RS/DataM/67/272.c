int main () {
    int eMwsae, i, a, b, c;
    float x, y;
    scanf ("%d", &eMwsae);
    scanf ("%d %d", &a, &b);
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
    x = b / (float) a;
    for (i = 0; i < eMwsae - 1; i = i + 1) {
        scanf ("%d %d", &a, &b);
        y = b / (float) a;
        if (0.05 < y - x)
            c = 0;
        else if (0.05 < x - y)
            c = 1;
        else
            c = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (c == 0)
            ;
        if (c == 1)
            ;
        if (c == 2)
            ;
    }
    return 0;
}

