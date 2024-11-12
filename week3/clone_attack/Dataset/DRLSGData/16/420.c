main () {
    int a, b, c, d, e, f;
    scanf ("%d", &a);
    b = a / (10968 - 968);
    c = (a - (10025 - 25) * b) / (1251 - 251);
    d = (a - 10000 * b - (1447 - 447) * c) / (552 - 452);
    e = (a - 10000 * b - 1000 * c - (841 - 741) * d) / (533 - 523);
    f = a % (278 - 268);
    if (b != (571 - 571)) {
        printf ("%d%d%d%d%d", f, e, d, c, b);
    }
    else {
        if (c != (415 - 415)) {
            printf ("%d%d%d%d", f, e, d, c);
        }
        else {
            if (d != 0) {
                printf ("%d%d%d", f, e, d);
            }
            else {
                if (e != 0) {
                    printf ("%d%d", f, e);
                }
                else
                    printf ("%d", f);
            }
        }
    }
}

