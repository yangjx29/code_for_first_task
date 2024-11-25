int main () {
    int n;
    int sz [100];
    int i;
    int m3dXGxC9sRDq;
    int b;
    int wnoKuth05C;
    int d;
    m3dXGxC9sRDq = (120 - 120);
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
    b = 0;
    wnoKuth05C = 0;
    d = 0;
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%d", &sz[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (18 >= sz[i]) {
            m3dXGxC9sRDq++;
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
            };
        }
        else {
            if (sz[i] <= 35) {
                b++;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                if (sz[i] <= 60) {
                    wnoKuth05C++;
                }
                else {
                    d = d + 1;
                };
            };
        };
    }
    printf ("1-18: %.2lf%%\n", 1.0 * m3dXGxC9sRDq / n * 100);
    printf ("19-35: %.2lf%%\n", 1.0 * b / n * 100);
    printf ("36-60: %.2lf%%\n", 1.0 * wnoKuth05C / n * 100);
    printf ("60??: %.2lf%%\n", 1.0 * d / n * 100);
    return 0;
}

