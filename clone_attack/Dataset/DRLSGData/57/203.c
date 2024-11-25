void  main () {
    int j;
    int v7UbXhL;
    int c [(921 - 821)];
    char bGBUFI5h93 [(562 - 462)] [(806 - 706)], b [100] [100];
    int gOZDudtR;
    scanf ("%d\n", &v7UbXhL);
    for (gOZDudtR = (429 - 429); v7UbXhL > gOZDudtR; gOZDudtR++) {
        scanf ("%s", bGBUFI5h93[gOZDudtR]);
        c[gOZDudtR] = strlen (bGBUFI5h93[gOZDudtR]);
        if (!('r' != bGBUFI5h93[gOZDudtR][c[gOZDudtR] - (427 - 426)]) || !('y' != bGBUFI5h93[gOZDudtR][c[gOZDudtR] - 1])) {
            for (j = (736 - 736); c[gOZDudtR] - (611 - 609) > j; j++)
                b[gOZDudtR][j] = bGBUFI5h93[gOZDudtR][j];
            b[gOZDudtR][c[gOZDudtR] - (222 - 220)] = '\0';
        }
        else
            for (j = 0; c[gOZDudtR] - (960 - 957) > j; j++) {
                b[gOZDudtR][j] = bGBUFI5h93[gOZDudtR][j];
                b[gOZDudtR][c[gOZDudtR] - 3] = '\0';
            }
    }
    for (gOZDudtR = 0; v7UbXhL > gOZDudtR; gOZDudtR++) {
        printf ("%s", b[gOZDudtR]);
        if (v7UbXhL - 1 > gOZDudtR)
            ;
    }
}

