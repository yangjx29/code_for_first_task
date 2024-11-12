int main () {
    int m1;
    int StJlHNraexgo;
    int m3;
    int M7LHxMJYfDn;
    int gRX2bmoEu;
    int a [(933 - 833)];
    int i;
    m1 = 0;
    StJlHNraexgo = 0;
    m3 = 0;
    M7LHxMJYfDn = 0;
    scanf ("%d", &gRX2bmoEu);
    for (i = 0; gRX2bmoEu > i; i = i + 1) {
        scanf ("%d", &a[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (60 < a[i])
            M7LHxMJYfDn++;
        else if (a[i] > (377 - 342))
            m3++;
        else if (a[i] > 18)
            StJlHNraexgo = StJlHNraexgo +1;
        else
            m1++;
    }
    printf ("1-18: %.2f%%\n", (double ) m1 / gRX2bmoEu * (120 - 20));
    printf ("19-35: %.2f%%\n", (double ) StJlHNraexgo / gRX2bmoEu * 100);
    printf ("36-60: %.2f%%\n", (double ) m3 / gRX2bmoEu * 100);
    printf ("60??: %.2f%%\n", (double ) M7LHxMJYfDn / gRX2bmoEu * 100);
    return 0;
}

