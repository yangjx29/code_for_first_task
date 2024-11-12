void  main () {
    char s [100];
    char w04wyC3 [(116 - 96)];
    char BQM0Xt [(184 - 164)];
    char g3eNr5Wcg6x [(415 - 365)] [20] = {" "};
    gets (s);
    int cjG7EMU1QX;
    int kCSJYv1q8D;
    int yzKlYIyC6LM;
    int xYyOXtFze8;
    cjG7EMU1QX = (527 - 527);
    kCSJYv1q8D = (863 - 863);
    yzKlYIyC6LM = strlen (s);
    for (xYyOXtFze8 = (730 - 730); yzKlYIyC6LM > xYyOXtFze8; xYyOXtFze8 = xYyOXtFze8 + 1) {
        if (s[xYyOXtFze8] != ' ')
            g3eNr5Wcg6x[cjG7EMU1QX][kCSJYv1q8D++] = s[xYyOXtFze8];
        else {
            kCSJYv1q8D = (691 - 691);
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
            cjG7EMU1QX++;
        }
        if (!('\0' != s[xYyOXtFze8 + (720 - 719)]))
            cjG7EMU1QX++;
    }
    afm6zRP89QKN = &g3eNr5Wcg6x[0];
    scanf ("%s", w04wyC3);
    scanf ("%s", BQM0Xt);
    for (xYyOXtFze8 = 0; xYyOXtFze8 < cjG7EMU1QX; xYyOXtFze8++) {
        if (strcmp (w04wyC3, *(afm6zRP89QKN + xYyOXtFze8)) == 0)
            strcpy (*(afm6zRP89QKN + xYyOXtFze8), BQM0Xt);
    }
    {
        xYyOXtFze8 = 0;
        while (xYyOXtFze8 < cjG7EMU1QX) {
            if (xYyOXtFze8 == 0)
                printf ("%s", *(afm6zRP89QKN + xYyOXtFze8));
            else
                printf (" %s", *(afm6zRP89QKN + xYyOXtFze8));
            xYyOXtFze8++;
        };
    };
}

