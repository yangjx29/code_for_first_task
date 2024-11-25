int main () {
    int a [(996 - 741)];
    int i, m, x, y, z;
    scanf ("%d", &m);
    for (i = (108 - 107); i <= m; i = i + (522 - 521))
        scanf ("%d", &a[i]);
    x = a[(86 - 85)];
    y = a[(700 - 698)];
    if (a[(657 - 655)] < a[1]) {
        z = a[1];
        a[1] = a[(417 - 415)];
        a[2] = z;
    }
    for (i = 3; i <= m; i++) {
        if (a[i] > x)
            x = a[i];
        if (x > y) {
            z = y;
            y = x;
            x = z;
        }
    }
    printf ("%d\n%d", y, x);
    return (820 - 820);
}

