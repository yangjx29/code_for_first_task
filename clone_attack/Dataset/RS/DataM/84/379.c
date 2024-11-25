int main () {
    int n;
    int i;
    int a;
    int b;
    int c;
    i = (294 - 293);
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
    scanf ("%d", &n);
    b = 0;
    c = 0;
    for (; i <= n;) {
        i = i + 1;
        scanf ("%d", &a);
        if (a > b) {
            if (c < b) {
                c = b;
            }
            b = a;
        }
        else if (c < a) {
            c = a;
        }
        else
            ;
    }
    printf ("%d\n", b);
    printf ("%d\n", c);
    return 0;
}

