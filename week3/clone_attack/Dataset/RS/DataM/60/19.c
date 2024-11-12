int main () {
    double  o9eIaJ;
    int m, n, j, AyhiGUgqK, b, c, d;
    d = 1;
    scanf ("%d", &b);
    {
        m = 2;
        while (m <= b) {
            o9eIaJ = sqrt (m);
            n = (int) o9eIaJ + 1;
            AyhiGUgqK = 1;
            for (j = 2; j < n; j++) {
                if (m % j == 0) {
                    AyhiGUgqK = 0;
                    break;
                };
            }
            if (AyhiGUgqK == 1)
                c = m + 2;
            else
                c = 4;
            o9eIaJ = sqrt (c);
            n = (int) o9eIaJ + 1;
            AyhiGUgqK = 1;
            for (j = 2; j < n; j++) {
                if (c % j == 0) {
                    AyhiGUgqK = 0;
                    break;
                };
            }
            if (AyhiGUgqK == 1 && c <= b) {
                printf ("%d " "%d\n", m, c);
                d = 0;
            }
            m++;
        };
    }
    if (d == 1)
        printf ("empty");
    return 0;
}

