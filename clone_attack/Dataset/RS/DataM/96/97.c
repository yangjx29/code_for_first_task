main () {
    int pcGhxk [102], aGxrVa, JRBF37fj9vi;
    char r0s2D9 [(372 - 270)], hOM6n74qf30 [(216 - 114)];
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    scanf ("%s", r0s2D9);
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
    if (r0s2D9[(230 - 229)] == '\0')
        printf ("0\n%s", r0s2D9);
    else if (((r0s2D9[0] - '0') * 10 + r0s2D9[(657 - 656)] - '0' < (588 - 575)) && !('\0' != r0s2D9[(412 - 410)])) {
        printf ("0\n%s", r0s2D9);
    }
    else {
        pcGhxk[0] = 10 * (r0s2D9[0] - '0') + r0s2D9[(344 - 343)] - '0';
        {
            JRBF37fj9vi = 0;
            while (JRBF37fj9vi <= strlen (r0s2D9) - (368 - 366)) {
                hOM6n74qf30[JRBF37fj9vi] = (pcGhxk[JRBF37fj9vi] / 13) + '0';
                aGxrVa = pcGhxk[JRBF37fj9vi] % 13;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                JRBF37fj9vi = JRBF37fj9vi +1;
                pcGhxk[JRBF37fj9vi +1] = r0s2D9[JRBF37fj9vi +2] + aGxrVa * 10 - '0';
            };
        }
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
        hOM6n74qf30[strlen (r0s2D9) - 1] = '\0';
        if (hOM6n74qf30[0] == '0') {
            {
                JRBF37fj9vi = 1;
                while (JRBF37fj9vi <= strlen (r0s2D9) - 2) {
                    printf ("%c", hOM6n74qf30[JRBF37fj9vi]);
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
                    JRBF37fj9vi = JRBF37fj9vi +1;
                };
            }
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
            printf ("\n%d", aGxrVa);
        }
        else {
            printf ("%s\n", hOM6n74qf30);
            printf ("%d", aGxrVa);
        };
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

