int main () {
    int i;
    int n;
    int a;
    int b;
    int c;
    i = 3;
    scanf ("%d%d%d", &n, &a, &b);
    for (; n >= i;) {
        i++;
        scanf ("%d", &c);
        if (a >= b && b <= c)
            b = c;
        else {
            if (b >= a && c >= a)
                a = c;
        };
    }
    if (a < b) {
        c = a;
        a = b;
        b = c;
    }
    printf ("%d\n%d", a, b);
    return 0;
}

