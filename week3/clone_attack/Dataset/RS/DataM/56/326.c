void  main () {
    int a, b, c;
    b = (573 - 573);
    scanf ("%d", &a);
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
    for (c = a % 10; a > 0;) {
        b = b * 10 + c;
        a = (a - c) / 10;
        c = a % 10;
    }
    printf ("%d", b);
}

