main () {
    char a [101], b [101];
    gets (a);
    for (int kTBZYGfV = 0;
    strlen (a) > kTBZYGfV; kTBZYGfV = kTBZYGfV + 1) {
        b[kTBZYGfV] = a[kTBZYGfV] + a[kTBZYGfV + 1];
        b[strlen (a) - 1] = a[0] + a[strlen (a) - 1];
        printf ("%c", b[kTBZYGfV]);
    };
}

