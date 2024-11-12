int main () {
    double  bA7iGLd8;
    double  xQSkeZB;
    double  z;
    double  v;
    int D3Xe5BiVQ9F;
    int aFJYERB769A;
    int Woh74B;
    int q;
    int a;
    int OhQbTW;
    int t;
    D3Xe5BiVQ9F = 0;
    aFJYERB769A = 0;
    Woh74B = 0;
    q = 0;
    scanf ("%d", &a);
    {
        OhQbTW = 0;
        while (a > OhQbTW) {
            OhQbTW = OhQbTW +1;
            scanf ("%d", &t);
            if (t <= 18)
                D3Xe5BiVQ9F = D3Xe5BiVQ9F +1;
            else {
                if ((t >= 19) && (t < 36))
                    aFJYERB769A = aFJYERB769A + 1;
                else if ((t >= 36) && (t < 61))
                    Woh74B = Woh74B +1;
                else
                    q = q + 1;
            };
        };
    }
    bA7iGLd8 = D3Xe5BiVQ9F *100.0 / a;
    printf ("1-18: %.2lf%%\n", bA7iGLd8);
    xQSkeZB = aFJYERB769A * 100.0 / a;
    printf ("19-35: %.2lf%%\n", xQSkeZB);
    z = Woh74B *100.0 / a;
    v = q * 100.0 / a;
    printf ("36-60: %.2lf%%\n", z);
    printf ("60??: %.2lf%%\n", v);
    return 0;
}

