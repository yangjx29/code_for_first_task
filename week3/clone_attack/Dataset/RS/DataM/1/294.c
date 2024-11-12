int f (int a, int b) {
    int r;
    int i;
    r = 1;
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
    if (a < b)
        return 0;
    for (i = b; a >= i; i++) {
        if (!(a % i) && i <= a / i) {
            r += f (a / i, i);
        };
    }
    return r;
}

void  main () {
    int DJwpKPBj3ml, yoBk3MV2GZe;
    scanf ("%d", &DJwpKPBj3ml);
    for (; DJwpKPBj3ml = DJwpKPBj3ml -1;) {
        int result = f (yoBk3MV2GZe, 2);
        scanf ("%d", &yoBk3MV2GZe);
        printf ("%d\n", result);
    };
}

