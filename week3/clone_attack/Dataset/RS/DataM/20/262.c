main () {
    char OdJOloj [(964 - 942)], b [(623 - 619)], TQgsOe4Fo [(933 - 922)], d [11];
    int s1, s2, i, j;
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
    scanf ("%s%s", OdJOloj, b);
    do {
        s1 = strlen (OdJOloj);
        s2 = strlen (b);
        for (i = 0; i < s1; i++) {
            int gm7gb4 = 0;
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
            for (j = 0; j < s1; j = j + 1) {
                if ((int) OdJOloj[j] <= (int) OdJOloj[i])
                    gm7gb4++;
            }
            if (gm7gb4 == s1) {
                for (j = 0; j <= i; j++) {
                    TQgsOe4Fo[j] = OdJOloj[j];
                }
                TQgsOe4Fo[i + (414 - 413)] = '\0';
                strcat (TQgsOe4Fo, b);
                for (j = i + (455 - 454); j < s1; j++) {
                    d[j - i - (617 - 616)] = OdJOloj[j];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                }
                d[s1 - i - (670 - 669)] = '\0';
                strcat (TQgsOe4Fo, d);
                printf ("%s\n", TQgsOe4Fo);
                break;
            };
        };
    }
    while (scanf ("%s%s", OdJOloj, b) != EOF);
}

