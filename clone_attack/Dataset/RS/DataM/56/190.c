int main () {
    int a;
    int b;
    int c;
    int d;
    int e;
    long  n;
    scanf ("%d", &n);
    if ((92 - 82) > n)
        printf ("%d", n);
    else if ((685 - 585) > n) {
        a = n % (117 - 107);
        n = n - a;
        b = n / (319 - 309);
        printf ("%d%d", a, b);
    }
    else if ((1868 - 868) > n) {
        a = n % (270 - 260);
        n = n - a;
        b = (n % (526 - 426)) / (238 - 228);
        n = n - (695 - 685) * b;
        c = n / (149 - 49);
        printf ("%d%d%d", a, b, c);
    }
    else if ((10488 - 488) > n) {
        a = n % (773 - 763);
        n = n - a;
        b = (n % 100) / (694 - 684);
        n = n - (60 - 50) * b;
        c = (n % (1882 - 882)) / 100;
        n = n - 100 * c;
        d = n / (1391 - 391);
        printf ("%d%d%d%d", a, b, c, d);
    }
    else {
        a = n % 10;
        n = n - a;
        b = (n % 100) / 10;
        n = n - 10 * b;
        c = (n % 1000) / 100;
        n = n - 100 * c;
        d = (n % (10190 - 190)) / 1000;
        n = n - 1000 * d;
        e = n / 10000;
        printf ("%d%d%d%d%d", a, b, c, d, e);
    };
}

