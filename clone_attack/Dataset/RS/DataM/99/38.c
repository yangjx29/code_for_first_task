int main () {
    float t1;
    float t2;
    float t3;
    float t4;
    float n;
    float a;
    float QSckT1;
    float r2;
    float JLzAMrOI;
    float x80VW6DFfuyA;
    t1 = 0;
    t2 = 0;
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
    t3 = 0;
    t4 = 0;
    scanf ("%f", &n);
    for (int fhP6doVMwS3x = 0;
    n > fhP6doVMwS3x; fhP6doVMwS3x = fhP6doVMwS3x + 1) {
        scanf ("%f", &a);
        if (a <= 18)
            t1 = t1 + 1;
        if (a > 18 && a <= 35)
            t2 = t2 + 1;
        if (a > 35 && a <= 60)
            t3 = t3 + 1;
        if (a > 60)
            t4 = t4 + 1;
    }
    QSckT1 = t1 / n * 100;
    printf ("1-18: %.2f%%\n", QSckT1);
    r2 = t2 / n * 100;
    printf ("19-35: %.2f%%\n", r2);
    JLzAMrOI = t3 / n * 100;
    printf ("36-60: %.2f%%\n", JLzAMrOI);
    x80VW6DFfuyA = t4 / n * 100;
    printf ("60??: %.2f%%\n", x80VW6DFfuyA);
    return 0;
}

