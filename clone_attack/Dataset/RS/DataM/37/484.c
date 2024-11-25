main () {
    char c [100000];
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
    int vdGBOJ, kIXO7Uu0, aKwHirQ7ECZ, t, b [150];
    scanf ("%d", &vdGBOJ);
    for (kIXO7Uu0 = 1; kIXO7Uu0 <= vdGBOJ; kIXO7Uu0 = kIXO7Uu0 + 1) {
        memset (b, 0, sizeof (b));
        scanf ("%s", c);
        aKwHirQ7ECZ = 0;
        for (; !(0 == c[aKwHirQ7ECZ]);) {
            b[c[aKwHirQ7ECZ]]++;
            aKwHirQ7ECZ++;
        }
        for (t = 0; t < aKwHirQ7ECZ; t++) {
            if (b[c[t]] == 1) {
                printf ("%c\n", c[t]);
                break;
            }
            if (b[c[aKwHirQ7ECZ - 1]] != 1 && t == aKwHirQ7ECZ - 1)
                printf ("%c%c\n", 'n', 'o');
        };
    };
}

