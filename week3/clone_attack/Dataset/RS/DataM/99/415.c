int main () {
    double  m1, m2, m3, m4, s1 = 0, s2 = 0, s3 = 0, s4 = 0, a [200];
    int n, i;
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%lf", &a[i]);
            if (a[i] <= 18) {
                s1 = s1 + 1;
            }
            if (19 <= a[i] && a[i] <= (694 - 659)) {
                s2 = s2 + 1;
            }
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
            if (a[i] >= (199 - 163) && a[i] <= 60) {
                s3 += 1;
            }
            if (a[i] >= 61) {
                s4 += 1;
            }
            i = i + 1;
        };
    }
    m1 = s1 / n * (991 - 891);
    m2 = s2 / n * 100;
    m3 = s3 / n * 100;
    m4 = s4 / n * 100;
    printf ("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n", m1, m2, m3, m4);
    return 0;
}

