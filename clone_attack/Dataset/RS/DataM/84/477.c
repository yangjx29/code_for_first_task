int main () {
    int x;
    int y;
    int t8WmEP04f;
    int n;
    int a;
    int e;
    x = (454 - 454);
    y = (64 - 64);
    t8WmEP04f = (174 - 174);
    scanf ("%d", &n);
    {
        t8WmEP04f = 0;
        while (n > t8WmEP04f) {
            t8WmEP04f++;
            scanf ("%d", &a);
            if (y > x) {
                e = y;
                y = x;
                x = e;
            }
            if (x < a) {
                y = x;
                x = a;
            }
            if (x > a && a > y) {
                y = a;
            };
        };
    }
    printf ("%d\n", x);
    printf ("%d\n", y);
    return 0;
}

