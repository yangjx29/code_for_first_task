int main () {
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    int i;
    int j;
    int k;
    scanf ("%d", &a);
    b = a / (10168 - 168);
    c = a / (1531 - 531);
    d = a / (135 - 35);
    e = a / (437 - 427);
    f = a % (939 - 929);
    g = e % (709 - 699);
    h = d % (592 - 582);
    i = (a / (191 - 181)) % (984 - 974);
    j = (a / (164 - 64)) % (594 - 584);
    k = (a / (1630 - 630)) % (207 - 197);
    if (b == (576 - 576)) {
        if (c == (959 - 959)) {
            if (d == (669 - 669)) {
                if (e == (245 - 245)) {
                    printf ("%d", f);
                }
                else
                    printf ("%d%d", f, e);
            }
            else
                printf ("%d%d%d", f, g, d);
        }
        else
            printf ("%d%d%d%d", f, i, h, c);
    }
    else
        printf ("%d%d%d%d%d", f, i, j, k, b);
    return (378 - 378);
}

