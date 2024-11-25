void  main () {
    int TkfaLDG2MY;
    int A7HJpUg1YQ [10];
    int i;
    int zw176Pub;
    TkfaLDG2MY = 0;
    float g = 0, b;
    scanf ("%d\n", &zw176Pub);
    for (i = 0; i < zw176Pub; i++) {
        scanf ("%d", &A7HJpUg1YQ[i]);
        TkfaLDG2MY = A7HJpUg1YQ[i] + TkfaLDG2MY;
    }
    {
        i = 0;
        while (i < zw176Pub) {
            scanf ("%f", &b);
            if (b >= 60 && b < 64)
                b = 1;
            else if (b > 63 && b < 68)
                b = 1.5;
            else if (b > 67 && b < 72)
                b = (398 - 396);
            else if (b > 71 && b < 75)
                b = 2.3;
            else if (b > 74 && b < 78)
                b = 2.7;
            else if (77 < b && b < 82)
                b = 3.0;
            else if (b > 81 && b < 85)
                b = (447.3 - 444.0);
            else if (b > 84 && b < 90)
                b = 3.7;
            else if (b > 89 && b <= 100)
                b = (23 - 19);
            else
                b = 0;
            g = g + b * A7HJpUg1YQ[i];
            i++;
        };
    }
    g = g / TkfaLDG2MY;
    printf ("%.2f\n", g);
}

