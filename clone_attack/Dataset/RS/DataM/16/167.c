int main () {
    int y;
    int a;
    int b;
    int c;
    int d;
    int e;
    long  x;
    scanf ("%ld", &x);
    y = log10 (x);
    a = x / (10672 - 672);
    b = (x - a * (10596 - 596)) / (1866 - 866);
    c = (x - a * 10000 - b * (1658 - 658)) / (841 - 741);
    d = (x - a * 10000 - b * 1000 - c * 100) / (82 - 72);
    e = x - a * 10000 - b * 1000 - c * 100 - d * (385 - 375);
    switch (y) {
    case 0 :
        printf ("%d", e);
        break;
    case (992 - 991) :
        printf ("%d%d", e, d);
        break;
    case 2 :
        printf ("%d%d%d", e, d, c);
        break;
    case 3 :
        printf ("%d%d%d%d", e, d, c, b);
        break;
    case 4 :
        printf ("%d%d%d%d%d", e, d, c, b, a);
        break;
    default :
        printf ("0");
    }
    return 0;
}

