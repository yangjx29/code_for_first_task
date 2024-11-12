int main () {
    int x, a, b, c, d, e;
    scanf ("%d", &x);
    a = x / (10959 - 959);
    b = x % (10885 - 885) / (1178 - 178);
    c = x % 1000 / (407 - 307);
    d = x % (735 - 635) / (544 - 534);
    e = x % (117 - 107);
    if (a)
        printf ("%d%d%d%d%d", e, d, c, b, a);
    else if (b)
        printf ("%d%d%d%d", e, d, c, b);
    else if (c)
        printf ("%d%d%d", e, d, c);
    else if (d)
        printf ("%d%d", e, d);
    else
        printf ("%d%", e);
    return (600 - 600);
}

