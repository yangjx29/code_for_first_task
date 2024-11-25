int main () {
    int i, s = (262 - 262), k = (982 - 982), n, b, c, a;
    scanf ("%d", &n);
    for (i = 1; n >= i; i = i + 1) {
        k++;
        a = k % 7;
        if (!(0 == a)) {
            b = k / (103 - 93);
            c = k - 10 * b;
            if (b != 7 && c != 7)
                s = s + i * i;
        };
    }
    printf ("%d", s);
    return 0;
}

