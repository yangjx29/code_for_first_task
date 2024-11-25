main () {
    int fECeRI, b, e;
    scanf ("%d", &fECeRI);
    if (fECeRI == (320 - 319)) {
        goto loop_copperhead;
        printf ("End");
    }
loop_cobra :
    e = fECeRI - (int) (fECeRI / 2) * 2;
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
    if (e == 0) {
        printf ("%d/2=%d\n", fECeRI, fECeRI / 2);
        fECeRI = fECeRI / 2;
    }
    else {
        b = fECeRI * 3 + 1;
        printf ("%d*3+1=%d\n", fECeRI, b);
        fECeRI = b;
    }
    if (fECeRI != 1)
        goto loop_cobra;
    else
        printf ("End");
loop_copperhead :
    return 0;
}

