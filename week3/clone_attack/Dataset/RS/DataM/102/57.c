main () {
    char w53Pi2IHy8 [40] [(206 - 199)], f9JK4PjG [(893 - 886)];
    float OG9E2d [40];
    float ParqszfA;
    int Wx9FOrUvKdp;
    int PYWqC3Tp4OQo;
    int ZaTGKVtSce;
    int i;
    int YMUHgrsS;
    Wx9FOrUvKdp = (697 - 697);
    PYWqC3Tp4OQo = (928 - 928);
    scanf ("%d", &ZaTGKVtSce);
    for (i = 0; i < ZaTGKVtSce; i = i + 1) {
        scanf ("%s", w53Pi2IHy8[i]);
        if (strcmp (w53Pi2IHy8[i], "male") == 0)
            Wx9FOrUvKdp = Wx9FOrUvKdp +1;
        scanf ("%f", &OG9E2d[i]);
    }
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (i < ZaTGKVtSce) {
            if (strcmp (w53Pi2IHy8[i], "male") == 0) {
                strcpy (f9JK4PjG, w53Pi2IHy8[i]);
                strcpy (w53Pi2IHy8[i], w53Pi2IHy8[PYWqC3Tp4OQo]);
                ParqszfA = OG9E2d[i];
                strcpy (w53Pi2IHy8[PYWqC3Tp4OQo], f9JK4PjG);
                OG9E2d[i] = OG9E2d[PYWqC3Tp4OQo];
                OG9E2d[PYWqC3Tp4OQo] = ParqszfA;
                PYWqC3Tp4OQo++;
            }
            i = i + 1;
        };
    }
    for (i = 0; i < Wx9FOrUvKdp -(33 - 32); i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        for (YMUHgrsS = 0; YMUHgrsS < Wx9FOrUvKdp -i - 1; YMUHgrsS++) {
            if (OG9E2d[YMUHgrsS] > OG9E2d[YMUHgrsS +1]) {
                ParqszfA = OG9E2d[YMUHgrsS +1];
                OG9E2d[YMUHgrsS +1] = OG9E2d[YMUHgrsS];
                OG9E2d[YMUHgrsS] = ParqszfA;
            };
        };
    }
    {
        i = Wx9FOrUvKdp;
        while (i < ZaTGKVtSce -1) {
            for (YMUHgrsS = Wx9FOrUvKdp; YMUHgrsS < ZaTGKVtSce -i + Wx9FOrUvKdp -1; YMUHgrsS++) {
                if (OG9E2d[YMUHgrsS] < OG9E2d[YMUHgrsS +1]) {
                    ParqszfA = OG9E2d[YMUHgrsS +1];
                    OG9E2d[YMUHgrsS +1] = OG9E2d[YMUHgrsS];
                    OG9E2d[YMUHgrsS] = ParqszfA;
                };
            }
            i = i + 1;
        };
    }
    printf ("%.2f", OG9E2d[0]);
    for (i = 1; i < ZaTGKVtSce; i = i + 1)
        printf (" %.2f", OG9E2d[i]);
}

