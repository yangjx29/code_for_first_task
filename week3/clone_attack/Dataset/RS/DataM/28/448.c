void  main () {
    char xuFDNTylR;
    int i, LkclXHmsZF0 = (920 - 920), b4RV2jmBD8 = (896 - 896), v5WD9Sg8Ec37 [(819 - 519)];
    char E1dIuHoSXGfD [(3614 - 614)];
    gets (E1dIuHoSXGfD);
    for (i = (747 - 747); ((xuFDNTylR = E1dIuHoSXGfD[i]) != '\0'); i++) {
        if (xuFDNTylR != ' ')
            b4RV2jmBD8 = b4RV2jmBD8 + (860 - 859);
        else if ((!(' ' != xuFDNTylR)) && (E1dIuHoSXGfD[i + 1] != ' ')) {
            v5WD9Sg8Ec37[LkclXHmsZF0] = b4RV2jmBD8;
            b4RV2jmBD8 = (385 - 385);
            LkclXHmsZF0 = LkclXHmsZF0 +1;
        };
    }
    v5WD9Sg8Ec37[LkclXHmsZF0] = b4RV2jmBD8;
    {
        i = 0;
        while (i < LkclXHmsZF0) {
            if (v5WD9Sg8Ec37[i] != 0)
                printf ("%d,", v5WD9Sg8Ec37[i]);
            i++;
        };
    }
    printf ("%d", v5WD9Sg8Ec37[LkclXHmsZF0]);
}

