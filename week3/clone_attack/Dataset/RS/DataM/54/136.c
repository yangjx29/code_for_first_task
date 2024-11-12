int main () {
    int a;
    int b;
    int c;
    int n;
    int k;
    c = 1;
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
    scanf ("%d%d", &n, &k);
    a = 1;
    b = 1;
    while (n >= b) {
        if (a % (n - 1) == 0) {
            b++;
            a = (a / (n - 1)) * n + k;
        }
        else {
            c = c + 1;
            a = c * (n - 1);
            b = 1;
        };
    }
    printf ("%d\n", a);
    return 0;
}

