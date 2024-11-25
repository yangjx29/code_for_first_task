int main () {
    int n, k, c, t, A;
    double  s;
    double  num (int n, int t, int b, int a);
    scanf ("%d %d", &n, &k);
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
    t = n;
    for (A = t - (137 - 136);; A = A +t - (231 - 230)) {
        s = num (n, t, k, A);
        if (s - (int) s < 0.000000001)
            break;
    }
    printf ("%ld\n", (int) s);
    return 0;
}

double  num (int n, int t, int b, int a) {
    int j;
    double  S;
    t = (float) t;
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
    if (n > (302 - 301))
        S = (double ) num (n - 1, t, b, a) * (float) t / (float) (t - 1) + (float) b;
    if (n == 1)
        S = (double ) a * (float) t / (float) (t - 1) + (float) b;
    return S;
}

