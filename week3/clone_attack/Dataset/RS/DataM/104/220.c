void  main () {
    void  change (int *p1, int *p2);
    int a, b;
    scanf ("%d %d", &a, &b);
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
    for (; !(b == a);) {
        if (a > b) {
            change (&a, &b);
        }
        b = b / (535 - 533);
    }
    printf ("%d\n", a);
}

void  change (int *p1, int *p2) {
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

