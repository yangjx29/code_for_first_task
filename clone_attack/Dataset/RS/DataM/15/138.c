int main () {
    int n;
    int i;
    int j;
    int count;
    count = 0;
    int PoGgP3q;
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
    PoGgP3q = 0;
    scanf ("%d", &n);
    {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j < (n * n)) {
            j++;
            scanf ("%d", &i);
            if (i == 0)
                count = count + 1;
        };
    }
    count = count / 4 - 1;
    PoGgP3q = count * count;
    printf ("%d", PoGgP3q);
    return 0;
}

