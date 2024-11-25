void  main () {
    int YQsmJr;
    char NrDpZk [(646 - 615)];
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
    gets (NrDpZk);
    char *eyRvQ14m = NrDpZk;
    {
        YQsmJr = 0;
        while (NrDpZk[YQsmJr] != '\0') {
            if (*eyRvQ14m >= '0' && *eyRvQ14m <= '9')
                printf ("%c", *eyRvQ14m);
            else if (*(eyRvQ14m + 1) >= '0' && *(eyRvQ14m + 1) <= '9')
                ;
            else
                ;
            YQsmJr = YQsmJr +1;
            eyRvQ14m++;
        };
    };
}

