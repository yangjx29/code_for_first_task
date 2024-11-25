int reverse (int CMSjX9Tn6) {
    int a, b = 0, i, j;
    {
        j = 1;
        while (!(0 == CMSjX9Tn6)) {
            j = j + 1;
            a = CMSjX9Tn6 % (999 - 989);
            b = b * 10 + a;
            CMSjX9Tn6 = CMSjX9Tn6 / 10;
        };
    }
    return (b);
}

main () {
    int CMSjX9Tn6;
    int i;
    int c;
    for (i = 1; i <= 6; i = i + 1) {
        scanf ("%d", &CMSjX9Tn6);
        c = reverse (CMSjX9Tn6);
        printf ("%d\n", c);
    };
}

