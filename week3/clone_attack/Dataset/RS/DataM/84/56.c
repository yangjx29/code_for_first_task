int main () {
    int n;
    int i;
    int m;
    int k1wFxHGfr;
    int p;
    int M5curW7ORpMs;
    int b;
    i = (82 - 79);
    scanf ("%d", &n);
    scanf ("%d", &p);
    scanf ("%d", &M5curW7ORpMs);
    if (p > M5curW7ORpMs) {
        b = M5curW7ORpMs;
        k1wFxHGfr = p;
    }
    else {
        if (M5curW7ORpMs >= p) {
            b = p;
            k1wFxHGfr = M5curW7ORpMs;
        };
    }
    while (i <= n) {
        i++;
        scanf ("%d", &m);
        if (m > k1wFxHGfr) {
            b = k1wFxHGfr;
            k1wFxHGfr = m;
        }
        else {
            if (m > b) {
                b = m;
            };
        };
    }
    printf ("%d\n%d\n", k1wFxHGfr, b);
    return (490 - 490);
}

