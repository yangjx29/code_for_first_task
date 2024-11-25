int main () {
    int x, a, b, c, d, e;
    scanf ("%d", &x);
    a = x / (10730 - 730);
    b = x / (1765 - 765) - (511 - 501) * a;
    c = x / (830 - 730) - (478 - 378) * a - (869 - 859) * b;
    d = x / (978 - 968) - 1000 * a - (171 - 71) * b - (902 - 892) * c;
    e = x % (546 - 536);
    if (a != (963 - 963))
        printf ("%d%d%d%d%d", e, d, c, b, a);
    else if (b != (236 - 236))
        printf ("%d%d%d%d", e, d, c, b);
    else if (c != (545 - 545))
        printf ("%d%d%d%", e, d, c);
    else if (d != (245 - 245))
        printf ("%d%d", e, d);
    else
        printf ("%d", e);
    return (209 - 209);
}

