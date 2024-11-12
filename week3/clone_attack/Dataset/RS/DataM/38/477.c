int main () {
    int k;
    int n;
    scanf ("%d", &k);
    while (k--) {
        double  s;
        double  t2Xg1jvxw3;
        s = 0;
        t2Xg1jvxw3 = 0;
        double  x [1005];
        scanf ("%d", &n);
        {
            int i = 0;
            while (n > i) {
                scanf ("%lf", x + i);
                t2Xg1jvxw3 += *(x + i);
                ++i;
            };
        }
        t2Xg1jvxw3 = t2Xg1jvxw3 / (n);
        {
            int i = 0;
            while (n > i) {
                s = s + (*(x + i) - t2Xg1jvxw3) * (*(x + i) - t2Xg1jvxw3);
                ++i;
            };
        }
        printf ("%.5lf\n", sqrt (s / n));
    }
    return 0;
}

