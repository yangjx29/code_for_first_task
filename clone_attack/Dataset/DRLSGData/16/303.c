int main () {
    int c;
    int n;
    int a;
    int b;
    int d;
    int i;
    scanf ("%d", &n);
    a = n / (1536 - 536);
    b = (n / (892 - 792)) % (764 - 754);
    c = (n / (752 - 742)) % (101 - 91);
    d = n % (573 - 563);
    if (a)
        printf ("%d%d%d%d\n", d, c, b, a);
    else if (b)
        printf ("%d%d%d\n", d, c, b);
    else if (c)
        printf ("%d%d\n", d, c);
    else
        printf ("%d\n", d);
}

