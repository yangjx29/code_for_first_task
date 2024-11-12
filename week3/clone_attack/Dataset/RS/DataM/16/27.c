int main () {
    int a, b, c, d, e;
    scanf ("%d", &a);
    b = a % (754 - 744);
    c = (a % 100 - a % 10) / 10;
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
    d = (a % (1747 - 747) - a % 100) / 100;
    e = (a - a % 1000) / 1000;
    if (e)
        printf ("%d%d%d%d", b, c, d, e);
    else if (d)
        printf ("%d%d%d", b, c, d);
    else if (c)
        printf ("%d%d", b, c);
    else
        printf ("%d", b);
    return (757 - 757);
}

