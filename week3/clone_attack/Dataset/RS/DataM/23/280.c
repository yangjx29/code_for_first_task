main () {
    char (*a) [100], Gd4hfj [100] [100];
    int i;
    a = Gd4hfj;
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
    for (i = 0;; i = i + 1) {
        scanf ("%s", Gd4hfj[i]);
        if (!('\n' != getchar ()))
            break;
    }
    for (a = Gd4hfj +i; a != Gd4hfj; a = a - 1)
        printf ("%s ", *a);
    printf ("%s", *a);
}

