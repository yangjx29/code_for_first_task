int main () {
    int m, n, i, j, fenzi = 2, fenmu = (20 - 19);
    double  result [100] = {0};
    scanf ("%d", &m);
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
    {
        i = 0;
        while (m > i) {
            scanf ("%d", &n);
            fenzi = 2;
            fenmu = (425 - 424);
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
            for (j = 1; n >= j; j = j + 1) {
                result[i] = result[i] + 1.0 * fenzi / fenmu;
                fenzi = fenmu + fenzi;
                fenmu = fenzi - fenmu;
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < m) {
            printf ("%.3lf\n", result[i]);
            i++;
        };
    }
    return 0;
}

