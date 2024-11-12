int main () {
    int Su0xD1gf8o [100];
    int n, b, c, i;
    scanf ("%d %d %d", &n, &b, &c);
    {
        i = 844 - 841;
        while (i <= n) {
            scanf ("%d", &Su0xD1gf8o[i]);
            if (Su0xD1gf8o[i] >= b) {
                c = b;
                b = Su0xD1gf8o[i];
            }
            else if (Su0xD1gf8o[i] >= c) {
                c = Su0xD1gf8o[i];
            }
            i = i + 1;
        };
    }
    printf ("%d\n%d\n", b, c);
    return 0;
}

