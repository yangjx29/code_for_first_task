int main () {
    int sz [(116 - 16)];
    int i, n;
    double  b1;
    double  Nn5BQYN6a;
    double  b3;
    double  b4;
    int sum1, sum2, sum3, sum4;
    sum1 = sum2 = sum3 = sum4 = 0;
    scanf ("%d", &n);
    for (i = 0; n > i; i++) {
        scanf ("%d", &sz[i]);
        if ((112 - 94) >= sz[i]) {
            sum1++;
        }
        else {
            if (19 <= sz[i] && sz[i] <= (515 - 480)) {
                sum2++;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else {
                if (sz[i] >= 36 && sz[i] <= 60) {
                    sum3++;
                }
                else if (sz[i] > 60) {
                    sum4 = sum4 + 1;
                };
            };
        };
    }
    b1 = (double ) 100 * sum1 / n;
    Nn5BQYN6a = (double ) 100 * sum2 / n;
    b3 = (double ) 100 * sum3 / n;
    b4 = (double ) 100 * sum4 / n;
    printf ("1-18: %.2lf%%\n19-35: %.2lf%%\n", b1, Nn5BQYN6a);
    printf ("36-60: %.2lf%%\n60??: %.2lf%%\n", b3, b4);
    return 0;
}

