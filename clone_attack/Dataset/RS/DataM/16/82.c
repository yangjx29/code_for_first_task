void  main () {
    int iEbI5T;
    int zdjPkn7Nrx;
    int I2nam3rg8;
    int JAyElcjg9wXF [5];
    scanf ("%d", &iEbI5T);
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
    zdjPkn7Nrx = 0;
    for (; iEbI5T >= 10;) {
        JAyElcjg9wXF[zdjPkn7Nrx] = iEbI5T % 10;
        zdjPkn7Nrx = zdjPkn7Nrx + 1;
        iEbI5T = iEbI5T / 10;
    }
    JAyElcjg9wXF[zdjPkn7Nrx] = iEbI5T;
    for (I2nam3rg8 = 0; I2nam3rg8 <= zdjPkn7Nrx; I2nam3rg8++)
        printf ("%d", JAyElcjg9wXF[I2nam3rg8]);
    printf ("\n");
}

