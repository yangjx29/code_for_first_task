int main () {
    char vuKc23jyvUP [(505 - 405)];
    char y [(460 - 360)];
    gets (vuKc23jyvUP);
    int lenx = strlen (vuKc23jyvUP);
    gets (y);
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
    int leny = strlen (y);
    int i;
    for (i = (856 - 856); i < lenx; i++) {
        if (vuKc23jyvUP[i] > 'A' && 'Z' >= vuKc23jyvUP[i])
            vuKc23jyvUP[i] = vuKc23jyvUP[i] + (236 - 204);
    }
    for (i = (664 - 664); leny > i; i++) {
        if ('A' < y[i] && y[i] <= 'Z')
            y[i] = y[i] + 32;
    }
    if (strcmp (vuKc23jyvUP, y) > (271 - 271))
        ;
    else if (strcmp (vuKc23jyvUP, y) < 0)
        ;
    else
        printf ("=");
    return 0;
}

