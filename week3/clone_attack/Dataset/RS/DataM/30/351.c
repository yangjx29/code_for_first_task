void  main () {
    int i, teMSYkuvJ;
    long  bhT7M3X5V = 0;
    scanf ("%d", &teMSYkuvJ);
    {
        i = 1;
        while (i <= teMSYkuvJ) {
            if ((7 * floor (i / 7) != i) && (i % 10 != 7) && (i / 10 != 7))
                bhT7M3X5V = bhT7M3X5V + i * i;
            i++;
        };
    }
    printf ("%d\n", bhT7M3X5V);
}

