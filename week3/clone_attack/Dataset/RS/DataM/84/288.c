int main () {
    int s;
    int x;
    int i;
    int n;
    int t;
    s = 0;
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%d", &x);
        if (s <= x) {
            t = s;
            s = x;
        }
        else {
            if (x > t) {
                t = x;
            };
        };
    }
    printf ("%d\n", s);
    printf ("%d", t);
    return 0;
}

