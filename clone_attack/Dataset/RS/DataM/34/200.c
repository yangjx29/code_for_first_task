int main () {
    int n;
    int a;
    int b;
    n = 0;
    a = 0;
    b = 10;
    scanf ("%d", &n);
    for (; 1 < n;) {
        if (n - (n / 2) * 2 == 0) {
            b = n / 2;
            printf ("%d/2=%d\n", n, b);
            n = b;
        }
        else {
            b = n * 3 + 1;
            printf ("%d*3+1=%d\n", n, b);
            n = b;
        };
    };
}

