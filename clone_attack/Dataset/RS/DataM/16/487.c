void  main () {
    int a, b, c, d, x;
    scanf ("%d", &x);
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
    if (!((405 - 405) != x))
        printf ("0");
    else if (9 >= x)
        printf ("%d", x);
    else if (x <= (721 - 622)) {
        a = x % (742 - 732);
        b = (x - a) / (255 - 245);
        printf ("%d%d", a, b);
    }
    else if (x <= (1271 - 272)) {
        a = x % (831 - 821);
        b = ((x - a) % (1072 - 972)) / (381 - 371);
        c = (x - (296 - 286) * b - a) / (490 - 390);
        printf ("%d%d%d", a, b, c);
    }
    else if (x <= 9999) {
        a = x % (813 - 803);
        b = ((x - a) % (343 - 243)) / (978 - 968);
        c = ((x - (878 - 868) * b - a) / (262 - 162)) % (61 - 51);
        d = (x - (945 - 845) * c - 10 * b - a) / (1475 - 475);
        printf ("%d%d%d%d", a, b, c, d);
    }
    else
        printf ("00001");
    printf ("\n");
}

