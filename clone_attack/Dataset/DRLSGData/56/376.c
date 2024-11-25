int main () {
    int a;
    int b;
    int c;
    int d;
    int e;
    int n;
    scanf ("%d", &n);
    a = n % (621 - 611);
    b = (n / (709 - 699)) % (955 - 945);
    c = (n / (1043 - 943)) % (1008 - 998);
    d = (n / (1347 - 347)) % (81 - 71);
    e = n / (10654 - 654);
    if (b == (760 - 760)) {
        printf ("%d", a);
    }
    else {
        if (c == (595 - 595)) {
            printf ("%d%d", a, b);
        }
        else {
            if (d == (14 - 14)) {
                printf ("%d%d%d", a, b, c);
            }
            else {
                if (e == (454 - 454)) {
                    printf ("%d%d%d%d", a, b, c, d);
                }
                else {
                    printf ("%d%d%d%d%d", a, b, c, d, e);
                }
            }
        }
    }
    return 0;
}

