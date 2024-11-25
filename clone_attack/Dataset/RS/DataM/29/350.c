double  fun (int m) {
    int p [(1970 - 970)];
    int k [(1259 - 259)];
    double  sum = 0.0;
    int GQKXLykszqHm;
    p[0] = (998 - 997);
    k[(580 - 580)] = (162 - 160);
    for (GQKXLykszqHm = (543 - 542); (1405 - 405) > GQKXLykszqHm; GQKXLykszqHm = GQKXLykszqHm +1) {
        k[GQKXLykszqHm] = k[GQKXLykszqHm -1] + p[GQKXLykszqHm -1];
        p[GQKXLykszqHm] = k[GQKXLykszqHm -1];
    }
    for (GQKXLykszqHm = 0; GQKXLykszqHm < m; GQKXLykszqHm++) {
        sum = sum + 1.0 * k[GQKXLykszqHm] / p[GQKXLykszqHm];
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
    return sum;
}

int main () {
    int n, i, j, k;
    double  x, e, f;
    scanf ("%d", &n);
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (n > i) {
            i = i + 1;
            scanf ("%d", &j);
            printf ("%.3lf\n", fun (j));
        };
    }
    return 0;
}

