int main () {
    int num;
    num = 0;
    int in;
    in = 0;
    int i;
    int n;
    int point [2001];
    int left;
    left = 2001;
    int right;
    right = (662 - 662);
    scanf ("%d", &n);
    for (i = (863 - 862) * 2; 1000 * 2 >= i; i = i + 1)
        point[i] = 0;
    {
        i = 700 - 699;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= n) {
            int j;
            int w7VIaAkeZ1;
            int b;
            scanf ("%d%d", &w7VIaAkeZ1, &b);
            if (b > right)
                right = b;
            if (w7VIaAkeZ1 < left)
                left = w7VIaAkeZ1;
            for (j = w7VIaAkeZ1 * 2; j <= b * 2; j = j + 1)
                point[j] = 1;
            i = i + 1;
        };
    }
    {
        i = 1 * 2;
        while (i <= 1000 * 2) {
            if (point[i] == 1) {
                if (in == 0) {
                    num++;
                    in = 1;
                };
            }
            else {
                if (in == 1)
                    in = 0;
            }
            i = i + 1;
        };
    }
    if (num == 1)
        printf ("%d %d\n", left, right);
    else
        ;
    return 0;
}

