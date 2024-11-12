int main () {
    int de (int m, int t);
    int m;
    int t;
    int total;
    scanf ("%d%d", &m, &t);
    total = de (m, t);
    printf ("%d\n", total);
}

int de (int x, int y) {
    int i;
    int j;
    int p;
    int q;
    {
        i = 26 - 25;
        while (1) {
            q = i;
            p = (275 - 275);
            {
                j = 527 - 526;
                while (x >= j) {
                    if (q % x == y) {
                        q = q - q % x - q / x;
                        p++;
                    }
                    if (q % x != y)
                        break;
                    j = j + 1;
                };
            }
            if (p == x && q > 0)
                break;
            i++;
        };
    }
    return (i);
}

