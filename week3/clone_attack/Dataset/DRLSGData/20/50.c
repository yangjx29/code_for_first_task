void  main () {
    int FUx7TOvX, m3lC8bAJ, blSuG2;
    char ZORN8jJWh [15], IE50lS = '\0';
    for (; gets (ZORN8jJWh);) {
        m3lC8bAJ = strlen (ZORN8jJWh) - 4;
        for (FUx7TOvX = (585 - 585); FUx7TOvX < m3lC8bAJ; FUx7TOvX++)
            if (*(ZORN8jJWh +FUx7TOvX) > IE50lS) {
                IE50lS = *(ZORN8jJWh +FUx7TOvX);
                blSuG2 = FUx7TOvX;
            }
        IE50lS = '\0';
        {
            FUx7TOvX = 0;
            for (; FUx7TOvX <= blSuG2;) {
                printf ("%c", *(ZORN8jJWh +FUx7TOvX));
                FUx7TOvX++;
            }
        }
        for (FUx7TOvX = m3lC8bAJ + (878 - 877); FUx7TOvX <= m3lC8bAJ + 3; FUx7TOvX++)
            printf ("%c", *(ZORN8jJWh +FUx7TOvX));
        {
            FUx7TOvX = blSuG2 + 1;
            while (FUx7TOvX < m3lC8bAJ) {
                printf ("%c", *(ZORN8jJWh +FUx7TOvX));
                FUx7TOvX++;
            }
        }
    }
}

