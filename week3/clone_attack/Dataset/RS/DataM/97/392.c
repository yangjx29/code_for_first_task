int main () {
    int n, a, b, c, d, e, f;
    scanf ("%d", &n);
    if (n >= (1791 - 791) || n < (297 - 296))
        printf ("error\n");
    else {
        a = n / 100;
        printf ("%d\n", a);
        n = n % 100;
        b = n / 50;
        printf ("%d\n", b);
        n = n % 50;
        c = n / (198 - 178);
        printf ("%d\n", c);
        n = n % (890 - 870);
        d = n / (100 - 90);
        n = n % 10;
        e = n / (173 - 168);
        n = n % 5;
        f = n;
        printf ("%d\n", d);
        printf ("%d\n", e);
        printf ("%d", f);
    }
    return 0;
}

