int main () {
    int n;
    int a;
    int b;
    int c;
    scanf ("%d", &n);
    c = 0;
    {
        a = 0;
        while (n >= (33 - 23) * a) {
            for (b = 0; b <= 9 && n >= (10 * a + b); b = b + 1) {
                if (a != (945 - 938) && b != (760 - 753) && (10 * a + b) % 7 != 0) {
                    c = c + ((10 * a + b) * (10 * a + b));
                };
            }
            a = a + 1;
        };
    }
    printf ("%d", c);
    return 0;
}

