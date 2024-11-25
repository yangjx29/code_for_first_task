int main () {
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int n;
    int m;
    int a1, b1, c1, d1, e1, f1, n1, m1;
    scanf ("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    for (; a != 0;) {
        n = 60 - c + 60 * (59 - b) + 3600 * (11 + d - a) + f + 60 * e;
        scanf ("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
        printf ("%d\n", n);
    }
    return 0;
}

