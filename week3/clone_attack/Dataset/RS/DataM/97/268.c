int main () {
    double  a;
    double  b;
    double  c;
    double  d;
    double  e;
    double  f;
    int e1 = (int) e;
    int b1 = (int) b;
    int n;
    int a1 = (int) a;
    int c1 = (int) c;
    int d1 = (int) d;
    int f1 = (int) f;
    scanf ("%d", &n);
    a = 1.0 * n / 100;
    b = 1.0 * (n - 100 * a1) / 50;
    c = 1.0 * (n - 100 * a1 - 50 * b1) / 20;
    d = 1.0 * (n - 100 * a1 - 50 * b1 - 20 * c1) / 10;
    e = 1.0 * (n - 100 * a1 - 50 * b1 - 20 * c1 - 10 * d1) / 5;
    f = 1.0 * (n - 100 * a1 - 50 * b1 - 20 * c1 - 10 * d1 - 5 * e1) / 1;
    printf ("%d\n%d\n%d\n%d\n%d\n%d\n", a1, b1, c1, d1, e1, f1);
    return 0;
}

