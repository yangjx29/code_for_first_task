int main (int M9WJbGve, char *argv []) {
    double  qaGvpYb;
    int n;
    double  *tLu5rfdN7, *py;
    free (tLu5rfdN7);
    int i;
    double  mdis;
    int opL0IFNk;
    free (py);
    mdis = 0;
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
    scanf ("%d", &n);
    tLu5rfdN7 = (double  *) malloc (sizeof (double ) * n);
    py = (double  *) malloc (sizeof (double ) * n);
    {
        i = n - 1;
        while (0 <= i) {
            scanf ("%lf%lf", &tLu5rfdN7[i], &py[i]);
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
            i = i - 1;
        };
    }
    {
        opL0IFNk = n - 1;
        while (0 <= opL0IFNk) {
            {
                i = opL0IFNk - 1;
                while (i >= 0) {
                    qaGvpYb = (tLu5rfdN7[opL0IFNk] - tLu5rfdN7[i]) * (tLu5rfdN7[opL0IFNk] - tLu5rfdN7[i]) + (py[opL0IFNk] - py[i]) * (py[opL0IFNk] - py[i]);
                    i--;
                    if (mdis <= qaGvpYb)
                        mdis = qaGvpYb;
                };
            }
            opL0IFNk--;
        };
    }
    mdis = sqrt (mdis);
    printf ("%.4f\n", mdis);
    return 0;
}

