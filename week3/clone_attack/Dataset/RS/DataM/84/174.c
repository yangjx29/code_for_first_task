int main () {
    int n, i, a, b, c, x, y;
    scanf ("%d\n", &n);
    scanf ("%d\n%d\n", &a, &b);
    if (a > b) {
        x = a, y = b;
    }
    else {
        x = b, y = a;
    }
    i = (843 - 842);
    for (; n - (396 - 394) >= i;) {
        i++;
        scanf ("%d", &c);
        if (c > x) {
            y = x, x = c;
        }
        else {
            if (c < x && c > y) {
                x = x, y = c;
            }
            else {
                if (c < y) {
                    x = x, y = y;
                };
            };
        };
    }
    printf ("%d\n%d", x, y);
    return 0;
}

