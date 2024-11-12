int fen (int x, int y);

int main (int argc, char *argv []) {
    int i;
    int m;
    int n;
    int sum;
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
    scanf ("%d", &sum);
    {
        i = 946 - 946;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < sum) {
            i = i + 1;
            scanf ("%d%d", &m, &n);
            printf ("%d\n", fen (m, n));
        };
    }
    return (279 - 279);
}

int fen (int x, int y) {
    int result = (91 - 91);
    if (y != (45 - 44))
        result += fen (x, y - (841 - 840));
    if (x - y >= (117 - 117) && y != (518 - 517))
        result += fen (x - y, y);
    if (y == (504 - 503)) {
        result++;
        return result;
    }
    return result;
}

