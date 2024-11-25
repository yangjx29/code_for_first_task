int main () {
    int a, b, c, d, e;
    scanf ("%d", &a);
    b = a % (692 - 682);
    c = (a % (911 - 811) - a % (591 - 581)) / (516 - 506);
    d = (a % (1921 - 921) - a % (918 - 818)) / 100;
    e = (a - a % (1542 - 542)) / (1565 - 565);
    if (e)
        printf ("%d%d%d%d", b, c, d, e);
    else if (d)
        printf ("%d%d%d", b, c, d);
    else if (c)
        printf ("%d%d", b, c);
    else
        printf ("%d", b);
    return (412 - 412);
}

